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
    int n;
    vector<list<int>> bucket;
    MyHashSet()
    {
        n = 15000;
        bucket = vector<list<int>>(n, list<int>{});
    }
    int getIndex(int key)
    {
        return key % n;
    }
    void add(int key)
    {
        int index = getIndex(key);
        auto it = find(bucket[index].begin(), bucket[index].end(), key);
        if (it == bucket[index].end())
        {
            bucket[index].push_back(key);
        }
    }

    void remove(int key)
    {
        int index = getIndex(key);
        auto it = find(bucket[index].begin(), bucket[index].end(), key);
        if (it != bucket[index].end())
        {
            bucket[index].erase(it);
        }
    }

    bool contains(int key)
    {
        int index = getIndex(key);
        auto it = find(bucket[index].begin(), bucket[index].end(), key);
        return it != bucket[index].end();
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