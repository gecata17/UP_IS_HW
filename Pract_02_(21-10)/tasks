task0
double a, b;
	char operate;
	cin >> a >> operate >> b;
	switch (operate) {
	case '+':cout << a + b << endl; break;
	case'-': cout << a - b << endl; break;
	case'*':cout << a * b << endl; break;
	case'/':
		if (b != 0) {
			cout << a / b << endl; break;
		}
		else {
			cout << "Invalid division" << endl;
		}
	default: cout << "Invalid operation" << endl;

task01
    int year;
	cin >> year;
	cout<<"Enter a year";
	if (year % 4 == 0) {
		if ((year % 100) && (year % 400)) {
			cout <<year<<" is a leap year." << endl;
		}
		else {
			cout << year<<"is not a leap year. " << endl;
    return 0;
task02
    char symbol;
	cin >> symbol;
	if ('a' <= symbol <= 'z') {
		cout << "The upper case character corresponding to is "<< char(symbol - 32);
	}
	else if ('A' <= symbol <= 'Z') {
		cout << "The upper case character corresponding to is "<< char(symbol + 32);
	}
	else {
		cout << symbol << "is not a letter" << endl;
	
task 03
int month;
    cin >> month;
	switch (month) {
	case 1:case 2:case 12: cout << "The season is winter"; break;
	case 6:case 7:case 8:cout << "The season is summer"; break;
	case 3:case 4:case 5:cout << "The season is spring"; break;
	case 9:case 10:case 11:cout << "The season is autumn"; break;
	default:cout << "Invalid month" << endl;
	
task04

int a, b;
	cin >> a >> b;
	int x = -b / a;
	if (a * x == -b)
		cout << x << endl;
	else if ((a == 0) && (b == 0))
	{   
		cout << "INF" << endl;
	}
	else {

		cout << "NO" << endl;

task05
int month, year;
	cin >> month >> year;
	int days = 0;
	switch (month) {
	case 1:case 3:case 5:case 7: case 8:case 10: case 12:days = 31; cout << days << endl; break;
	case 4:case 6:case 9:case 11: days = 30; cout << days << endl; break;
	case 2:
		if (year % 4 == 0) {
			if ((year % 100 == 0) && (year % 400 == 0)) {
				days = 29;
				cout << days << endl;
			}
			else {
				days = 28;
				cout << days << endl;

task 06
double money;
	int ram, usbPort;
	bool ssdIn;
	cin >> money >> ram >> usbPort>>ssdIn;
	bool purchase = ((1000 <= money && money <= 1500) && (usbPort >= 3) && (ram >= 8) && ssdIn);
	bool purchaseGiveup = ((money <= 800) && (!ssdIn || ram < 8));
	bool result = purchase || purchaseGiveup;
	cout<<result<<endl;
	return 0;
	
	
task 07
int num;
	cin >> num;
	bool statement = 1;
	bool wrongStatement = 0;
	int firstDigit = num / 1000;
	int secondDigit = num / 100 % 10;
	int thirdDigit = num / 10 % 10;
	int fourthDigit = num % 10;
	int checkOne = max(firstDigit, secondDigit);
	int checkTwo = max(checkOne, thirdDigit);;
	if ((firstDigit % 2 == 1) && (max(checkTwo, fourthDigit))){
		cout << boolalpha << statement << endl;

	}
	else {
		cout << boolalpha << wrongStatement << endl;
	}
	
	
	
	task07
#include <iostream>  
#include <cmath>
using namespace std;
int main()
{
	int num;
	cin >> num;
	bool statement = 1;
	bool wrongStatement = 0;
	int firstDigit = num / 1000;
	int secondDigit = num / 100 % 10;
	int thirdDigit = num / 10 % 10;
	int fourthDigit = num % 10;
	if (firstDigit % 2==1 && firstDigit>secondDigit && firstDigit>thirdDigit && firstDigit>fourthDigit) {
		cout << boolalpha << statement << endl;

	}
	else {
		cout << boolalpha << wrongStatement << endl;

		return 0;
	}
