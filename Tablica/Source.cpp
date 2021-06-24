#include <iostream>
#include <conio.h>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMBIK
//#define ROMB_WITH_PLUS
//#define PLUS_OR_MINUS
#define ASCII
#define UPPER_LEFT_ANGLE  (char) 218
#define DOWN_RIGHT_ANGLE  (char) 217
#define UPPER_RIGHT_ANGLE (char) 191
#define DOWN_LEFT_AGNLE   (char) 192
#define VERT_LINE         (char) 179
#define HORIZ_LINE        (char) 196 << (char) 196
#define WHITE_BLOCKS      (char) 219 << (char) 219
#define BLACK_BLOCKS      (char) 32  << (char) 32
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
#ifdef SQUARE
	for (int = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE
#ifdef TRIANGLE_1

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1
#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2
#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout <<"  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // TRIANGLE_3
#ifdef TRIANGLE_4

	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // TRIANGLE_4
#ifdef ROMBIK
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++) cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++)cout << "  ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = i; j < n - 1; j++) cout << "  ";
		cout << "/";
		cout << endl;
	}
#endif // ROMBIK
#ifdef ROMB_WITH_PLUS
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++) cout << " ";
		cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = i; j < n * 2 - i - 2; j++) cout << " ";
		cout << "/";
		cout << endl;
	}
#endif // ROMB_WITH_PLUS
#ifdef PLUS_OR_MINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i+j) % 2 == 0) cout << "+ ";else cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ ": cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}

#endif // PLUS_OR_MINUS
	setlocale(LC_ALL, "C"); // Возвращает кодировку по умолчанию
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << DOWN_LEFT_AGNLE;
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZ_LINE;
			else if (j == 0 || j == n) cout << VERT_LINE;
			else
			{
				if ((i + j) % 2 == 0)cout << WHITE_BLOCKS;
				else cout << "  ";
			}
		}
		cout << endl;
	}
}