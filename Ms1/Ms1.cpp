#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "RUSSIAN");
	int a[100];
	int n,min,number;
	cout << "Введите количество элементов массива : ";
	cin >> n;
	cout << "Заполните массив" << endl;
	for (int i = 0; i < n; i++) 
	{
		cout <<"Введите " << i+1 <<" элемент массива: ";
		cin >> a[i];
	}

	min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i]) {
			min = a[i];
			number = i+1;
		}
	}
	cout << "Минимальное значение массива: " << min << endl;
	cout << "Его номер: " << number << endl;

}

 

        

    

