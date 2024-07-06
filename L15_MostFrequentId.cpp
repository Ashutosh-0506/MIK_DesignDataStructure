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
class Solution
{
public:
    vector<long long> mostFrequentIDs(vector<int> &nums, vector<int> &freq)
    {
        int n = nums.size();
        vector<long long> ans(n, 0);
        // ID-freq
        unordered_map<long long, long long> mp;
        // Freq-ID
        priority_queue<pair<long long, long long>> pq;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]] += freq[i];
            pq.push({mp[nums[i]], nums[i]});
            bool fresh = false;
            while (!pq.empty() && !fresh)
            {
                auto &it = pq.top();
                long long f = it.first;
                long long ID = it.second;
                if (mp[ID] == f)
                {
                    fresh = true;
                    ans[i] = f;
                }
                else
                {
                    pq.pop();
                }
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}