#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);					
void Print(int arr[], const int n);
int* push_back(int arr[],  int& n, int val);
int* pop_back(int arr[],  int& n, int val);
int* push_front(int arr[],  int& n, int val);
int* pop_front(int arr[],  int& n, int val);
int* insert(int arr[], int& n, int val, int ind);
int* erase(int arr[], int& n, int val, int ind);
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Input number of elements: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	int index;

	cout << "Input value: "; cin >> value;
	cout << "Input index: "; cin >> index;

	arr = insert(arr, n, value,index);
	Print(arr, n);
	arr = erase(arr, n, value,index);
	Print(arr, n);
	delete[] arr;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int* push_back(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return arr;
}
int* pop_back(int arr[],  int& n, int value)
{
	int* buffer = new int[n - 1];
	for (int i = 0; i < n-1; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	n--;
	arr = buffer;
	return arr;
}
int* push_front(int arr[],  int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i+1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
int* pop_front(int arr[],  int& n, int value)
{
	int* buffer = new int[n - 1];
	for (int i = 0; i < n-1; i++)
	{
		buffer[i] = arr[i+1];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}
int* insert(int arr[], int& n, int value, int index)
{
	int* buffer = new int[n + 1];
	int temp=index;
	for (int i = 0; i < n; i++)
	{
		i >= index ? buffer[i + 1] = arr[i] : buffer[i] = arr[i];	
	}
	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
	return arr;
}
int* erase(int arr[], int& n, int value, int index)
{
	int* buffer = new int[n - 1];
	int temp=index;
	for (int i = 0; i < n; i++)
	{
		i >= index ? buffer[i] = arr[i+1] : buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}