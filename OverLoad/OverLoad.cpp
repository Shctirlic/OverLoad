#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <algorithm> 
using namespace std;

//Встроенная функция

inline int sum(int num1, int num2) {
	return num1 + num2;
}// так как функцию невозможно строить, она становится обычной
inline int sum_AB(int A, int B) {
	int res = 0;
	for (int i = A; i <= B; i++)
		res = +i;
	return res;
}
//Перегруженная функция

int max_val(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
	cout << "INT\n";
}
double max_val(double num1, double num2) {
	return num1 > num2 ? num1 : num2;
	cout << "DOUBLE\n";
}
float max_val(float num1, float num2) {
	return num1 > num2 ? num1 : num2;
	cout << "FLOAT\n";
}
int max_val(int num1, int num2, int num3) {
	cout << "THREE INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3); // вложенный тернарный оператор
}


template <typename T>
T abs(T num) {
	return num < 0 ? -num : num;
}



int main() {
	setlocale(LC_ALL, "Russian");

	int n, m;

	// Встраевыемые  функции
	/*cout << "Введите два числа";
	cin >> n >> m;

	cout << sum_AB(n, m) << "\n";*/


	// шаблонные функции
	cout << abs(-5) << "\n"; //5
	cout << abs(7.4) << "\n"; // 7.4



	//Перегруженная функция
	/*cout << max_val(4, 6) << "\n";  //6
	cout << max_val(1.2, 1.1) << "\n"; // 1.2
	cout << max_val(5.2f, 6.1f) << "\n";*/






	return 0;
}

