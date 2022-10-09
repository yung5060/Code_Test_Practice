#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node
{
    struct Node *left;
    struct Node *right;
    string word;
};

void insertNode(Node *&root, const string s, int index)
{
    if (root == nullptr)
    {
        root = new Node;
        root->word = s;
        root->left = nullptr;
        root->right = nullptr;
    }
    else
    {
        if (s[index] == root->word[index])
        {
            int i = 0;
            while (s[i] == root->word[i])
            {
                i++;
            }
            (s[i] < root->word[i]) ? insertNode(root->left, s, index) : insertNode(root->right, s, index);
        }
        else if (s[index] < root->word[index])
        {
            insertNode(root->left, s, index);
        }
        else
        {
            insertNode(root->right, s, index);
        }
    }
}

void fillArray(vector<string> &array, Node *&current)
{
    if (current != nullptr)
    {
        fillArray(array, current->left);
        array.push_back(current->word);
        fillArray(array, current->right);
    }
}

vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer;
    Node *root = nullptr;
    for (const auto &it : strings)
    {
        insertNode(root, it, n);
    }
    fillArray(answer, root);
    return answer;
}

int main()
{
    vector<string> strings = {"sun", "car", "bed", "mac", "win", "bus", "cpp"};
    vector<string> answer = solution(strings, 1);
    for (const auto &it : answer)
    {
        cout << it << " ";
    }
    cin.get();
}
