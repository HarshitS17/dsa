#include <iostream>
using namespace std;
void displayArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << arr[i];
    }
}
// to reverse an array
void reverse(int arr[], int size)
{
    int reversedarray[size];
    for (int i = 0; i < size; i++)
    {
        reversedarray[i] = arr[size - i - 1];
    }
    cout << "the reversed array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << reversedarray[i];
    }
}
int main()
{
    int oringalarr[] = {1, 2, 3, 4, 5};
    int size = sizeof(oringalarr);
    reverse(oringalarr, size);
    return 0;
}
