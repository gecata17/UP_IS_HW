task 00
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int number=1;
    while(n>0){
        number = number * n;
        n--;
    }
    cout << number << endl;

    return 0;
}




task01
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        
        cout <<'a'<<i<<"="<<pow(i,2) + (3*i)<<endl;;
    }

    return 0;
}
	
task 02
#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int a;
    int maxNeg = INT_MIN;
    cin >> n;
    for (i = 0; i < n; i++) {
        
        cin >> a;
        if (a < 0 && a >= maxNeg) {

                maxNeg = a;
            }
        }
       
    }
	
	
task 03
int i;
    int n;
    int num1 = 0;
    int num2 = 1;
    cin >> n;
    int nextNum = 0;
    for (i = 2; i < n; i++) {
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
    cout << nextNum<<endl;
    return 0;

task04
#include <iostream>
using namespace std;
int main()
{
  
    int number;
    int sum = 0;
    
    do {
        cin >> number;
        sum += number;
    } while (number != 0); {
           
    }
    
    cout<< "Sum is " << sum << endl;
    
}
task 05
#include<iostream>
using namespace std;


int main(){
	int n, sum = 0;
	
	cin >> n;
	
	while(n){
		sum += n % 10;
		n /= 10;
	}
	
	cout << "sum: " << sum;
	
	return 0;
}
	
task06
int main()
{

	int num, power;
	cin >> num >> power;
	int action=0;
	while (num > 0) {
		action = pow(num, power);
		break;
		
	}
	cout << action << endl;
 } 

task07
#include <iostream>
using namespace std;
int main()
{
    int number,n;
    bool isPrime = 1;
    cin >> number;
    if (number <= 1) {
        isPrime = 0;

    }
    for (int j=2; j< number;j++) {
  
            if (number % j == 0) {
                isPrime = 0;
                
            }
           
     }
    if(isPrime){
        cout << "Yes" << endl;
    }else{
         cout << "No" << endl;
        }

return 0;    
}

task08
#include <iostream>
using namespace std;
int main()
{
 
  for (int i = 65; i <= 90; i++) {
        
        if(i == 'A' || i == 'E'|| i == 'O' || i == 'I' || i == 'U' || i == 'Y') {
            continue;
            
        }
        cout <<char(i)<< endl;
  }

    return 0;
 }

task09
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                cout << "+";
        
            }
            else if (i > j) {
                cout << "-";
               
            }

            else {
                cout << '0';
                
            }

        }
        cout << endl;
    }
    
 }
