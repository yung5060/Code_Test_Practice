#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int temp = nums.size() / 2;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    int answer = (temp >= nums.size()) ? nums.size() : temp;
    return answer;
}

int main()
{
    vector<int> nums = {3, 1, 2, 3};
    cout << solution(nums) << endl;
    cin.get();
}