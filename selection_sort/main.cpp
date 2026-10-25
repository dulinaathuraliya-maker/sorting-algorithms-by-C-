#include <iostream>

int main()
{
    int n {};
    std::cout <<"Enter the count of the numbers you need to sort" << std::endl;
    std::cin >> n;
    int arr[n];
    std::cout <<"Enter the number you want to sort: " << std::endl;
    for(int i {0};i<n;i++)
    {
        std::cin >> arr[i];
    }

    for(int i {0};i<n-1;i++)
    {
        int min_num_index = i;
        for(int j {i+1};j<n;j++)
        {
            if(arr[min_num_index]>arr[j])
            {
                min_num_index = j;
            }
        }
        // swaping process
        int temp = arr[i];
        arr[i] = arr[min_num_index];
        arr[min_num_index] = temp; 
    }
    for(int i {0};i<n;i++)
    {
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
    return 0;
}