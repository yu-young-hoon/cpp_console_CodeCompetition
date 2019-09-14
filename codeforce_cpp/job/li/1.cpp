#include <iostream>
using namespace std;

int getarea(int width, int height) {
	return width * height;
}
int main() {
	int width, height;
	cin >> width >> height;

	cout << getarea(width, height);
	return 0;
}