#include <iostream>
using namespace std;

int fibonacci(int num)
{
    if (num <= 1)
    {
        return num;
    }
    int a = fibonacci(num - 1);
    int b = fibonacci(num - 2);
    return a + b;
}

int fibonacci_mem_helper(int n, int *ans)
{
    if (n <= 1)
    {
        return n;
    }
    if (ans[n] != -1)
    {
        return ans[n];
    }
    int a = fibonacci_mem_helper(n - 1, ans);
    int b = fibonacci_mem_helper(n - 2, ans);
    ans[n] = a + b;
    return ans[n];
}

int fibonacci_mem(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        ans[i] = -1;
    }
    return fibonacci_mem_helper(n, ans);
}

int fibo_3(int n)
{
    int *ans = new int[n + 1];
    ans[0] = 0;
    ans[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    return ans[n];
}
int main()
{
    cout << fibonacci_mem(6);
}