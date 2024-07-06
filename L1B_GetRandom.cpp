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
class RandomizedSet
{
private:
    vector<int> v;
    // Number-index
    unordered_map<int, int> mp;

public:
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if (mp.find(val) == mp.end())
        {
            v.push_back(val);
            mp[val] = v.size() - 1;
            return true;
        }
        return false;
    }

    bool remove(int val)
    {
        if (mp.find(val) == mp.end())
        {
            return false;
        }

        int index = mp[val];
        int lastElement = v.back();

        v.back() = val;
        v[index] = lastElement;

        v.pop_back();
        mp[lastElement] = index;
        mp.erase(val);
        return true;
    }

    int getRandom()
    {
        int n = v.size();
        int index = rand() % n;
        return v[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
int main()
{
    return 0;
}