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
class MyHashMap
{
public:
    vector<list<pair<int, int>>> bucket;
    int size;
    MyHashMap()
    {
        size = 1e4;
        bucket.resize(1e4);
    }

    void put(int key, int value)
    {
        int index = key % size;
        auto &chain = bucket[index];

        for (auto &it : chain)
        {
            if (it.first == key)
            {
                it.second = value;
                return;
            }
        }
        bucket[index].push_back({key, value});
    }

    int get(int key)
    {
        int index = key % size;
        auto &chain = bucket[index];
        for (auto &it : chain)
        {
            if (it.first == key)
            {
                return it.second;
            }
        }
        return -1;
    }

    void remove(int key)
    {
        int index = key % size;
        auto &chain = bucket[index];
        for (auto it = chain.begin(); it != chain.end(); it++)
        {
            if (it->first == key)
            {
                chain.erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
int main()
{
    return 0;
}