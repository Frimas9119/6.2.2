#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);

}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;

}

double Math(int i, int n, int* a, int* b) {

	n = 5;
	for (i = 0;i < 6;i++) {
		b[i] = 0;
	}
	for (i = 0;i < 6;i++) {
		b[i] = a[i];
	}
	for (i = 0;i < 6;i++) {
		b[i] = a[n];
		n--;
	}
	for (int i = 1; i <= 5; i++) {
		cout << b[i] << " ";
	}
	return 0;

}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 6;
	int a[n];
	int b[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High, 0);
	Print(a, 5,0);
	Math(0, 0, a, b);
	return 0;
}