task00
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
        cout << i << "+";
    }
    cout <<"="<< sum;

}

task 02
#include <iostream>
using namespace std; 
const int MAX_SIZE = 100;
int main()
{
	int n = 0;
	cin >> n;
	double arr[MAX_SIZE] = { 0 };
	double min = DBL_MAX, max = DBL_MIN;
	for (size_t i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (size_t i = 0; i <n; i++) {
		if (arr[i] < min) {
			min = arr[i];

		}if(arr[i]>max){
				max = arr[i];
		}
	}
	cout << "MIN:" << min << endl;
	cout << "MAX:" << max << endl;
	for (size_t i = 0; i < n; i++) {
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}

	return 0;
}	
	
task03
#include <iostream>
using namespace std;
int main()
{
    const int MAX_SIZE = 128;
	int i,n,minIndex=0,maxIndex=0;
	int arr[MAX_SIZE];
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];

	for (i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			minIndex = i;
		}
	}
	arr[minIndex] = min;
	arr[maxIndex] = max;
	for (i = 0; i < n; i++) {
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}
	cout << "max:" << max << endl;
	cout << "min:" << min << endl;
	return 0;
	
}
task04
#include <iostream>
using namespace std;
int main()
{
 
    const int MAX_SIZE = 100;
    int n;
    cin >> n;
    int sum=0;
    bool flag = true;
    int arr[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            
            cout <<"Non-negative element is : "<< arr[i]<<endl;
            for (int j = i + 1; j < n; j++) {
                sum += arr[j];

            }
            cout <<"Sum is = "<< sum << endl;
            flag = true;
            break;
        }
        else {
            flag = false;

        }
    }
    return 0;
}

task05
#include <iostream>
using namespace std;
int main()
{
	int n;
	int arr[128];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i=n-1; i >= 0; i--) {
		cout<< arr[i]<<" ";
	}
	return 0;
}
 task06
 #include <iostream>
using namespace std;
int main()
{
	
    const char MAX_SIZE = 100;
    char sym;
    int n;
    cin >> n;
    char arr[MAX_SIZE];
    cin >> sym;
    int sum = 0;
    bool isHere = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    for (size_t i = 0; i <n; i++)
    {
        if ( arr[i]==sym) {
            sum ++;
            isHere = 1;
            arr[i] = '*';
            
        }
        else {
            isHere = 0;
        }
        
    }
    cout << "Sum is :" << sum << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}



 
	




