// heap sort
#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left_ind = 2 * i;
    int right_ind = 2 * i + 1;

    if (left_ind <= n && arr[largest] < arr[left_ind])
        largest = left_ind;

    if (right_ind <= n && arr[largest] < arr[right_ind])
        largest = right_ind;

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    int size = n;

    while (size > 1)
    {
        // step1-> swap
        swap(arr[size], arr[1]);
        size--;

        // step2 ->
        heapify(arr, size, 1);
    }
}
int main()
{
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    heapSort(arr, n);

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}