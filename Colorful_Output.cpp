#include <iostream>
#include <Windows.h>

using namespace std;

int main() {	
	for (int color = 0; color < 16; color++)
	{	
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		cout << "Console with colorful strings.\n";
	}

	return 0;
}
