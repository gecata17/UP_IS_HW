task00//first way
#include <iostream>
using namespace std;
void nums(int firstNum, int secondNum,int temp)
{
    temp = firstNum;
    firstNum = secondNum;
    secondNum=temp;
    cout<< firstNum<<" "<<secondNum<<endl;
}
int main()
{
    int firstNum, secondNum, temp = 0;
    cin >> firstNum;
    cin >> secondNum;
    nums(firstNum,secondNum,temp);
	return 0;
}
task 00//second way
#include <iostream>
using namespace std;
void numChanger(int firstNum, int secondNum){
	int swap;
	swap = firstNum;
	firstNum = secondNum;
	secondNum = swap;
	cout << "First number is:" << firstNum << " " << "Second number is:" << secondNum << endl;
}
int main()
{
	int firstNum, secondNum;
	cin >> firstNum >> secondNum;
	numChanger(firstNum, secondNum);
	 return 0;
}



task 01
#include <iostream>
using namespace std;
void Pow(double firstNum, int secondNum) {
	double saver = firstNum;
	for (int i = 1; i < secondNum; i++) {
		saver*= firstNum;
	}
	cout << "The power of the two numbers: " << saver << endl ;
}
double Min(double firstNum, double secondNum) {
	if (firstNum < secondNum) {
		return firstNum;
		cout << endl;
	 }
	else {
		return secondNum;
		cout << endl;
	}
}
double Max(double firstNum, double secondNum) {
	if (firstNum >= secondNum) {
		return firstNum;
		cout << endl;
	}
	else {
		return secondNum;
		cout << endl;
	}
}
void Minof3(double firstNum, double secondNum, double thirdNum) {
	if (Min(firstNum, secondNum) >= Min(secondNum, thirdNum)) {
		cout <<"Min of three : "<< Min(secondNum, thirdNum) << endl;;
	}
	else {
		cout <<"Min of three : "<< Min (firstNum, secondNum) << endl;
	}
	

}
void Maxof3(double firstNum, double secondNum, double thirdNum) {
	if (Max(firstNum, secondNum) <= Max(secondNum, thirdNum)) {
		cout <<"Max of three : "<< Max(secondNum, thirdNum) << endl;;
	}
	else {
		cout <<"Max of three : "<< Max(firstNum, secondNum)<<endl;

	}
}
bool isAlpha(char sym) {
	if ('A' <= sym && sym <= 'Z' && 'a' <= sym && sym <= 'z') {
		return true;
		cout << endl;
	}
	else {
		return false;
		cout << endl;
	}
}
bool isDigit(char sym) {
	if ('0' <= sym && sym <= '9') {
		return true;
		cout << endl;
	}
	else {
		return false;
		cout << endl;
	}
}
int main()
{
	double firstNum, secondNum,thirdNum;
	char sym;
	cin >> firstNum >> secondNum>>thirdNum>>sym;
	Pow(firstNum, secondNum);
	cout << "MIN : " << Min(firstNum, secondNum) << endl;
	cout << "MAX : " << Max(firstNum, secondNum) << endl;
	Minof3(firstNum, secondNum, thirdNum);
	Maxof3(firstNum, secondNum,thirdNum);
	cout <<boolalpha<< isAlpha(sym) << endl;
	cout <<boolalpha<< isDigit(sym) << endl;
	 return 0;
}



task02
void printMatrix(int matrix[][MAX_SIZE], int rows, int cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
void fillMatrix(int rows, int cols)
{
    int matrix[MAX_SIZE][MAX_SIZE] = { 0 };
 
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            if (i == j)
            {
                matrix[i][j] = i;
            }
            else if(i < j)
            {
                matrix[i][j] = j - i;
            }
            else if(i > j)
            {
                matrix[i][j] = i*j;
            }
        }
    }
    printMatrix(matrix, rows, cols);
}
 
int main()
{
    int n = 0, m = 0;
    cin >> n >> m;
    fillMatrix(n, m);
 
    return 0;
}

task02//second way
#include <iostream>
using namespace std;
void Matrix(int firstNum, int secondNum) {
	const int Rows = 100;
	const int Columns = 100;
	int array[Rows][Columns];
	for (int i = 0; i < firstNum; i++) {
		for (int j = 0; j < secondNum; j++) {
			if (i == j) {
				array[i][j]= i;
				
			}
			if (i > j) {
			    array[i][j]= j - i;
				
			}
			if (i < j) {
				array[i][j] = j * i;
				
			}
		}
	}
	for (int i = 0; i < firstNum; i++) {
		for (int j = 0; j < secondNum; j++) {
			cout << array[i][j];
		}
	}

}
int main()
{
	
	int n, k;
	cin >> n >> k;
	Matrix(n, k);
	
	 return 0;
}



