#include <iostream>
void buble_sort(int*, int);
int main()
{
    const int size = 8;
    int arr[size] = {3,65,5,2,9,76,34,23};
    buble_sort(arr,size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ',';
    }
    return 0;
}
void buble_sort(int* arr, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}