//#include <iostream>
//#include <vector>
//
//void merge(std::vector<int>& arr, int left, int mid, int right) 
//{
//    int size1 = mid - left + 1; 
//    int size2 = right - mid;    
//    std::vector<int> temp_left(size1);
//    std::vector<int> temp_right(size2);
//
//    for (int i = 0; i < size1; i++)
//    {
//        temp_left[i] = arr[left + i];
//    }
//
//    for (int j = 0; j < size2; j++) 
//    {
//        temp_right[j] = arr[mid + 1 + j];
//    }
//
//    int l = 0;    
//    int r = 0;    
//    int k = left;
//
//    while (l < size1 && r < size2) 
//    {
//        if (temp_left[l] <= temp_right[r]) 
//        {      
//            arr[k] = temp_left[l];       
//            l++;                 
//        }
//        else 
//        {                 
//            arr[k] = temp_right[r];      
//            r++;                 
//        }
//        k++;                     
//    }
//
//    while (l < size1) 
//    {
//        arr[k] = temp_left[l];
//        l++;
//        k++;
//    }
//
//    while (r < size2) 
//    {
//        arr[k] = temp_right[r];
//        r++;
//        k++;
//    }
//}
//
//void merge_sort(std::vector<int>& arr, int left, int right)
//{
//
//    if (left >= right)
//        return;
//
//    int mid = (left + right) / 2;
//
//    merge_sort(arr, left, mid);
//
//    merge_sort(arr, mid + 1, right);
//
//    merge(arr, left, mid, right);
//}
//
//int main() 
//{
//    std::cout << "Enter number of elements in array \n";
//    int32_t counter = 0;
//    std::cin >> counter;
//    std::vector<int> arr(counter);
//    std::cout << "Enter " << counter << " elements: \n";
//    for (int i = 0; i < counter; i++) {
//        std::cin >> arr[i];
//    }
//    merge_sort(arr,0,counter-1);
//    std::cout << "Sorted array: ";
//    for (int i = 0;i < counter;++i)
//        std::cout << arr[i] << " \n";
//    return 0;
//}