#include <iostream>
int main()
{
    int arr[] = {1,2,2,2,3,3,1,1,2,4,4,3,2,2,1,5,5,3,4,2,2,7,7,7,9,2,};
    int size = sizeof(arr) / sizeof(arr[0]);
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
    int*arr_2 = new int[range];
    for(int i = 0; i < range; i++)
    {
        for(int j = 0; j < size; j++)
        {   
            if(arr[j] == min_element + i)
            {
                arr_2[i] += 1;
            }
        }    
    }
    for(int i = 0; i < range; i++)
    {
        //std::cout << arr_2[i] << ',';
        //verevi tox@ tpum e zangvac vori mej pahvac e qanakner@
        for(int j = 0; j < arr_2[i]; j++)
        {
            std::cout << min_element + i << ',';
        }
    }
    delete[] arr_2;
    return 0;
}