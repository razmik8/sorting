#include <iostream>
int* counting_sort(int*, int);
int main()
{
    int arr[] = {1,2,2,2,3,3,1,1,2,4,4,3,2,2,1,5,5,3,4,2,2,7,7,7,9,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* arr_2 = counting_sort(arr, size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr_2[i] << ',';
    }
    delete[] arr_2;
    return 0;
}
int* counting_sort(int* arr, int size)
{
    int min_element = arr[0];
    int max_element = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min_element)
        {
            min_element = arr[i];
        }
        if(arr[i] > max_element)
        {
            max_element = arr[i];
        }     
    }
    int range = max_element - min_element + 1;
    int* count_arr = new int[range];
    for(int i = 0; i < size; i++)
    {
        count_arr[arr[i] - min_element]++;
    }
    for(int i = 1; i < range; i++)
    {
        count_arr[i] = count_arr[i - 1] + count_arr[i]; 
    }   
    int* arr_2 = new int[size];
    for(int i = size - 1; i >= 0; i--)
    {
        arr_2[count_arr[arr[i]- min_element] - 1] = arr[i];
        count_arr[arr[i] - 1]--; 
    }
    delete[] count_arr;
    return arr_2;
}
