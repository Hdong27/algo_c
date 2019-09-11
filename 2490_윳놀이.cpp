#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++)
	{
		char result;
		int count = 0;
		for (int j = 0; j < 4; j++)
		{
			int n;
			cin >> n;
			if (n == 0) {
				count++;
			}
		}

		switch (count) {
		case 0:
			result = 'E';
			break;
		case 1:
			result = 'A';
			break;
		case 2:
			result = 'B';
			break;
		case 3:
			result = 'C';
			break;
		case 4:
			result = 'D';
			break;
		}
		cout << result << "\n";
	}
	return 0;
}