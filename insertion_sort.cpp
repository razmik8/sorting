#include <iostream>
void insertion_sort(int*, int);
int main()
{
    const int size = 8;
    int arr[size] = {34,54,23,3,67,8,6,14};
    insertion_sort(arr,size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ',';
    }
    return 0;
}
void insertion_sort(int * arr, int size)
{
    for(int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}