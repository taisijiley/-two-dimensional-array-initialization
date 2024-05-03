#include <iostream>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

/*Инилициализация двумерного массива*/

int main()
{
	setlocale(LC_ALL, "rus");

	const int ROW = 3; 
	const int COL = 4;

	int arr[ROW][COL]
	{	
		{2,3,4,5}, 
		{34,21,34,21}, 
		{13,32,13,21}
	};

	cout << arr[1][1] << endl;

	arr[1][1] = 55;

	cout << arr[1][1] << endl;

	int a;
	a = 0;
}