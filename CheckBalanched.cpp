// Balanced Parenthesis problem solved using stack
#include <bits/stdc++.h>
#include "myStack.h"
using namespace std;

bool checkBalanced(string str)
{

    int n = str.size();
    Stack<char> st;
    bool isBalanced = true;

    if (str[0] == ')' || str[0] == '}' || str[0] == ']')
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (st.Top() == '(')
            {
                st.pop();
            }
            else
            {
                isBalanced = false;
                break;
            }
        }
        else if (str[i] == '}')
        {
            if (st.Top() == '{')
            {
                st.pop();
            }
            else
            {
                isBalanced = false;
                break;
            }
        }
        else if (str[i] == ']')
        {
            if (st.Top() == '[')
            {
                st.pop();
            }
            else
            {
                isBalanced = false;
                break;
            }
        }
    }

    if (!st.isEmpty())
    {
        isBalanced = false;
    }
    return isBalanced;
}

int main()
{
    string parenthesis;
    cin >> parenthesis;

    // bool isTrue = ;

    if (checkBalanced(parenthesis))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}