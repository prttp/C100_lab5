//Прототипы используемых в данном задании функций:
extern int& ref;
int square(const int& x);
int IncByValue(int x);
void IncByPointer(int* x);
void IncByReference(int& x);
void Swap_p(int* x, int* y);
void Swap_r(int& x, int& y);
void PrintArray(const int arr[], size_t N);
int Min(const int arr[], size_t N);
int MyStrCmp(const char* str1, const char* str2);
const char* NameOfMonth(int n);
int* MyMin(const int arr[], size_t N);
void f2(int x, const int arr[], size_t N);