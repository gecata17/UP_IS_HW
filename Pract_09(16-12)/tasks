task00
#include <iostream>
using namespace std;

int* createArr (int* array, int size) {//връщаме първия елемент от масива
    int* newArrPtr = new int[size / 2];//правим динамичен масив,постоянно можем да променяме размера
	for (int i = 0; i < size/2 ; ++i)
	{
		newArrPtr[i] = array[i];
	}
	return newArrPtr;
}
int main()
{
	int *array;
	array= createArr(array,10);
	delete[] array;
	return 0;
}

task01
#include <iostream>
using namespace std;

int main()
{
    //В една школа има определен брой учители. Всеки един от тях иска да нанесе определен брой оценки. Дайте на учителите места, където да си нанесат оценките.
    size_t teachersSize;
    cin >> teachersSize;
    //На всеки ред ще имаме масив, където учителите да поставят оценки
    double** marks = new double* [teachersSize];//редове
    //double marks = new double[teachersSize][];

    for (int i = 0; i < teachersSize; i++)
    {
        size_t HowManyGrades;
        cin >> HowManyGrades;

        // правим местенце за оценките
        marks[i] = new double[HowManyGrades];//колони

        for (int j = 0; j < HowManyGrades; j++)
        {
            cin >> marks[i][j];
        }

    }
    for (int i = 0; i < teachersSize; ++i) {
        delete[] marks[i];
    }

    return 0;
}
task03 //first way

int *newArray(int arr1[], int size) {
	int* newArr = new int[size];
	for (int i = 0; i < size; i++) {
		newArr[i]=arr1[i];
		
	}
	return newArr;
	
}
int main() {
	int arr[5] = { 1,2,3,4,5 };

	int* newCopy = newArray(arr, 5);

	delete newCopy;

	return 0;
}
task03  //second way
#include <iostream>
using namespace std;
int* arrCopy(const int source[]) {
    int size = size(source);
    int *destination = new int[size];

    for (int i = 0; i < size; ++i) {
        destination[i] = source[i];
    }

    return destination;
}
int main()
{
    
    return 0;
}



