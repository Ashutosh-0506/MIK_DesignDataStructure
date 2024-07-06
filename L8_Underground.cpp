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
class UndergroundSystem
{
public:
    unordered_map<int, pair<string, int>> checkInMp;
    unordered_map<string, pair<int, int>> checkOutMp;
    UndergroundSystem()
    {
    }

    void checkIn(int id, string stationName, int t)
    {
        checkInMp[id] = {stationName, t};
    }

    void checkOut(int id, string stationName, int t)
    {
        string start = checkInMp[id].first;
        string end = stationName;
        string route = start + "-" + end;

        int startTime = checkInMp[id].second;
        int endTime = t;
        int TotalTime = endTime - startTime;
        checkOutMp[route].first += TotalTime;
        checkOutMp[route].second += 1;
    }

    double getAverageTime(string startStation, string endStation)
    {
        string route = startStation + "-" + endStation;
        int time = checkOutMp[route].first;
        int count = checkOutMp[route].second;
        return (double)time / count;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
int main()
{
    return 0;
}