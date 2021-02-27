task00
#include <iostream>
using namespace std;
void charger(int &a, int &b) {
    int var;
    var = a;
    a = b;
    b = var;
	cout << "First num is : " << a << endl;
    cout << "Second num is : " <<  b << endl;
    
}
int main()
{
    int a=5, b=3;
    charger(a, b);
    return 0;

}
task00 secondway with pointers
void swap2(int *x, int *y){
 
  int temp = *x;
  *x = *y;
  *y = temp;
  
}
int main()
{int a=5;
 int b=3;
  swap2(&a, &b);


	return 0;
}
 
task01 
void charger(int& a, int& b) {
    int var;
    var = a;
    a = b;
    b = var;

}
void reversed(int arr[], int length) {
    for (size_t i = length-1; i >= length/2; i--)
    {
        swap(arr[i], arr[length - 1 - i]);
    }
}

int main()
{
    int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
    reversed(array,10);
    for (int i = 0; i < 10; i++) {
        cout << array[i] << endl;
    }
	return 0;
}
task01 not finished
void swap2(int *x, int *y){
 
  int temp = *x;
  *x = *y;
  *y = temp;
  
}
void ReverseWhile(int arr[], int size) {
    int* ptr1 = arr;
    int* ptr2 = arr + size - 1;
    while (ptr1 < ptr2) {
        swap2(ptr1, ptr2);
        ptr1++;
        ptr2--;
    }
}
int main()
{
int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
    ReverseWhile(array,10);
    for (int i = 0; i < 10; i++) {
        cout << array[i] << endl;
    }
	return 0;
    
}
task02
int* find_num(int arr[], int size, int element) {
    //int *ptr = nullptr;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            return &arr[i];
        }
    }

    return nullptr;
}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << *ElementCheck(arr, 10, 4) << endl;

	
	return 0;
}
task03
#include<iostream>
using namespace std;

void merge(int arr_1[], int size_1, int arr_2[], int size_2) {	
	
	int empty_arr[128];
	
  	int i = 0, j = 0, k = 0; //indixes
  	
  	while(k < size_1 + size_2) {
    		
      	if(j == size_2) {  
        		empty_arr[k++] = arr_1[i++];
          	//++i;
          	//++k;
          	continue;
        }
      	if (i == size_1) {
        		empty_arr[k++] = arr_2[j++];
          	//++j;
          	//++k;
          	continue;
        }
      	if (arr_1[i] > arr_2[j]) {
						empty_arr[k++] = arr_2[j++];
          	//++j;
          	//++k;
        }  
      	else if (arr_1[i] <= arr_2[j]) {
        		empty_arr[k++] = arr_1[i++];
          	//++i;
          	//++k;
        }
      
    }
    
    for(int i = 0; i < (size_1 + size_2); i++){
    	cout << empty_arr[i] << " ";
	}
}


int main(){
	int arr1[5] = {1,2,3,4,5};
	int arr2[4] = {3,4,5,6};
	
	merge(arr1, 5, arr2, 4);
	
	return 0;
}

task04
#include <iostream>
using namespace std;
int *doubleArr(int arr1[], int arr2[], int size1, int size2) {
	int sum1 = 0;
	int sum2 = 0;
	cout << "First array:" << endl;
	for (int i = 0; i < size1; i++) {

		cin >> arr1[i];
	}
	for (int i = 0; i < size1; i++) {

		sum1+=arr1[i];
	}
	cout << "Second array:" << endl;
	for (int i = 0; i < size2; i++)
	{
		
		cin >> arr2[i];
	}
	for (int i = 0; i < size1; i++)
	{
		sum2 +=arr2[i];
	}
	if (sum1 < sum2) {
		return arr1;
	}
	if (sum2 < sum1) {
		return arr2;
	}
	
}

int main()
{
	int arr1[4];
	int arr2[3];
	int *pointer= doubleArr(arr1, arr2, 4, 3);
	cout << *pointer;
	return 0;
}

