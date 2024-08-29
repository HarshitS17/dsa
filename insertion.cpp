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

 // To insert in an array
    int
    insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;

    return 1;
}
int main()
{
    int arr[100] = {1, 3, 4, 5, 3};
    int size = 5;
    int element = 45, index = 3;
    displayArr(arr, size);
    insertion(arr, size, element, 100, index);
    size++;
    cout << "array after inserti0n" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

// Deletion opereation on arrayy
// void deleteByValue(int arr[], int &n, int element)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == element)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 arr[j] = arr[j + 1];
//             }
//             n--;
//             break;
//         }
//     }
// }
