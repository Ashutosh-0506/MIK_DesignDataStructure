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
#include <stack>
#include <string>

using namespace std;

class BrowserHistory
{
    stack<string> prev; // Stack to store previous URLs
    stack<string> next; // Stack to store next URLs
    string curr;        // Current URL

public:
    BrowserHistory(string homepage)
    {
        curr = homepage; // Initialize current URL with the provided homepage
    }

    // Function to visit a new URL
    void visit(string url)
    {
        next = stack<string>(); // Clear the next stack since a new visit invalidates future history
        prev.push(curr);        // Push the current URL to the previous stack
        curr = url;             // Update the current URL to the new visited URL
    }

    // Function to navigate back by a certain number of steps
    string back(int steps)
    {
        while (!prev.empty() && steps > 0)
        {
            next.push(curr);   // Store the current URL in the next stack for potential forward navigation
            curr = prev.top(); // Update the current URL to the top URL from the previous stack
            prev.pop();        // Pop the top URL from the previous stack
            steps--;           // Decrement the steps counter
        }
        return curr; // Return the current URL after navigation
    }

    // Function to navigate forward by a certain number of steps
    string forward(int steps)
    {
        while (!next.empty() && steps > 0)
        {
            prev.push(curr);   // Store the current URL in the previous stack for potential backward navigation
            curr = next.top(); // Update the current URL to the top URL from the next stack
            next.pop();        // Pop the top URL from the next stack
            steps--;           // Decrement the steps counter
        }
        return curr; // Return the current URL after navigation
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