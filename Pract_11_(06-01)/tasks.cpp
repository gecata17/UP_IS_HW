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
