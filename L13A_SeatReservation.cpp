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
class SeatManager
{
public:
    vector<bool> v;
    int size;
    SeatManager(int n)
    {
        v.resize(n + 1);
        size = n + 1;
    }

    int reserve()
    {
        for (int i = 1; i < size; i++)
        {
            if (!v[i])
            {
                v[i] = true;
                return i;
            }
        }
        return 0;
    }

    void unreserve(int seatNumber)
    {
        v[seatNumber] = false;
        return;
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
int main()
{
    return 0;
}