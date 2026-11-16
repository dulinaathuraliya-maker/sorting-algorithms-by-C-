#include <iostream>
struct MyArrayData
{
    int* ptr {};
    int size {};
};

MyArrayData getValues()
{
    int n {};
    std::cout << "Enter the count of numbers you want to sort: " << std::endl;
    std::cin >> n;
    int* arr = new int [n];
    for(int i {0};i<n;i++)
    {
        std::cin >> arr[i];
    }
    return {arr,n};

}
int main()
{
    MyArrayData arr = getValues();

    // bubble sort
    bool swap = false;
    for(int i {0};i<arr.size-1;i++)
    {
        for(int j {0};j<arr.size-1-i;j++)
        {
            if(arr.ptr[j]>arr.ptr[j+1])
            {
                // swap
                int temp = arr.ptr[j+1];
                arr.ptr[j+1] = arr.ptr[j];
                arr.ptr[j] = temp;
                swap = true;
            }
        }
        if(swap == false)
        {
            break;
        }
    }
    for(int i {0};i<arr.size;i++)
    {
        std::cout << arr.ptr[i] << " " ;
    }
    std::cout << std::endl;
    delete[] arr.ptr;
    return 0;
}