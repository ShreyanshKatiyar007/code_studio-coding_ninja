/* Given valid mathematical expressions in the form of a string. You are supposed to return true if the given
 expression contains a pair of redundant brackets, else return false. The given string only contains ‘(‘, ’)’,
 ‘+’, ‘-’, ‘*’, ‘/’ and lowercase English letters.*/

#include <bits/stdc++.h>
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {

            if (ch == ')')
            {

                bool isRedundant = true;

                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '/' || top == '*')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }

                if (isRedundant == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
