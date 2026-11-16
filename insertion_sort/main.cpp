#include <iostream>
struct MyArrayData
{
    int* ptr {};
    int size {};
};

MyArrayData getValues()
{
    int n {};
    std::cout << "Enter the count of the numbers you need to sort: " << std::endl;
    std::cin >> n;
    int* arr = new int[n];
    for(int i {0};i<n;i++)
    {
        std::cin >> arr[i];
    }
    return {arr,n};
}

int main()
{
    MyArrayData arr = getValues();

    // insertion sort
    for(int i{1};i<arr.size;i++)
    {
        int value = arr.ptr[i];
        int index = i;

        for(int j {i-1};j>=0;j--)   // j is starting frome the previous one of i index
        {
            if(arr.ptr[j]>value)
            {
                int temp = arr.ptr[j];
                arr.ptr[j] = value;
                arr.ptr[j+1] = temp;
            }
        }
    }

    // print the result
    for(int i {0};i<arr.size;i++)
    {
        std::cout << arr.ptr[i] << " " ;
    }
    std::cout << std::endl;
    delete[] arr.ptr;
    return 0;
}