#include <iostream>
using namespace std;
#define n 100
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {

        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back == n- 1)
        {
            cout << " the que is overflow " << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == - 1)
        {
            front++; // if we're adding the first elemt
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << " no elemnets present ";
            return ;
        }
        front++;
    }
    int peek()
    {
        if (front ==-1 || front>back)
        {
            cout << "no elements" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front == -1 || front > back)
        {
            cout << "no elements" << endl;
            return true;
        }
        return false;
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    return 0;
}