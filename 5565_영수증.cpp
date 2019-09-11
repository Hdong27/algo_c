#include <iostream>	// input, output
#include <string>	// string
#include <algorithm>	// 정렬, 이분탐색 등
using namespace std;	// cin, cout 등

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
