
#include<iostream>
#include<chrono>
#include<math.h>
using namespace std;

double primeMethod1(int num) {
	auto start = std::chrono::high_resolution_clock::now();

	for (int i = 2; i < num - 1; i++) {
		if (i / num == 0) {
			break;
		}
	}
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> duration = end - start;

	return duration.count();
}

double primeMethod2(int num) {
	auto start = std::chrono::high_resolution_clock::now();

	for (int i = 2; i < sqrt(num); i++) {
		if (i / num == 0) {
			break;
		}
	}
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> duration = end - start;

	return duration.count();
}

void  main() {
	double time = primeMethod1(11);
	cout << "\nTIME FOR NUMBER 11 BY METHOD 1 : " << time;
	time = primeMethod1(101);
	cout << "\nTIME FOR NUMBER 101 BY METHOD 1 : " << time;
	time = primeMethod1(1111);
	cout << "\nTIME FOR NUMBER 1111 BY METHOD 1 : " << time;
	time = primeMethod1(1000003);
	cout << "\nTIME FOR NUMBER 1000003 BY METHOD 1 : " << time;
	time = primeMethod1(1000000019);
	cout << "\nTIME FOR NUMBER 1000000019 BY METHOD 1 : " << time << endl << endl;

	time = primeMethod2(11);
	cout << "\nTIME FOR NUMBER 11 BY METHOD 2 : " << time;
	time = primeMethod2(101);
	cout << "\nTIME FOR NUMBER 101 BY METHOD 2 : " << time;
	time = primeMethod2(1111);
	cout << "\nTIME FOR NUMBER 1111 BY METHOD 2 : " << time;
	time = primeMethod2(1000003);
	cout << "\nTIME FOR NUMBER 1000003 BY METHOD 2 : " << time;
	time = primeMethod2(1000000019);
	cout << "\nTIME FOR NUMBER 1000000019 BY METHOD 2 : " << time;

}
//#include<iostream>
//#include<chrono>
//using namespace std;
//
//int arr[201] = { 2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,100,102,104,106,108,110,112,114,116,118,120,122,124,126,128,130,132,134,136,138,140,142,144,146,148,150,152,154,156,158,160,162,164,166,168,169,170,172,174,176,178,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,212,214,216,218,220,222,224,226,228,230,232,234,236,23238,240,242,244,246,248,250,252,254,256,258,260,262,264,266,268,270,272,274,276,278,280,282,284,286,288,300,302,304,306,308,310,312,314,316,318,320,322,324,326,328,330,332,334,336,338,340,342,344,346,348,350,352,354,356,358,360,362,364,366,368,370,372,374,376,378,380,382,384,386,388,390,392,394,396,398,400 };
//
//double binarysearch(int key) {
//
//	int s = 0;
//	int e = 201;
//	clock_t c_start, c_end;
//	c_start = clock();
//	while (s <= e) {
//		int mid = (s + e) / 2;
//		if (arr[mid] = key) {
//			break;
//		}
//		else if (arr[mid] > key) {
//			e = mid - 1;
//		}
//		else {
//			s = mid + 1;
//		}
//	}
//	c_end = clock();
//	double time = double(c_end - c_start) / CLOCKS_PER_SEC;
//	return time;
//}
//double linearsearch(int key) {
//	clock_t c_end, c_start;
//	c_start = clock();
//	for (int i = 0; i < 201; i++) {
//		if (arr[i] == key) {
//			break;
//		}
//	}
//	c_end = clock();
//	double time = (c_end - c_start) / CLOCKS_PER_SEC;
//	return time;
//}
//
//void main() {
//
//	double time = linearsearch(44);
//	cout << "\nTime for 44 in linear search : " << time;
//	time = linearsearch(400);
//	cout << "\nTime for 400 in linear search : " << time;
//	time = linearsearch(450);
//	cout << "\nTime for 450 linear search : " << time << endl;
//
//	time = binarysearch(44);
//	cout << "\nTime for 44 in binary search : " << time;
//	time = binarysearch(400);
//	cout << "\nTime for 400 in binary search : " << time;
//	time = binarysearch(450);
//	cout << "\nTime for 450 in binary search : " << time;
//
//
//}