#include <iostream>	// input, output
#include <string>	// string
#include <algorithm>	// ����, �̺�Ž�� ��
using namespace std;	// cin, cout ��

int main() {
	int price;
	cin >> price;

	for (int i = 0; i < 9; i++)
	{
		int temp;
		cin >> temp;
		price -= temp;
	}
	cout << price;
	return 0;
}
