#include <iostream>
void selection_sort(int*, int);
int main()
{
    const int size = 8;
    int arr[size] = {34,54,23,3,67,8,6,14};
    selection_sort(arr,size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ',';
    }
    return 0;
}
void selection_sort(int* arr, int size)
{
    int min_index = 0;
    for(int i = 0; i < size - 1; i++)
    {
        int min_i = i;
        int j = i + 1;
        while(j < size)
        {
            if(arr[min_i] > arr[j])
            {
                min_i = j;
            }
            j++;
        }
        int a = arr[i];
        arr[i] = arr[min_i];
        arr[min_i] = a;
    }
}