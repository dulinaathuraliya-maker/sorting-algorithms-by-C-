#include <iostream>
struct myArrayData
{
    int* ptr {};
    int size {};
};

void swap(int* a,int i,int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int findSmallestIndex(int* a,int i,int e) // e means end point 
{   
    int min_index {i};
    for(int j{i+1};j<e;j++)
    {
        if(a[min_index] > a[j])
        {
            min_index = j;
        }
    }
    return min_index;
}
myArrayData getTheArray()
{
    int n {};
    std::cout <<"Enter the count of the numbers you need to sort" << std::endl;
    std::cin >> n;
    int *arr = new int[n];
    std::cout <<"Enter the number you want to sort: " << std::endl;
    for(int i {0};i<n;i++)
    {
        std::cin >> arr[i];
    }
    return {arr,n};
}
int main()
{
    myArrayData arr = getTheArray();
    int n = arr.size;

    for(int i {0};i<n-1;i++)
    {
        // get the minimum value index
        int min_num_index = findSmallestIndex(arr.ptr,i,n);
        // swaping process
        swap(arr.ptr,i,min_num_index);
    }
    for(int i {0};i<n;i++)
    {
        std::cout << arr.ptr[i] << " " ;
    }
    std::cout << std::endl;
    delete[] arr.ptr;
    return 0;
}