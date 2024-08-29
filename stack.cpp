#include <iostream>
using namespace std;
class stack
{
    int *arr;
    int top;
#define n 100
public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "the stack is overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << " no element to pop" << endl;
            return;
        }
        top--;
    }

    int Top() // retrurning the top  value
    {
        if (top == -1)
        {
            cout << " no elements in staCK" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    stack mine;
    mine.push(1);
    mine.push(2);
    mine.push(3);
    mine.push(4);
    cout<<mine.Top()<<endl;

}