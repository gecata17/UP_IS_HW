task 00
#include <iostream>
using namespace std;
int main()
{
    const int MAX_SIZE = 128;
    int n;
    int arr[MAX_SIZE];
    int number;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int arr2[128];
    cin >> number;
    for (int i = 0; i < n; i++) {
        if (arr[i] = number) {
            arr2[sum] = i;
            sum++;
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << endl;
            cout << sum << endl;
        }

    }
}

task01
#include <iostream>
using namespace std;
int main()
{
	const int ROWS = 100;
	const int COLUMNS = 100;
	int matrix [ROWS][COLUMNS];
	int k, n;
	int sum[100];
	for (int i = 0; i < k; i++) {
		sum[i] = 0;
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
			sum[i] += matrix[i][j];
		}
	}
	for (int i = 0; i < k; i++) {
		cout << "[" << i << "]:" << sum[i] << endl;
	}
}

task02//first way
#include <iostream>
using namespace std;
int main()
{
	const int ROWS = 100;
	const int COLUMNS = 100;
	int matrix [ROWS][COLUMNS];
	int k, n;
	int sum=0,sum1=0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
			
		}
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j]<<" "<<endl;
		}
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				sum += matrix[i][j];
			}
		}
	}
	cout << sum << endl;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j == n - 1) {
				sum1 += matrix[i][j];
			}
		}
	}
	cout << sum1 << endl;
}
task02//second way
#include <iostream>
using namespace std;
int main()
{
	const int MAX_ROWS = 100;
	const int MAX_COLUMNS = 100;
	int array[MAX_ROWS][MAX_COLUMNS];
	int n, k;
	cin >> n >> k;
	int sum = 0,sum1=0,counter=0;
	for (int i = 0; i < n; i++)
	{
		for (int j= 0; j <k ; i++)
		{
			cin >> array[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; i++)
		{
			if (i == j) {
				sum += array[i][j];
			}
		}


	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; i++)
		{
			if(i+j==n-1)
			sum1 += array[i][j];
		}

	}
	counter = sum + sum1;
	cout << counter << endl;
	return 0;
}


task03//first way
#include <iostream>
using namespace std;
int main()
{
	const int ROWS = 100;
	const int COLUMNS = 100;
	int matrix [ROWS][COLUMNS];
	int k, n;
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
			
		}
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j]+10<<" "<<endl;
		}
	}
	
}
task03// second way
#include <iostream>
using namespace std;

int main()
{
	const int MAX_ROWS = 100;
	const int MAX_COLUMNS = 100;
	int array[MAX_ROWS][MAX_COLUMNS];
	int n, k;
	cin >> n >> k;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k ; j++)
		{
			cin >> array[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
				 array[i][j]+=10;
			
		}


	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{

			cout << array[i][j] << endl;
		}
	}
	return 0;
}

task04
#include <iostream>
using namespace std;

int main()
{
	const int MAX_ROWS = 100;
	const int MAX_COLUMNS = 100;
	int array[MAX_ROWS][MAX_COLUMNS];
	int n, k;
	cin >> n >> k;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k ; j++)
		{
			cin >> array[i][j];
		}
	}
	int minElement = array[0][0];
	int maxElement = array[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (minElement > array[i][j]) {
				minElement = array[i][j];
				}
			if (maxElement <= array[i][j]) {
				maxElement = array[i][j];
			}

		}


	}
	
		cout <<"MIN:"<< minElement << endl;
		cout <<"MAX:"<< maxElement << endl;
	
	return 0;
}

task05
#include <iostream>
using namespace std;

int main()
{
	const int MAX_ROWS = 100;
	const int MAX_COLUMNS = 100;
	int array[MAX_ROWS][MAX_COLUMNS];
	int n, k;
	int sum = 0,sumRow=0,sumCol=0,sumMain=0,sumSec=0,sumAboveMain=0,sumUnderMain=0,sumUnderSec=0,sumAboveSec=0;
	cin >> n >> k;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k ; j++)
		{
			cin >> array[i][j];
		}
	}
	
	for (int i = 0; i < n; i++)//every row
	{
		for (int j = 0; j < k; j++)
		{
			sumRow += array[i][j];
		}
	}
	for (int i = 0; i < k; i++)//every column
	{
		for (int j = 0; j < n; j++)
		{
			sumCol += array[i][j];
		}
	}
	for (int i = 0; i < n; i++)//primary diagonal
	{
		for (int j = 0; j < k; j++)
		{
			sum += array[i][j];
			if (i == j)
			{
				sumMain += array[i][j];
			}
			if (i + j == n - 1)//secondary diagonal 
			{
				sumSec += array[i][j];
			}
			if (i < j) //sum above main diagonal
			{
				sumAboveMain += array[i][j];
			}
			if (i > j) //sum under main diagonal
			{
				sumUnderMain += array[i][j];
			}
			if (i+j < n-1) //sum above secondary diagonal
			{
				sumAboveSec += array[i][j];
			}
			if (i+j > n-1) //sum under secondary diagonal
			{
				sumUnderSec += array[i][j];
			}

		}


	}
	
		cout <<"SUM:"<< sum << endl;
		cout << "SUM Rows:" << sumRow << endl;
		cout << "SUM Columns:" << sumCol << endl;
		cout << "SUM Main:" << sumMain << endl;
		cout << "SUM Sec:" << sumSec << endl;
		cout << "SUM Above Sec:" << sumAboveSec << endl;
		cout << "SUM Under Sec:" << sumUnderSec << endl;
		cout << "SUM Under Main :" << sumUnderMain << endl;
		cout << "SUM Above Main:" << sumAboveMain << endl;
		
    return 0;
}
task 06
#include <iostream>
using namespace std;

int main()
{
	const int MAX_ROWS = 100;
	const int MAX_COLUMNS = 100;
	int array[MAX_ROWS][MAX_COLUMNS];
	int n, k;
	bool flag=false;
	cin >> n >> k;
	int x;
	cin >> x;
	int indexRows, indexCol;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cin >> array[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k ; j++)
		{
			if (x == array[i][j]) {
				flag=true;
				
				indexRows = i;
				indexCol = j;
				x*= 10;
			}
			
		}

	}
	if (flag) {
		cout << x<<"["<<indexRows<<"]["<<indexCol<<"]" << endl;
	}
	else {
		cout << "Not belongs to the matrix." << endl;
	}
	
	 return 0;
}

task07
#include <iostream>
using namespace std;

int main()
{
	const int MAX_ROWS = 100;

	int array[MAX_ROWS];
	int n;
	cin >> n;
	int swap;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < n-1; i++)//bubble sorting
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (array[j] > array[j + 1]) {//compare neighbour elements
				swap = array[j];
				array[j] = array[j + 1];//exchange neighbour elements
				array[j + 1] = swap;
			}
		}
		
	}
	for (int k = 0; k < n; k++) // int k=0;k<n;k++ //second way
	{
		cout<<"array["<<k<<"]="<<array[k]<<endl;
	}
	
	 return 0;
}







