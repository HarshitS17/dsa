#include <iostream>
using namespace std;
int main()
{
    int arr[10] = { 1,2,34,5,3,65,34,534};
    int index, element, size;
    cout << "enter the size of the array";
    cin >> size;
    // cout << "enter the elements of the array " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    cout << "the elements of the arrray  before deletion are : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "enter the element you wanna delete ";
    cin >> element;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            for (int j = i; j < size; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            break;
        }
    }
    cout << "array after deltion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

// // void deleteByPosition(int arr[], int &n, int position)
// int deltionByLoc(int )
//     for (int i = position - 1; i < n; i++)
//     {
//         arr[i] = arr[i + 1];
//         }
//     n--;
