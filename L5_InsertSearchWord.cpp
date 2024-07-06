//***********************************ASHUTOSH KUMAR***********************************//
/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥

Karmanye vadhikaraste Ma Phaleshu Kadachana,
Ma Karmaphalaheturbhurma Te Sangostvakarmani,

The meaning of the verse is :—
You have the right to work only but never to its fruits.
Let not the fruits of action be your motive, nor let your attachment be to
inaction
*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *links[26];   // Array of pointers to child nodes, each representing a character (a-z).
    bool flag = false; // Flag to indicate if the node represents the end of a word.

    // Check if the given character is a key in the children nodes.
    bool ContainsKey(char ch)
    {
        return (links[ch - 'a'] != NULL); // Returns true if the link is not NULL.
    }

    // Put a new node at the corresponding index of the character.
    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }

    // Get the node corresponding to the given character.
    Node *get(char ch)
    {
        return links[ch - 'a'];
    }

    // Mark the node as the end of a word.
    void setEnd()
    {
        flag = true;
    }

    // Check if the node represents the end of a word.
    bool isEnd()
    {
        return flag;
    }
};

class Trie
{
private:
    Node *root; // Root node of the trie.
public:
    Trie()
    {
        root = new Node(); // Initialize the trie with an empty root node.
    }

    // Insert a word into the trie.
    void insert(string word)
    {
        Node *node = root;
        // Traverse the trie according to the characters in the word.
        for (int i = 0; i < word.size(); i++)
        {
            // If the current character is not a key in the children nodes, create a new node.
            if (!(node->ContainsKey(word[i])))
            {
                node->put(word[i], new Node());
            }
            // Move to the next node.
            node = node->get(word[i]);
        }
        // Mark the last node as the end of the word.
        node->setEnd();
    }

    // Search for a word in the trie.
    bool searchHelper(string word, int index, Node *node)
    {
        if (index == word.size())
        {
            return node->isEnd();
        }
        char ch = word[index];
        if (ch == '.')
        {
            for (int i = 0; i < 26; i++)
            {
                if (node->links[i] != NULL)
                {
                    if (searchHelper(word, index + 1, node->links[i]))
                    {
                        return true;
                    }
                }
            }
            return false;
        }
        else
        {
            if (!node->ContainsKey(ch))
            {
                return false;
            }
            return searchHelper(word, index + 1, node->get(ch));
        }
    }

    bool search(string word)
    {
        return searchHelper(word, 0, root);
    }
};
class WordDictionary
{
public:
    Trie *node;
    WordDictionary()
    {
        node = new Trie;
    }

    void addWord(string word)
    {
        node->insert(word);
    }

    bool search(string word)
    {
        return node->search(word);
    }
};

int main()
{
    return 0;
}