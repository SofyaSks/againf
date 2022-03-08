#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;


// array showcase
template <typename T> void showarr(T arr[], int length) {
	cout << "Массив: \n[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
// Задача 1
int nod(int num1, int num2) {
	cout << "Наибольший общий делитель чисел " << num1 << " и " << num2 << " = ";
	if (num1 > num2)
		swap(num1, num2);
	for (int i = num1; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) 
			return i;	
	}
}
// Задача 2
int reverse(int n) {
	return 1;
}
// Задача 3
int sortarr(int arr[], int length, int key, int begin = 0) {
		for (int i = begin; i < length; i++) 
			if (arr[i] == key) {
				cout << "\nИтоговый массив: \n[";
				for (int i = begin; i < length; i++) {
					if (arr[i] == key) {
						for (int i = length - 1; i > begin; i--)
							for (int j = 0; j < i; j++) {
								if (arr[j] > arr[j + 1])
									swap(arr[j], arr[j + 1]);
							}
					}
						cout << arr[i] << ", ";
					
				}
				cout << "\b\b]\n";
				cout << "Первая позиция числа " << key << " в массиве = ";
				return i;
			}	
		return -1;
}
// Задача 4
void diaparr(int arr[], int length, int x, int y) {
	cout << "Массив: \n[";
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % (y - x + 1) + x;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}

	int main(){
		setlocale(LC_ALL, "ru");
		int n, m;
		srand(time(NULL));
		// Задача 1
		cout << "Введите первое число: ";
		cin >> n;
		cout << "Введите второе число: ";
		cin >> m;
		cout << nod(n, m);

		// Задача 2

		cout << "\n\nЯ не знаю как это решить\n\n";

		// Задача 3
		cout << "\n\n";
		int a;
		int z3[20];
		for (int i = 0; i < 20; i++)
			z3[i] = rand() % 21;
		showarr(z3, 20);
		cout << "Введите искомый элемент: ";
		cin >> a;
		cout << sortarr(z3, 20, a);
		cout << endl << endl;

		// Задача 4
		int x, y;
		cout << "Введите начало диапазона: ";
		cin >> x;
		cout << "Введите конец диапазона: ";
		cin >> y;
		int z4[10];
		diaparr(z4, 20, x, y);


		return 0;
	}