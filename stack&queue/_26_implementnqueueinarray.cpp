// implement N queue int the array
#include <bits/stdc++.h>
using namespace std;
class myQueue
{
private:
    int k;
    int n;
    int freespot;
    int *arr;
    int *front;
    int *rear;
    int *next;

public:
    myQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        arr = new int[n];
        front = new int[k];
        rear = new int[k];
        //initializing the value with -1
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        freespot = 0;
    }

    // inserting in the queue
    void enqueue(int data, int qn)
    {
        if (freespot == -1)
        {
            cout << "Queue is overflow";
            return;
        }
        // find first free index
        int index = freespot;
        // update freespot
        freespot = next[index];
        // check whether first element
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            // link new element to the prev ele
            next[rear[qn - 1]] = index;
        }
        // update next
        next[index] = -1;
        // update rear
        rear[qn - 1] = index;
        // push element
        arr[index] = data;
    }

    // poping the element
    int deque(int qn)
    {
        // underflow
        if (front[qn - 1] == -1)
        {
            cout << "Queue Underflow"
                 << " ";
            return -1;
        }
        // first index to pop
        int index = front[qn - 1];

        // front ko aage badao
        front[qn - 1] = next[index];

        // free slot ko manage kro
        next[index] = freespot;
        freespot = index;

        return arr[index];
    }
};
int main()
{
    myQueue q(10, 3);

    q.enqueue(10, 1);
    q.enqueue(15, 2);
    q.enqueue(17, 2);
    q.enqueue(30, 1);
    q.enqueue(12, 1);
    q.enqueue(20, 1);

    cout << q.deque(1) << endl;
    cout << q.deque(2) << endl;
    cout << q.deque(2) << endl;
    cout << q.deque(2) << endl;
    cout << q.deque(1) << endl;
    return 0;
}
// output -
// 10
// 15
// 17
// Queue Underflow -1
// 30