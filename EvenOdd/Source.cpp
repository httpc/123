#include <iostream>
using namespace std;
void Print(int arr[], const int n);
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	Print(arr, n);

	//¬ычесление количества четных и нечетных переменных
	int even_count = 0;
	int odd_count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0) even_count++;
		else odd_count++;
	}
	cout << " оличество четных елементов: " << even_count << endl;
	cout << " оличество нечетных елементов: " << odd_count << endl;
	int* even = new int[even_count];
	int* odd = new int[odd_count];
	for (int i = 0, j = 0, k = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even[j++] = arr[i];
		else odd[k++] = arr[i];
	}
	Print(even, even_count);
	Print(odd, odd_count);
	delete[] odd;
	delete[] even;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}