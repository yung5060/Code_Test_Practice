#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

vector<string> cityToLower(vector<string> cities)
{
    for (auto &city : cities)
    {
        for (auto &it : city)
        {
            if (it >= 65 && it <= 90)
            {
                it += 32;
            }
        }
    }
    return cities;
}

int solution(int cacheSize, vector<string> cities)
{
    cities = cityToLower(cities);
    deque<string> cache;
    int time = 0;
    for (auto &city : cities)
    {
        if (cacheSize)
        {
            if (count(cache.begin(), cache.end(), city) == 0)
            {
                if (cache.size() == cacheSize)
                {
                    cache.pop_front();
                }
                cache.push_back(city);
                time += 5;
            }
            else
            {
                for (auto it = cache.begin(); it != cache.end(); it++)
                {
                    if (*it == city)
                    {
                        cache.erase(it);
                        break;
                    }
                }
                cache.push_back(city);
                time += 1;
            }
        }
        else
        {
            time += 5;
        }
    }
    return time;
}

int main()
{
    vector<string> cities1 = {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "Jeju", "Pangyo", "Seoul", "NewYork", "LA"};
    vector<string> cities2 = {"Jeju", "Pangyo", "Seoul", "Jeju", "Pangyo", "Seoul", "Jeju", "Pangyo", "Seoul"};
    vector<string> cities3 = {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "SanFrancisco", "Seoul", "Rome", "Paris", "Jeju", "NewYork", "Rome"};
    vector<string> cities4 = {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "SanFrancisco", "Seoul", "Rome", "Paris", "Jeju", "NewYork", "Rome"};
    vector<string> cities5 = {"Jeju", "Pangyo", "NewYork", "newyork"};
    vector<string> cities6 = {"Jeju", "Pangyo", "Seoul", "NewYork", "LA"};
    cout << solution(3, cities1) << endl;
    cout << solution(3, cities2) << endl;
    cout << solution(2, cities3) << endl;
    cout << solution(5, cities4) << endl;
    cout << solution(2, cities5) << endl;
    cout << solution(0, cities6) << endl;
    cin.get();
}