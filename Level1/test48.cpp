#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int max = *(nums.end() - 1) + *(nums.end() - 2) + *(nums.end() - 3);
    vector<bool> primes(max + 1, true);
    primes[0] = false;
    primes[1] = false;
    for (int i = 2; i * i <= max; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= max; j += i)
            {
                primes[j] = false;
            }
        }
    }
    vector<int> sums;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = nums.size() - 1; j > i; j--)
        {
            for (int k = nums.size() - 1; k > j; k--)
            {
                sums.push_back(nums[i] + nums[j] + nums[k]);
            }
        }
    }
    int count = 0;
    for (const auto &sum : sums)
    {
        // count += (primes[sum]) ? 1 : 0;
        if (primes[sum])
        {
            count += 1;
            cout << sum << " ";
        }
    }
    cout << endl;
    return count;
}

int main()
{
    vector<int> nums = {1, 2, 7, 6, 4};
    cout << solution(nums) << endl;
    cin.get();
}