#include "other.h"
#include <iostream>
///////////////////////////////////////////////////
int yyy = 1;
int& ref = yyy;
int square(const int& x) {
	return (x * x);
}
int IncByValue(int x) { return (++x); }
void IncByPointer(int* x) { ++(*x); }
void IncByReference(int& x) { ++x; }
void Swap_p(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
void Swap_r(int& x, int& y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
void PrintArray(const int arr[], size_t N) {
	for (int i = 0; i < static_cast<int>(N); i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}
int Min(const int arr[], size_t N) {
	int min = arr[0];
	for (int i = 1; i < static_cast<int>(N); i++) {
		if (min > arr[i]) { min = arr[i]; }
	}
	return min;
}
int MyStrCmp(const char* str1, const char* str2) {
	int i = 0;
	while ((str1[i] || str2[i]) != 0) {
		if (str1[i] < str2[i]) { return -1; }
		else if (str1[i] > str2[i]) { return 1; }
		i++;
	}
	return 0;
}
const char* NameOfMonth(int n) {
	if ((n > 12) || (n < 1)) { return "Error! Wrong number"; }
	const char* months[12] = { "January", "February", "March", "April", "May" , "June", "July", "August", "September", "October", "November", "December" };
	return months[n-1];
}
int* MyMin(const int arr[], size_t N) {
	const int* min = &arr[0];
	for (int i = 1; i < static_cast<int>(N); i++) {
		if (*min > arr[i]) { min = &arr[i]; }
	}
	return const_cast<int*>(min);
}
void f2(int x, const int arr[], size_t N) {
	int counter = 0;
	for (int i = 1; i < static_cast<int>(N); i++) {
		if ( x == arr[i]) { counter++; }
	}
	if (counter == 0) { std::cout << "Element isnt found" << std::endl; }
	else if (counter%2) { std::cout << x << " occurs in the array an odd number of times" << std::endl; }
	else {std::cout << x << " occurs in the array an even number of times" << std::endl; }
}
