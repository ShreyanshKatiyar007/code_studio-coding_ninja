/*You’re given a stack consisting of 'N' integers. Your task is to sort this stack in descending order using recursion.
We can only use the following functions on this stack S.

is_empty(S) : Tests whether stack is empty or not.
push(S) : Adds a new element to the stack.
pop(S) : Removes top element from the stack.
top(S) : Returns value of the top element. Note that this function does not remove elements from the stack.*/

#include <bits/stdc++.h>

void sortedInsert(stack<int> &stack, int num)
{

    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {

        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    sortedInsert(stack, num);

    stack.push(n);
}

void sortStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    sortStack(stack);

    sortedInsert(stack, num);
}