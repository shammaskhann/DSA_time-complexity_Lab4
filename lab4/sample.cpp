#include<iostream>
#include<chrono>
#include<math.h>
using namespace std;
int linearSearch(int arr[], int n, int x)
{
   int i;
   for (i = 0; i <= n; i++)
       if (arr[i] == x)
           return i;
   return -1;
}

int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l) {
       int mid = l + (r - l) / 2;

       if (arr[mid] == x)
           return mid;

       if (arr[mid] > x)
           return binarySearch(arr, l, mid - 1, x);

       return binarySearch(arr, mid + 1, r, x);
   }

   return -1;
}

int main() {
   int arr[193] = { 2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,
       68,70,72,74,76,78,80,82,84,86,88,90,92,100,102,104,106,108,110,112,114,116,118,120,122,124,126,128,130,132,
       134,136,138,140,142,144,146,148,150,152,154,156,158,160,162,164,166,168,169,170,172,174,176,178,180,182,184,
       186,188,190,192,194,196,198,200,202,204,206,208,210,212,214,216,218,220,222,224,226,228,230,232,234,236,238,240,
       242,244,246,248,250,252,254,256,258,260,262,264,266,268,270,272,274,276,278,280,282,284,286,288,300,302,304,
       306,308,310,312,314,316,318,320,322,324,326,328,330,332,334,336,338,340,342,344,346,348,350,352,354,356,358,
       360,362,364,366,368,370,372,374,376,378,380,382,384,386,388,390,392,394,396,398,400 };
   int n = 193;
   int x1 = 44, x2 = 400, x3 = 450;
   clock_t c_start, c_end;
   c_start = clock();
   int result1 = linearSearch(arr, n, x1);
   auto c_end = clock();
   double time1 = (double)(c_end - c_start) / (double)1000;

   c_start = clock();
   int result2 = binarySearch(arr, 0, n - 1, x2);
   c_end = clock();
   double time2 = (double)(c_end - c_start) / (double)1000;

   c_start = clock();
   int result3 = binarySearch(arr, 0, n - 1, x3);
   c_end = clock();
   double time3 = (double)(c_end - c_start) / (double)1000;

   if (result1 == -1)
       cout << "Element " << x1 << " not found in array" << endl;
   else
       cout << "Element " << x1 << " found at index " << result1 << " using linear search in " << time1 << " milliseconds" << endl;

   if (result2 == -1)
       cout << "Element " << x2 << " not found in array" << endl;
   else
       cout << "Element " << x2 << " found at index " << result2 << " using binary search in " << time2 << " milliseconds" << endl;

   if (result3 == -1)
       cout << "Element " << x3 << " not found in array" << endl;
   else
       cout << "Element " << x3 << " found at index " << result3 << " using binary search in " << time3 << " milliseconds" << endl;

   return 0;
}

