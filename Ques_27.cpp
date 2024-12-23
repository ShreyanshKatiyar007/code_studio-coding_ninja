// Reverse a given stack of 'N' integers using recursion. You are required to make changes in the input parameter itself.

void insertAtBottom(stack<int> &s, int element)
{

    if (s.empty())
    {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &stack)
{

    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, num);
}