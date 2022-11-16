// Minimum no. of operations required to make an array palindrome

#include <bits/stdc++.h>
using namespace std;

int PalinArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int digit = 0;
        int num = a[i];
        while (num > 0)
        {
            int rem = num % 10;
            num = num / 10;
            digit = (digit * 10) + rem;
        }
        if (digit != a[i])
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << PalinArray(a, n) << endl;
}
// n = 5
// arr[] = 111 222 333 444 555
// output- 
// 1
