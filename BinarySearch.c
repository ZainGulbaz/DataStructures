#include <stdio.h>

int BinarySearch(int arr[], int size, int element)
{

    int mid = (size - 1) / 2;
    int low = 0, high = size - 1;
    while (low <= high)
    {

        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
            mid = (low + high) / 2;
        }
        else
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
    }
    return -1;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int isPresent = BinarySearch(arr, 5, 1);
    printf("%d \n", isPresent);

    return 0;
}