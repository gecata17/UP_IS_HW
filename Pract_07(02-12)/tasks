task 00
#include <iostream>
using namespace std;

void Exchanger(int firstNum, int secondNum) {
	int temp;
	temp = firstNum;
	firstNum = secondNum;
	secondNum=temp;
	
	cout << "First number : "<< firstNum << endl;
	cout << "Second number : "<< secondNum << endl;
}


int main()
{
	int firstNum, secondNum;
	cin >> firstNum >> secondNum;
	Exchanger(firstNum, secondNum);

}


task01 not finished
#include <iostream>
using namespace std;
void changer(int* arr, int size) {
    for (int i = 0; i < size; i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main()
{
    int n,arr[32];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

  }
    changer(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    return 0;
}

task01 another way
#include <iostream>
using namespace std;
void reverse(int*, int);
int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    reverse(a, 5);
    for (size_t i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void reverse(int* arr, int n)
{
    for (size_t i = 0; i <n/2; i++)
    {
        *(arr + i) += *(arr + n - i -1);
        *(arr + n - i - 1) = *(arr + i) - *(arr + n - i - 1);
        *(arr + i) = *(arr + i) - *(arr + n - i - 1);
    }
 
}

task01 third way
#include <iostream>
using namespace std;

void swap(int* x, int* y) {

	*x = *x * *y;
	*y = *x / *y;
	*x = *x / *y;

}
void reverse(int arr[], int size) {
	int *ptr1 = arr;
	int *ptr2 = arr + size - 1;
	while (ptr1 < ptr2) {
		swap(ptr1, ptr2);
		ptr1++;
		ptr2--;

	}

}


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	reverse(arr, 10);

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	return 0;
	

}

task02 1rst way
void func(char* arr, int n, int &counter) {
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 48 && arr[i] <= 57)
			counter++;
	}

}

int main() {
	int n;
	char arr[32];
	std::cin >> n;

	int counter = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	func(arr, n, counter);

	std::cout << counter << std::endl;
	return 0;
}

task second way
#include<iostream>
int func(char *arr, int n) {
	
	int counter = 0;
	
    for (int i = 0; i < n; i++) {
    	 
        if (arr[i] >= 48 && arr[i] <= 57){
		counter = counter + 1; 
		}
                
    }
      
	return counter;
}

int main (){
    int n;
    char arr[32];
    
    std::cin >> n;


    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    


    std::cout << func(arr,n)<< std::endl;
    
}

task 02 third way


#include <iostream>
using namespace std;
int numInStr(char*, int);
int main()
{
    char str[6] = { 'a','4','b','5','6','d' };
    cout<< numInStr(str, 6);
 
}
int numInStr(char* str, int n)
{
    int ctr=0;
    for (int i = 0; i < n; i++)
    {
        if (*(str + i) >= 48 && *(str+i)<=57)
        {
            ctr++;
        }
    }
    return ctr;
}

task02 fourth way
#include <iostream>
using namespace std;

int digitCounter(char *arr) {
	int counter=0;
	int i = 0;
	while (*(arr +i) != '\0') {
		if ('0' <= *(arr+i) && *(arr+i) <= '9') {
			counter++;
		}
		i++;
	}
	  
	  return counter;
}


int main()
{
	char arr[66] = {"Ivan is 9 years old and his bro is 16 while their grandpa is 80" };
	cout<<"Digits count is : "<<digitCounter(arr);
}

task 03
#include <iostream>
using namespace std;
bool isAValidId(char*, int);
void printStr(char*, int);
int main()
{
    char str[5] = { 'a','b','c','d','e' };
    char str2[5] = { 'A','3','c','B','e' };
    char str3[5] = { '-',' ','!','#','%' };
    printStr(str,5);
    cout << isAValidId(str, 5) << endl;
    printStr(str2, 5);
    cout << isAValidId(str2, 5) << endl;
    printStr(str3, 5);
    cout << isAValidId(str3, 5) << endl;
}
bool isAValidId(char* str, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (!((*(str+i)>=48 && *(str + i) <= 57) || (*(str + i) >= 65 && *(str + i) <= 90) || (*(str + i) >= 97 && *(str + i) <= 122)))
        {
            return false;
        }
    }
    return true;
}
void printStr(char* str, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << *(str + i)<< " ";
 
    }
    cout << endl;
}

task03 //second way
#include <iostream>
using namespace std;

int Iterator( char *arr) {
	int counter = 0;
	int i = 0;
	while (*(arr + i) != '\0') {
		
		i++;
	}

	return i;
}

bool isIdentificator(char *arr) {
	
	if (!(('a' <= *(arr + 0) && *(arr + 0) <= 'z') || ('A' <= *(arr + 0) && *(arr + 0) <= 'Z') || *(arr + 0) == '_')) {
		return false;
	}
	for (int i = 1; i < Iterator(arr); i++) {
		if (!(('a' <= *(arr + i) && *(arr + i) <= 'z') || ('A' <= *(arr + i) && *(arr + i) <= 'Z') || ('0' <= *(arr + i) && *(arr + i) <= '9') || *(arr + i) == '_')) {
			return false;
		}
	}
	return true;
}

int main()
	{
	char str[] = "daaa";

	cout <<boolalpha<< isIdentificator(str);

	return 0;
	}
	

task 04 not finished
#include <iostream>
 
void check(double *arr, int lenght, bool &is_true_check);
 
int main()
{
	int lenght = 0;
	std::cin >> lenght;
	const int MAX_LENGHT = 50;
	double arr[MAX_LENGHT] = { 0 };
	//operation is : (*3, +5)
	bool is_true_check = true;
 
	for (size_t i = 0; i < lenght; i++)
	{
		std::cin >> arr[i];
	}
 
	check(arr, lenght, is_true_check);
	std::cout << is_true_check;
 
 
	return 0;
}
 
void check(double *arr, int lenght, bool &is_true_check)
{
	for (size_t i = 0; i < lenght - 2; i+=2)
	{
		if (!(*(arr + i) * 3 == *(arr + i + 1)))
		{
			is_true_check = false;
			break;
		}
		else if (!(*(arr + i + 1) - 5 == *(arr + i + 2)))
		{
			is_true_check = false;
			break;
		}
	}
 
	return;
}
