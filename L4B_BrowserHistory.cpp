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
class BrowserHistory
{
private:
    vector<string> v;
    int index;

public:
    BrowserHistory(string homepage)
    {
        v.push_back(homepage);
        index = 0;
    }

    void visit(string url)
    {
        int rem = v.size() - 1;
        while (rem > index)
        {
            v.pop_back();
            rem--;
        }
        v.push_back(url);
        index++;
    }

    string back(int steps)
    {
        index -= steps;
        if (index < 0)
        {
            index = 0;
        }
        return v[index];
    }

    string forward(int steps)
    {
        index += steps;
        if (index >= v.size())
        {
            index = v.size() - 1;
        }
        return v[index];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
int main()
{
    return 0;
}