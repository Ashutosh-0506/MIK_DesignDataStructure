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
class FoodRatings
{
public:
    unordered_map<string, int> food_rating;
    unordered_map<string, string> food_cuisine;
    map<string, set<pair<int, string>>> cuisine_raiting_food;
    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector<int> &ratings)
    {
        int n = foods.size();
        for (int i = 0; i < n; i++)
        {
            string food = foods[i];
            string cuisine = cuisines[i];
            int raiting = -1 * ratings[i];

            cuisine_raiting_food[cuisine].insert({raiting, food});
            food_cuisine[food] = cuisine;
            food_rating[food] = raiting;
        }
    }

    void changeRating(string food, int newRating)
    {
        string cuisine = food_cuisine[food];
        int oldraiting = food_rating[food];

        cuisine_raiting_food[cuisine].erase({oldraiting, food});
        cuisine_raiting_food[cuisine].insert({-1 * newRating, food});
        food_rating[food] = -1 * newRating;
    }

    string highestRated(string cuisine)
    {
        return cuisine_raiting_food[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
int main()
{
    return 0;
}