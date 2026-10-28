#include <iostream>
struct Array
{
    int size {0};
    int *array = new int[size];
};

Array getTheValues()
{
    int n {};
    std::cout <<"Enter the count of the numbers you need to sort" << std::endl;
    std::cin >> n;
    Array arr;
    arr.size = n;
    std::cout <<"Enter the number you want to sort: " << std::endl;
    for(int i {0};i<n;i++)
    {
        std::cin >> arr.array[i];
    }
    return arr;

}
void swap(int *arr,int a,int b)
{
    int temp {};
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void printResult(int *arr,int size)
{
    for(int i{0};i<size;i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}
Array exchangeSort(Array arr)
{   
    for(int i {0};i<arr.size;i++)
    {
        for(int j {i+1};j<arr.size;j++)
        {
            if(arr.array[j]<arr.array[i])
            {
                swap(arr.array,i,j);
            }
        }
    }
    return arr;
}
int main()
{

    Array arr = getTheValues();
    exchangeSort(arr);
    printResult(arr.array,arr.size);
}