/*You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.*/

int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    // XOR ing all elements.
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR[1,n-1]
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
