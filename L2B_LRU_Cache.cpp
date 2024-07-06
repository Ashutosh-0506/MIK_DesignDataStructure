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
    int n;
    list<int> dl;
    unordered_map<int, pair<list<int>::iterator, int>> mp;

public:
    LRUCache(int capacity)
    {
        n = capacity;
    }

    int get(int key)
    {
        if (mp.find(key) == mp.end())
        {
            return -1;
        }
        auto address = mp[key].first;
        int value = mp[key].second;

        dl.erase(address);
        mp.erase(key);
        
        dl.push_front(key);
        mp[key] = {dl.begin(), value};
        return value;
    }

    void put(int key, int value)
    {
        if (mp.find(key) != mp.end())
        {
            auto address = mp[key].first;
            mp.erase(key);
            dl.erase(address);
            dl.push_front(key);
            mp[key] = {dl.begin(), value};
        }
        else
        {
            dl.push_front(key);
            mp[key] = {dl.begin(), value};
            n--;
        }
        if (n < 0)
        {
            int key_to_be_deleted = dl.back();
            dl.pop_back();
            mp.erase(key_to_be_deleted);
            n++;
        }
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