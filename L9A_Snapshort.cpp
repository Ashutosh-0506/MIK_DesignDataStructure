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
class SnapshotArray
{
public:
    vector<vector<int>> snapStore;
    vector<int> temp;
    int id = 0;
    SnapshotArray(int length)
    {
        temp = vector<int>(length, 0);
    }

    void set(int index, int val)
    {
        temp[index] = val;
    }

    int snap()
    {
        snapStore.push_back(temp);
        id++;
        return id - 1;
    }

    int get(int index, int snap_id)
    {
        return snapStore[snap_id][index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
int main()
{
    return 0;
}