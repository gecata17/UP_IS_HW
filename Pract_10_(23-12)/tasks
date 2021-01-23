task00
#include <iostream>
using namespace std;
int sumOfDigits(int number)
{
	if (number / 10 == 0)//number==0
	{
		return number;
	}

	return sumOfDigits(number / 10) + (number % 10);
}


int main()
{
	cout << sumOfDigits(123);//6
	return 0;
}

task01
int recStrlen(const char* str)
{
	if(*str == '\0')
  {
  	return 0; 
  }
  
  return recStrlen(str++) + 1;
}

int main(){
  char arr[] = "asdas";
  
  
  cout << "The length is " << recStrlen(arr) << endl;
  
  return 0;
  }
  
 task 02
 #include <iostream>
using namespace std;
//Напишете рекурсивна функция с прототип int reverse(int), която обръща цяло число 
//(от дадено число получава ново число, в което цифрите са в обратен ред).
int reverse(int originalNum,int storage)//новото число,изграждаме отначало
	{
		if (originalNum == 0)
		{
			return storage;
		}

	return reverse(originalNum / 10, (storage * 10) + (originalNum % 10));
	}



int main()
{
	int num = 234;
	cout << "Reversed number " << reverse(num,0);
}

task03//first way
//Напишете рекурсивна функция int factorial(int) , която пресмята факториел от дадено цяло число.
int factorial(int num)
{
	if (num > 1) {
		return factorial(num - 1) * num;
	}
	else {
		return 1;
	}
}
void validation(int check) {
	if (check >= 0) {
		factorial(check);
	}
	else {
		cout << "Invalid input" << endl;
	}
}
task03//second way
#include <iostream>
using namespace std;
int factorial(int number) {
	if (number == 0) {
		return 1;
	}
	return number * factorial(number - 1);
}
int main()
{
	
	int num = 4;
	cout << factorial(4);
}


task04
#include <iostream>
using namespace std;
//Да се напише рекурсивна функция bool areEqual(char* str1, char* str2), която проверява дали двата стринга са равни.
bool areEqual(char* str1, char* str2)
{
	if (recStrlen(str1) != recStrlen(str2))
		return false;
	if (*str1 == '\0' && *str2 == '\0') {
		return true;
	}


	if (*str1 == *str2) {
		areEqual(str1+1, str2+1);
	}
	else {
		return false;
	}
}
task05
//Да се реализира рекурсивна функция, която намира n-тия член от редицата на Фибоначи.
int fib(int index)
{
    if (!index)
        return 0;
    if ((index == 1) || (index == 2))
        return 1;

    return fib(index - 1) + fib(index - 2);
}
task 06
//Напишете рекурсивна функция, която приема масив и връща минималния му елемент.
int minElem(const int* arr, int size) {
	if (size == 1) {
		return arr[0];
	}

	return min(arr[0], minElem(arr + 1, size - 1));
}
task 07
//Напишете функция, която приема число в десетична бройна система и връща числото в двоична бройна система
int toBin(int num) {

	if (num == 0) {
		return 0;
	}
	if (num == 1) {
		return 1;
	}

	return toBin(num / 2) * 10 + (num % 2);
}
task08 //not finished
#include <iostream>//Напишете функция с прототип void evaluate(const char*), която намира и изпечатва броят на малки и големи букви и броят на цифрите в даденият низ
using namespace std;
void evaluate(const char* str, size_t &counterCap, size_t &counterSmall, size_t &counterDigits) {
	if (*str == '\0') {
		cout << "Small Letters: " << counterSmall << endl;
		cout << "Capital Letters: " << counterCap << endl;
		cout << "Digits: " << counterDigits << endl;
		return;
	}
	if (((*str) >= 'A') && ((*str) <= 'Z')) {//взимаме нулевата позиция на str
		counterCap++;
	}             
	else if (((*str) >= 'a') && ((*str) <= 'z')) {//взимаме нулевата позиция на str
		counterSmall++;
	}
	else if (((*str) >= '0') && ((*str) <= '9')) {//взимаме нулевата позиция на str
		counterDigits++;
	}
	return evaluate(str + 1, counterCap, counterSmall, counterDigits);

}
int main()
{
	char str[] = "123aABbcCZ";

	evaluate(str);

	return 0;
}

