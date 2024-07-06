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
class ParkingSystem
{
public:
    int B;
    int M;
    int S;
    ParkingSystem(int big, int medium, int small)
    {
        B = big;
        M = medium;
        S = small;
    }

    bool addCar(int carType)
    {
        if (carType == 1)
        {
            if (B <= 0)
            {
                return false;
            }
            B--;
            return true;
        }
        if (carType == 2)
        {
            if (M <= 0)
            {
                return false;
            }
            M--;
            return true;
        }
        if (carType == 3)
        {
            if (S <= 0)
            {
                return false;
            }
            S--;
            return true;
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
int main()
{
    return 0;
}