#include<iostream>
#include<chrono>
#include<math.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
   clock_t c_start = clock();
   int i, j;
   for (i = 0; i < n - 1; i++) {
       for (j = 0; j < n - i - 1; j++) {
           if (arr[j] > arr[j + 1])
               swap(arr[j], arr[j + 1]);
       }
   }
   clock_t c_end = clock();
   double time;
   time = (double)(c_end - c_start) / (double)CLOCKS_PER_SEC;
   ;
   cout << "Bubble Sort:";
   for (int i = 0; i < n - 1; i++) {
       
       cout << arr[i] << " ";
   }
   cout << endl;
   cout << "Bubble Sort Time=" << time << " sec " << endl;
}

void insertionSort(int arr[], int n)
{
   clock_t c_start = clock();
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i - 1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j + 1] = arr[j];
           j = j - 1;
       }
       arr[j + 1] = key;
   }
   clock_t c_end = clock();
   double time;
   time = (double)(c_end - c_start) / (double)CLOCKS_PER_SEC;
   cout << "Insertion Sort:";
   for (int i = 0; i < n - 1; i++) {

       cout << arr[i] << " ";
   }
   cout << endl;
   cout << "Insertion Sort Time=" << time << " sec " << endl;
}

void selectionSort(int arr[], int n)
{
   clock_t c_start = clock();
   int i, j, min_idx;
   for (i = 0; i < n - 1; i++)
   {
       min_idx = i;
       for (j = i + 1; j < n; j++)
           if (arr[j] < arr[min_idx])
               min_idx = j;
       swap(arr[min_idx], arr[i]);
   }
   clock_t c_end = clock();
   double time;
   time = (double)(c_end - c_start) / (double)CLOCKS_PER_SEC;
   cout << "Selection Sort:";
   for (int i = 0; i < n - 1; i++) {

       cout << arr[i] << " ";
   }
   cout << endl;
   cout << "Selection Sort Time=" << time << " sec " << endl;
}

int main() {
   int arr[50] = { 100,45,77,88,99,12,47,55,90,87,66,43,22,11,33,23,15,99,74,15,13,69,89,4,8,78,43,55,78,66,99,200,40,30,50,70,39,19,34,55,35,77,64,53,29,69,95,59,150 };
   int n = 50;
   bubbleSort(arr, n);
   insertionSort(arr, n);
   selectionSort(arr, n);
 
   return 0;
}