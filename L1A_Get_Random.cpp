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

public:
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        for (auto &it : v)
        {
            if (it == val)
            {
                return false;
            }
        }
        v.push_back(val);
        return true;
    }

    bool remove(int val)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == val)
            {
                v.erase(v.begin() + i);
                return true;
            }
        }
        return false;
    }

    int getRandom()
    {
        int n = v.size();
        int index = rand() % n;
        return v[index];
    }
};

int main()
{
    return 0;
}