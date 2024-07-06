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
class MyHashSet
{
public:
    vector<int> v;
    MyHashSet()
    {
    }

    void add(int key)
    {
        for (auto it : v)
        {
            if (it == key)
            {
                return;
            }
        }
        v.push_back(key);
    }

    void remove(int key)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == key)
            {
                int temp = v[v.size() - 1];
                v[v.size() - 1] = key;
                v[i] = temp;
                v.pop_back();
                return;
            }
        }
        return;
    }

    bool contains(int key)
    {
        for (auto it : v)
        {
            if (it == key)
            {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
int main()
{
    return 0;
}