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
class LRUCache
{
    vector<pair<int, int>> v;
    int maxx;

public:
    LRUCache(int capacity)
    {
        maxx = capacity;
    }

    int get(int key)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].first == key)
            {
                auto it = v[i];
                v.erase(v.begin() + i);
                v.push_back(it);
                return it.second;
            }
        }
        return -1;
    }

    void put(int key, int value)
    {

        // If found
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].first == key)
            {
                v.erase(v.begin() + i);
                v.push_back({key, value});
                return;
            }
        }

        // Not found
        if (v.size() >= maxx)
        {
            v.erase(v.begin());
        }
        v.push_back({key, value});
        return;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main()
{
    return 0;
}