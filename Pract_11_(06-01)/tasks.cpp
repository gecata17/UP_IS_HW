task 00
int FindBigNeighbor (int *arr, int n, int counter){
  if(size <= 3)
  {
    return counter;
  }
  if (i > 0 && i < n-1) {
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
				counter++;
        return FindBigNeighbor (arr+1, n, counter);
      }
  }
}
int main()
{
	int n;
	std::cin >> n;
	//int counter = 0;
  int i =0;
	int arr[100];
	for (; i < n; i++) {
		std::cin >> arr[i];
	}

	std::cout << FindBigNeighbor(arr, n, 0) << std::endl;
	
	return 0;
	}

task 00//second way
int biggestLocal(int *arr, int size){
 
  if(size < 3){
   	return 0; 
  }
  return (arr[0] < arr[1] && arr[1] > arr[2]) + biggestLocal(arr + 1, size - 1);
}
task00//third wayint findBiggestLocals(int* arr, int left, int right, int count, int size)
{
	if(size < 3)
		return count;
	if((*arr > left) && (*arr > right))
	{
		count++;
	}
	left = *arr;
	right = *arr + 2;
	return findBiggestLocals(arr + 1, left, right, count, size - 1);

}
task01 //first way not finished
int NOD(int& n, int& m)
    {
        if ((m == 0) || (n == 0))
            return max(n, m);

        static int nod = 1;
        if (n > m)
        {
            nod = n % m;
            return NOD(m, nod);
        }
        else
        {
            nod = m % n;
            return NOD(n, nod);
        }
   }

task01//second way not finished
int FindNod(int num1, int num2) {
	int rest = 0;
	
	if (num1 % num2 == 0) {
		return num2;
	}
	else {
	rest = num1 % num2;
	num1 = num2;
	num2 = rest;
	return FindNod(num1 , num2);
			}
}

task 01 third way
int NOD(int &n, int &m)
{
  int result;
  
	if(n == 0){
   result = m; 
  }
  else if(m == 0){
   result = n; 
  }
  else if(n > m)
  {
  	result = NOD(n, m);
  }
  else
  {
  	result = NOD(n, n % m);
  }
  
  return result;
}

 int m, n;
  
  do{
    cin >> m;
    cin >> n;
    
    
  }while(m < 0 || n < 0 || (m == 0 && n == 0));
  
  cout << "NOD = " << NOD(m, n) << endl;
  
	return 0;
}


task 01 //finished
 #include <iostream>
 using namespace std;
        
int nod ( int m, int n) {
    int result;
                
    if ( n == 0 ){
        result = m;
    }  
    else if ( n > m ){
        result = nod ( n, m ) ;
    }                
    else {
        result = nod ( n, m % n);
    }               
                
    return result;
}
        
int main() {
    int m, n;
                
        do{
            cout << " m= ";
            cin >> m;

            cout << "n = ";
            cin >> n;

        } while ( m < 0 || n < 0 || ( m == 0 && n == 0 ) );
                
        cout<<"\n NOD = "<< nod ( m, n ) << endl;

    return 0;
}


task 02
#include<iostream>
using namespace std;

bool isPresent(int n, int size, int *arr)
{
	if (size <= 0)
		return false;

	if (n == arr[size - 1])
		return 1;

	else isPresent(n, size - 1, arr);
}


int main(){
    int arr[] = {1, 2, 3, 4, 5};

    cout << isPresent(2, 5, arr);

    return 0;
}

task03
#include<iostream>
using namespace std;

bool isIn(int number, int digit)
{
	if (number == 0)
		return false;

	if (number % 10 == digit)
		return true;

	return isIn(number / 10, digit);
}

int main(){
    int num = 123;

    cout << isIn(2, num);

    return 0;
}


task 04  //not finished
#include<iostream>
using namespace std;

int ackerman(int m, int n)
{
	if (m == 0 && n)
		return n + 1;

	if (m && 0)
		return ackerman(m - 1, 1);

	return ackerman(m - 1, ackerman(m, n - 1));

}

int main(){
    

    return 0;
}


task 05
#include<iostream>
using namespace std;

bool isUnique(int arr[], int size)
{
	if (size <= 0)
		return true;

	if (isUniqueHelper(arr, size - 1, arr[size - 1]) == false)
		return false;

	return isUnique(arr, size - 1);
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 1, 1, 1, 1};

    cout << isUnique(arr1, 5) << endl;
    cout << isUnique(arr2, 5) << endl;

    return 0;
}	
	
