#include "stdafx.h"
#include "windows.h"
#include "iostream"
#include "time.h"

using namespace std;

int main()
{
	const int n = 5;
	int A[n];
	float C[n];
	for (int i = 0; i < n; i++)
	{
		cout << " Введите число: " << endl;
		cin >> A[i];
		cout << " A[" << i + 1 << "] = " << A[i] << endl;
	}
	cout << endl;
	float sum = 0;
	for (int k = 0, i = 0; k < n, i < n; k++, i++)
	{
		sum += A[i];
		C[k] = sum / (k + 1);
		cout << " C[" << k + 1 << "] = " << C[k] << endl;
	}
	return 0;
	system("pause");
}
