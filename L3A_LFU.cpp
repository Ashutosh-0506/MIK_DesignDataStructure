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
using namespace ::std;
class LFUCache
{

    int cap;                                            // Capacity of the cache
    int size;                                           // Current size of the cache
    unordered_map<int, list<vector<int>>::iterator> mp; // Map to store key and address (iterator) of the corresponding node in freq map
    map<int, list<vector<int>>> freq;                   // Map to store frequency as key and list of nodes with that frequency

public:
    LFUCache(int capacity)
    {
        cap = capacity;
        size = 0;
    }

    // Method to retrieve the value corresponding to a key
    int get(int key)
    {
        if (mp.find(key) == mp.end())
        {
            return -1; // Key not found in the cache
        }

        auto address = mp[key]; // Get the iterator to the node in the freq map
        auto &vec = *address;   // Dereference the iterator to get the node vector

        int value = vec[1];   // Extract value from the node vector
        int counter = vec[2]; // Extract frequency counter from the node vector

        freq[counter].erase(address); // Erase the node from its current frequency list
        if (freq[counter].empty())
        {
            freq.erase(counter); // If the frequency list becomes empty, erase the frequency from the freq map
        }

        counter++;                                       // Increment the frequency counter
        freq[counter].push_front({key, value, counter}); // Push the node to the front of the list with the new frequency
        mp[key] = freq[counter].begin();                 // Update the iterator in the mp map to point to the new node
        return value;                                    // Return the value corresponding to the key
    }

    // Method to insert or update a key-value pair in the cache
    void put(int key, int value)
    {
        if (cap == 0)
        {
            return; // If capacity is 0, do nothing
        }

        if (mp.find(key) != mp.end())
        {
            auto address = mp[key]; // Get the iterator to the existing node in the freq map
            auto &vec = *address;   // Dereference the iterator to get the node vector

            int counter = vec[2];         // Extract frequency counter from the node vector
            mp.erase(key);
            freq[counter].erase(address); // Erase the node from its current frequency list
            if (freq[counter].empty())
            {
                freq.erase(counter); // If the frequency list becomes empty, erase the frequency from the freq map
            }

            counter++;                                       // Increment the frequency counter
            freq[counter].push_front({key, value, counter}); // Push the node to the front of the list with the new frequency
            mp[key] = freq[counter].begin();                 // Update the iterator in the mp map to point to the new node
            return;
        }
        else if (size < cap)
        {
            size++;                          // Increment the size of the cache
            freq[1].push_front({key, value, 1}); // Push a new node with frequency 1 to the freq map
            mp[key] = freq[1].begin();           // Update the iterator in the mp map to point to the new node
        }
        else
        {
            auto &list_delete = freq.begin()->second;  // Get the list with the lowest frequency
            int key_to_delete = list_delete.back()[0]; // Extract the key of the least frequently used node
            list_delete.pop_back();                    // Remove the least frequently used node from the list
            if (list_delete.empty())
            {
                freq.erase(freq.begin()); // If the frequency list becomes empty, erase the frequency from the freq map
            }
            mp.erase(key_to_delete);             // Remove the corresponding entry from the mp map
            freq[1].push_front({key, value, 1}); // Push a new node with frequency 1 to the freq map
            mp[key] = freq[1].begin();           // Update the iterator in the mp map to point to the new node
        } 
    }
};

int main()
{
    return 0;
}