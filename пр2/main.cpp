#include <iostream>
#include <cmath>
#include "triangle.h"
#include "circle.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cout << "������� ������� ������������ :" << endl;
	cin >> a >> b >> c;
	Triangle ABC(a, b, c);

	float r1, x1, y1;
	cout << "������� ������ � ���������� x � y ���������� 1" << endl;
	cin >> r1 >> x1 >> y1;
	circle circle1(r1, x1, y1);
	cout << "������� ���������� 1 = " << circle1.square() << endl;
	cout << "����� �� ������� ���������� 1 ������ ������������ a,b,c : " << circle1.triangle_around(a, b, c) << endl;
	cout << "����� �� ������� ���������� 1 � ����������� a,b,c : " << circle1.triangle_in(a, b, c) << endl;

	float r2, x2, y2;
	cout << "������� ������ � ���������� x � y ���������� 2 = " << endl;
	cin >> r2 >> x2 >> y2;
	circle circle2(r2, x2, y2);
	cout << "������� ���������� 1 = " << circle2.square() << endl;
	cout << "����� �� ������� ���������� 1 ������ ������������ a,b,c : " << circle2.triangle_around(a, b, c) << endl;
	cout << "����� �� ������� ���������� 1 � ����������� a,b,c : " << circle2.triangle_in(a, b, c) << endl;

	float r3, x3, y3;
	cout << "������� ������ � ���������� x � y ���������� 3" << endl;
	cin >> r3 >> x3 >> y3;
	circle circle3(r3, x3, y3);
	cout << "������� ���������� 1 = " << circle3.square() << endl;
	cout << "����� �� ������� ���������� 1 ������ ������������ a,b,c : " << circle3.triangle_around(a, b, c) << endl;
	cout << "����� �� ������� ���������� 1 � ����������� a,b,c : " << circle3.triangle_in(a, b, c) << endl;


	cout << "������������ �� ���������� 1 � ����������� 2 : " << circle1.check_circle(r2, x2, y2) << endl;
	cout << "������������ �� ���������� 1 � ����������� 3 : " << circle1.check_circle(r3, x3, y3) << endl;
	cout << "������������ �� ���������� 3 � ����������� 2 : " << circle3.check_circle(r2, x2, y2) << endl;
}