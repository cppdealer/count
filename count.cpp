#include <iostream>
using namespace std;

void calc(int arg1, char arg2, int arg3) {
	switch(arg2) {
		case '+':
			cout << arg1 + arg3 << endl;
			break;
		case '-':
			cout << arg1 - arg3 << endl;
			break;
		case '*':
			cout << arg1 * arg3 << endl;
			break;
		case '/':
			if (arg2 != 0) {
				cout << arg1 / arg3 << endl;
				break;
			} else {
				cout << "Error operator" << endl;
			}
	}
}

int main(int argc, char* argv[]) {
	if (argc < 4) {
		cout << "Использование: count 2 + 2" << endl;
		return 1;
	}

	int a = stoi(argv[1]);
	char c = argv[2][0];
	int b = stoi(argv[3]);

	calc(a, c, b);
}
