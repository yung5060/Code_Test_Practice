#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string letter)
{
    vector<char> alphabet = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<string> morse = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
        "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    vector<string> tmp;
    istringstream ss(letter);
    string stringBuffer;
    while (getline(ss, stringBuffer, ' '))
    {
        tmp.push_back(stringBuffer);
    }
    string answer = "";
    for (int i = 0; i < tmp.size(); i++)
    {
        int index = find(morse.begin(), morse.end(), tmp[i]) - morse.begin();
        answer.push_back(alphabet[index]);
    }
    return answer;
}