#include <bits/stdc++.h>
#include "myStack.h"
using namespace std;

void reverseSentence(string chk)
{
    Stack<string> st;

    for (int i = 0; i < chk.length(); i++)
    {
        string word = "";

        while (i < chk.length() && chk[i] != ' ')
        {
            word += chk[i];
            i++;
        }
        st.push(word);
    }

    while (!st.isEmpty())
    {
        cout << st.Top() << " ";
        st.pop();
    }
}

int main()
{

    string me = "Hello I am naime";
    reverseSentence(me);

    return 0;
}