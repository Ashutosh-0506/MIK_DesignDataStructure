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
#include<bits/stdc++.h>
using namespace ::std;
 class ParkingSystem {
    public:
    int max_big;
    int max_small;
    int max_medium;
    unordered_map<int,int>mp;
public:
    ParkingSystem(int big, int medium, int small) {
        max_big=big;
        max_medium=medium;
        max_small=small;
    }
    
    bool addCar(int carType) {
        if(carType==1)
        {
            if(mp[1]<max_big)
            {
                mp[1]++;
                return true;
            }
            return false;
        }
        else if(carType==2)
        {
            if(mp[2]<max_medium)
            {
                mp[2]++;
                return true;
            }
            return false;
        }
        else
        {
            if(mp[3]<max_small)
            {
                mp[3]++;
                return true;
            }
            return false;
        }
        return false;
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