#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;


// array showcase
template <typename T> void showarr(T arr[], int length) {
	cout << "������: \n[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
// ������ 1
int nod(int num1, int num2) {
	cout << "���������� ����� �������� ����� " << num1 << " � " << num2 << " = ";
	if (num1 > num2)
		swap(num1, num2);
	for (int i = num1; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) 
			return i;	
	}
}
// ������ 2
int reverse(int n) {
	return 1;
}
// ������ 3
int sortarr(int arr[], int length, int key, int begin = 0) {
		for (int i = begin; i < length; i++) 
			if (arr[i] == key) {
				cout << "\n�������� ������: \n[";
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
				cout << "������ ������� ����� " << key << " � ������� = ";
				return i;
			}	
		return -1;
}
// ������ 4
void diaparr(int arr[], int length, int x, int y) {
	cout << "������: \n[";
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
		// ������ 1
		cout << "������� ������ �����: ";
		cin >> n;
		cout << "������� ������ �����: ";
		cin >> m;
		cout << nod(n, m);

		// ������ 2

		cout << "\n\n� �� ���� ��� ��� ������\n\n";

		// ������ 3
		cout << "\n\n";
		int a;
		int z3[20];
		for (int i = 0; i < 20; i++)
			z3[i] = rand() % 21;
		showarr(z3, 20);
		cout << "������� ������� �������: ";
		cin >> a;
		cout << sortarr(z3, 20, a);
		cout << endl << endl;

		// ������ 4
		int x, y;
		cout << "������� ������ ���������: ";
		cin >> x;
		cout << "������� ����� ���������: ";
		cin >> y;
		int z4[10];
		diaparr(z4, 20, x, y);


		return 0;
	}