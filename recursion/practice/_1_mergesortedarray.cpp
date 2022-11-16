#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int mid, int e)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creation of two dynamic array
    int *first = new int[len1];
    int *second = new int[len2];

    // copying the value
    int index = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[index++];
    }

    index = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[index++];
    }

    // merge 2 sorted array

    int index1 = 0;
    int index2 = 0;
    index = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[index++] = first[index1++];
        }
        else
        {
            arr[index++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[index++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[index++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int mid = (s + e / 2);
    // first half
    mergeSort(arr, s, mid);
    // second half
    mergeSort(arr, mid + 1, e);

    // merging the array
    merge(arr, s, mid, e);
}
int main()
{

    int v[5] = {2, 5, 1, 6, 9};
    int n = 5;
    mergeSort(v, 0, n-1);

    // display array
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}