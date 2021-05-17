#include <clocale>
#include <iostream>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah 
	I.D.E : Visual Studio 2019
*/

using namespace std;

int main() {
	char* s;

	setlocale(LC_ALL, "en_UA.utf8");

	s = setlocale(LC_ALL, NULL);

	cout << s << "\n";

	_getch();
	return 0;
}
