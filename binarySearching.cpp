#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int element)
{
    int low = 0, high = size - 1, mid;
    // start searching
    for (int i = 0; low <= high; i++)
    {

        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // searching ends
    return -1;
}
int printingArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
int main()
{
    int element = 15, size;
    int arr[] = {12, 13, 15, 16, 17, 18, 19, 20, 30};
    size = sizeof(arr) / sizeof(int);
    int searchIndex = binarySearch(arr, size, element);
    // cout << "enter the element you want to search " << endl;
    // cin >> element;
    cout << "the element " << element << "is at" << searchIndex;
    return 0;
}