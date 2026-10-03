#include <iostream>
#include <vector>

void pyramid_sort(std::vector<int>& arr, int n, int i) 
{
    int largest = i;       
    int left = 2 * i + 1; 
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) 
    {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) 
    {
        largest = right;
    }

    if (largest != i) 
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        pyramid_sort(arr, n, largest);
    }
}

void heapSort(std::vector<int>& arr) 
{
    int size = arr.size();

    for (int i = size / 2 - 1; i >= 0; i--) 
    {
        pyramid_sort(arr, size, i);
    }

    for (int i = size - 1; i > 0; i--) 
    {

        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        pyramid_sort(arr, i, 0);
    }
}

int main() 
{
    std::cout << "Enter number of elements in array \n";
    int32_t counter = 0;
    std::cin >> counter;
    std::vector<int> arr(counter);
    std::cout << "Enter " << counter << " elements: \n";
    for (int i = 0; i < counter; i++) {
        std::cin >> arr[i];
    }
    heapSort(arr);
    std::cout << "Sorted array: ";
    for (int i =0;i<counter; ++i)
    {
        std::cout << arr[i] << " ";
    }
	return 0;
}