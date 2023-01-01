// insertion in heap
#include <bits/stdc++.h>
using namespace std;
class heap
{
private:
    int arr[100];
    int size;

public:
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        // now cheking for the max heap
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void deleteFromHeap()
    {
        // step1-> swap first node with the last node
        arr[1] = arr[size];
        // step2-> reduce the size
        size--;
        // step3-> shift first node to its correct position
        int i = 1;
        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;

            if (left < size && arr[i] < arr[left])
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else if (right < size && arr[i] < arr[right])
            {
                swap(arr[i], arr[right]);
                i = right;
            }
            else
                return;
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left_index = 2 * i;
    int right_index = 2 * i + 1;

    if (left_index <= n && arr[largest] < arr[left_index])
        largest = left_index;

    if (right_index <= n && arr[largest] < arr[right_index])
        largest = right_index;

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main()
{
    heap h;
    h.insert(52);
    h.insert(53);
    h.insert(51);
    h.insert(55);
    h.insert(54);
    h.print();
    cout << endl;
    h.deleteFromHeap();
    h.print();
    cout << endl;

    int arr[6] = {-1, 52, 53, 51, 55, 54};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "printing the array : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}