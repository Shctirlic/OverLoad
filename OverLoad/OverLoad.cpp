#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <algorithm> 
using namespace std;

//���������� �������

inline int sum(int num1, int num2) {
	return num1 + num2;
}// ��� ��� ������� ���������� �������, ��� ���������� �������
inline int sum_AB(int A, int B) {
	int res = 0;
	for (int i = A; i <= B; i++)
		res = +i;
	return res;
}
//������������� �������

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
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3); // ��������� ��������� ��������
}


template <typename T>
T abs(T num) {
	return num < 0 ? -num : num;
}



int main() {
	setlocale(LC_ALL, "Russian");

	int n, m;

	// ������������  �������
	/*cout << "������� ��� �����";
	cin >> n >> m;

	cout << sum_AB(n, m) << "\n";*/


	// ��������� �������
	cout << abs(-5) << "\n"; //5
	cout << abs(7.4) << "\n"; // 7.4



	//������������� �������
	/*cout << max_val(4, 6) << "\n";  //6
	cout << max_val(1.2, 1.1) << "\n"; // 1.2
	cout << max_val(5.2f, 6.1f) << "\n";*/






	return 0;
}

