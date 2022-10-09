#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

string solution(vector<int> numbers, string hand)
{
    string answer = "";
    bool isRight = (hand == "right") ? true : false;
    vector<int> left = {1, 4, 7, 10}, right = {3, 6, 9, 12}, center = {2, 5, 8, 0};
    int leftThumb = 10;
    int rightThumb = 12;
    for (auto &number : numbers)
    {
        if (count(left.begin(), left.end(), number))
        {
            leftThumb = number;
            answer.push_back('L');
        }
        else if (count(right.begin(), right.end(), number))
        {
            rightThumb = number;
            answer.push_back('R');
        }
        else if (count(center.begin(), center.end(), number))
        {
            if (number == 0)
            {
                number = 11;
            }
            int leftDistance = abs(leftThumb - number);
            int rightDistance = abs(rightThumb - number);
            if (leftDistance == 3)
                leftDistance = 1;
            else if (leftDistance == 4 || leftDistance == 6)
                leftDistance = 2;
            else if (leftDistance == 7 || leftDistance == 9)
                leftDistance = 5;
            else if (leftDistance == 10)
                leftDistance = 8;
            if (rightDistance == 3)
                rightDistance = 1;
            else if (rightDistance == 4 || rightDistance == 6)
                rightDistance = 2;
            else if (rightDistance == 7 || rightDistance == 9)
                rightDistance = 5;
            else if (rightDistance == 10)
                rightDistance = 8;
            if (rightDistance > leftDistance)
            {
                leftThumb = number;
                answer.push_back('L');
            }
            else if (rightDistance < leftDistance)
            {
                rightThumb = number;
                answer.push_back('R');
            }
            else
            {
                if (isRight)
                {
                    rightThumb = number;
                    answer.push_back('R');
                }
                else
                {
                    leftThumb = number;
                    answer.push_back('L');
                }
            }
        }
    }
    return answer;
}

int main()
{
    vector<int> numbers = {7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2};
    cout << solution(numbers, "left") << endl;
    cin.get();
}