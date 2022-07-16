#include <iostream>
#include <stack>
using namespace std;

int main()
{

    string str = "Rugved"; // string named Rugved 
    stack<char> s; // created a stack

    for (int i = 0; i < str.length(); i++) //loop  to iterate at index of Rugved string
    {
        char ch = str[i];
        s.push(ch); // Add elements to stack
    }
    string ans = " ";
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop(); // pop element
    }

    cout << "Answer is: " << ans << endl;
    return 0;
}