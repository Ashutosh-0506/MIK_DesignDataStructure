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
    vector<vector<pair<int, int>>> snapStore;
    int id;
    SnapshotArray(int length)
    {
        snapStore = vector<vector<pair<int, int>>>(length);
        id = 0;
    }

    void set(int index, int val)
    {
        snapStore[index].push_back({id, val});
    }

    int snap()
    {
        id++;
        return id - 1;
    }

    int get(int index, int snap_id)
    {
        int start = 0;
        int end = snapStore[index].size() - 1;
        int res = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (snapStore[index][mid].first <= snap_id)
            {
                start = mid + 1;
                res = mid;
            }
            else if (snapStore[index][mid].first > snap_id)
            {
                end = mid - 1;
            }
        }
        if (res == -1)
        {
            return 0;
        }
        return snapStore[index][res].second;
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