task 03
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

int powNum(int firstNum, int num = 2) {
    double number = 1;
    for (size_t i = 0; i < num; i++)
    {
        number *= firstNum;
    }
    return number;
}
int main()
{
    int firstNum, num;
    cin >> firstNum;
    cout<<"Result is:"<<powNum( firstNum, num=2);
    return 0;
}

task03//second way
#include <iostream>
using namespace std;

void Pow(double firstNum) {
	double saver = firstNum;
	for (int i = 1; i < 2; i++) {
		saver *= firstNum;
	}
	cout << saver << endl;
}
int main()
{

	int number;
	cin >> number;
	Pow(number);

	return 0;
}

task 03//third way
#include<iostream>
using namespace std;

double findSquare(double num){
	return num * num;
}

int main(){
	
	cout << findSquare(2);
	
	
	return 0;
}

task 04
#include <iostream>
using namespace std;

void arrInt(int array[],int size,int number) {
	for (int i = 0; i < size; i++) {
		array[i] *= number;

	}
	for (int i = 0; i < size; i++) {
		cout << array[i] <<" ";
		
	}
	cout << endl;
	
}
void arrDouble(double array[], int size, double number) {
	for (int i = 0; i < size; i++) {
		array[i] *= number;

	}
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";

	}

}
int main()
{
	const int elem = 100;
	int array[elem] = { 1,2,3,4,5,6 };
	double array2[elem] = { 2.3,1.4,65.3,62.9};
	arrInt(array, 6,3);
	
	arrDouble(array2,6,3.0);
	


	return 0;
}

task 05
#include <iostream>
using namespace std;

bool arrInt(const int array[]) {
	for (int i = 0; i < 10; i++) {
		if (array[i] < array[i + 1]) {
			return false;
		}
		
	}
	return true;

}
int main()
{

	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 10, 9,122, 7, 6, 5, 4, 3, 2, 1 };
	int arr1[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	cout<<boolalpha<<arrInt(array)<<endl;
	cout << boolalpha << arrInt(arr1)<<endl;
	cout << boolalpha << arrInt(arr2);

	return 0;
}
task06
#include <iostream>
using namespace std;

int charCounter(const char arr[]) {
	int i = 0, wordCounter = 1;
	while (arr[i] != '\0') {
		if (arr[i] == ' ') {
			wordCounter++;
		}
		i++;
	}
		return wordCounter;
}



int main()
{

	char array[15] = { "kiro ev laino"};
	char arr2[23] = { "ivan sergiob onch bht"};

	cout <<"Words count : "<< charCounter(array) << endl;
	cout <<"Words count : "<< charCounter(arr2) << endl;

	return 0;
}

task07
#include <iostream>
using namespace std;

int charCounter(const char arr[]) {
	int i = 0, numberCounter = 0;
	while (arr[i] != '\0') {
		if ('0'<=arr[i] && arr[i] <= '9') {
			numberCounter++;
		}
		i++;
	}
		return numberCounter;
}



int main()
{

	char array[18] = { "kiro 2 ev 1 laino"};
	char arr2[25] = { "ivan sergiob 2 onch bht"};

	cout <<"Numbers count : "<< charCounter(array) << endl;
	cout <<"Numbers count : "<< charCounter(arr2) << endl;

	return 0;
}

# task08
#include <iostream>
using namespace std;

int Length(const char arr[]) {
	int i = 0;
	while(arr[i] != '\0') {
		
		i++;
	}
	return i;
}

bool isIdentifier(const char arr[]) {
	if (!((arr[0] >= 'a' && arr[0] <= 'z') || (arr[0]>='A' && arr[0]<='Z')|| arr[0]=='_'  )) {
		return false;
	}
	for (int i = 0; i < Length(arr); i++) {
		if (!((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= '0' && arr[i] <= '9') || arr[0] == '_')) {
			return false;
		}
	}
	return true;
}


int main()
{
	char str[32];

	cin.getline(str, 32);

	cout << boolalpha << isIdentifier(str);

	return 0;

}
