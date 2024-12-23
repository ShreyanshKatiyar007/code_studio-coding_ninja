/*  Ninja has been given a string ‘STR’ containing either ‘{’ or ‘}’. 'STR’ is called valid if all the brackets are
 balanced. Formally for each opening bracket, there must be a closing bracket right to it.*/

#include <bits/stdc++.h>
using namespace std;

int findMinimumCost(string str)
{
    // If the length of the string is odd, it's impossible to balance
    if (str.length() % 2 == 1)
    {
        return -1;
    }

    // Stack to store unbalanced brackets
    stack<char> s;

    // Iterate through the string
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {
            // If stack is not empty and top is '{', balance it
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                // Push unbalanced '}' into the stack
                s.push(ch);
            }
        }
    }

    // Count the number of unbalanced brackets
    int a = 0, b = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }

    // Calculate the number of swaps needed to balance
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}
