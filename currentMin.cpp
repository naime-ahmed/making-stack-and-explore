// Current MInimum Print problem solving using stack

#include <bits/stdc++.h>
#include "myStack.h"
using namespace std;
/*
test case:
01.
5
1 2 3 4 5
ans = 1 1 1 1 1

02.
7
1 6 43 1 2 0 5
ans = 0 0 1 1 1 1 1

03.
10
6 5 5 5 4 7 1 2 1 2
ans = 1 1 1 1 4 4 5 5 5 6
*/
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Stack<int> st;
    Stack<int> minStack;

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min)
        {
            minStack.push(arr[i]);
            min = arr[i];
        }

        st.push(arr[i]);
    }

    while (!st.isEmpty())
    {
        if (minStack.Top() != st.Top())
        {
            st.pop();
            cout << minStack.Top() << " ";
        }
        else
        {
            cout << minStack.Top() << " ";
            minStack.pop();
            st.pop();
        }
    }
    cout << "\n\n";

    return 0;
}