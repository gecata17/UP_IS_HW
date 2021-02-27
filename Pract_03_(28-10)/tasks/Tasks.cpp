task 00
#include <iostream>
using namespace std;
int main()
{

int number;
    cin >> number;

    bool flag = false;
    do
    {
        if (number % 10 == 1)
            flag = true;
        number /= 10;
    }
    while (number != 0 && !flag);

    cout << (flag ? "Yes" : "No") << endl;
    return 0;
}
#include<iostream>
using namespace std;


int main(){
	int firstTime, secondTime;
	cin >> firstTime >> secondTime;
	
	int firstTimeMinutes = firstTime % 100;
	int firstTimeHours = firstTime / 100;
	
	int secondTimeMinutes = secondTime % 100;
	int secondTimeHours = secondTime / 100;
	
	if(0 <= firstTimeHours && firstTimeHours <= 23 && 0 <= firstTimeMinutes && firstTimeMinutes <= 59 &&
	   0 <= secondTimeHours && secondTimeHours <= 23 && 0 <= secondTimeMinutes && secondTimeMinutes <= 59) {
		// Time is valid
		firstTimeMinutes += firstTimeHours * 60;
		secondTimeMinutes += secondTimeHours * 60;
		
		if(secondTimeMinutes < firstTimeMinutes) {
			secondTimeMinutes += 24 * 60;
		}
		
		int difference = secondTimeMinutes - firstTimeMinutes;
		
		int differenceHours = difference / 60;
		int differenceMinutes = difference % 60;
		
		if(differenceHours < 10) {
			cout << 0;
		}
		cout << differenceHours;
		
		if(differenceMinutes < 10) {
			cout << 0;
		}
		
		cout << differenceMinutes;
		
	} else {
		cout << "Invalid" << endl;
	}	

	

	return 0;
}
task02
#include <iostream>
using namespace std;
int main()
{
	int firstNum,secondNum;
	bool found = false;
	cin >> firstNum >> secondNum;
	for (int i = 2; i < firstNum; i++) {
		if (firstNum % i == 0) {
			if (secondNum % (i * i) == 0) {
				found = true;
				cout << boolalpha << found << endl;
				break;
			}
		}
		else {
			cout << boolalpha << found << endl;
			break;
		}
	}
 } 

task 03
#include <iostream>
using namespace std;
int main()
{
    bool oldCar;
    bool noConditioner;
    int horsepower, price,mileage;
    cin >> horsepower >> mileage >> price>>oldCar>>noConditioner;
    bool oldPurchaseFirst = (oldCar && (!noConditioner) && horsepower >= 70 && price <= 6000 && mileage < 115000);
    bool oldPurchaseSecond = (oldCar && noConditioner && horsepower >= 60 && price <= 2000 && mileage < 180000);
    bool newPurchase = ((!oldCar) && (!noConditioner) && (70<=horsepower<=90) && price <= 25000);
    bool result = oldPurchaseFirst || oldPurchaseSecond || newPurchase;
    cout <<boolalpha<< result;
}


task 04
#include <iostream>
using namespace std;
int main()
{       int group;
        double ticket;
        double discount = 0.0;
        double sum;
        cin >> group >> ticket;
        if (5 <= group&& group <= 10) {
            discount = 0.95 * ticket;
            sum = group * discount;
            cout << sum;
        }
        else if (11 <= group && group <= 20) {
            discount = 0.90 * ticket;
            sum = group * discount;
            cout << sum;
        }
        else if (group >= 21) {
            discount = 0.85 * ticket;
            sum = group * discount;
            cout << sum;
        }
        return 0;
 } 

task05
#include <iostream>
using namespace std;
int main()
{
	int n,counter=0;
	bool out = false;
	cin >> n;
	for (int i = 1;; i++) {
		for (int j = 0; j < i; j++) {
			cout << i << " ";
			counter++;
			if (counter == n) {
			    out = true;
				break;
			}
		}
		if (out) {
			break;
		}
	}
 } 








