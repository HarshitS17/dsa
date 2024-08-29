#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {24,23,24424,442,5234232,32455,29,2342};
    int size = sizeof(arr) / sizeof(int);
    int element ;
    cout<<"enter the element you want to search from the array "<<endl;
    cin>>element;
    int searchIndex = linearSearch(arr, size,element);
    printf("the element %d was found at %d", element,searchIndex);
    return 0;
}