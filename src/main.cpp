#include <iostream>
#include "helloworld.h"

using namespace std;

int main()
{
	cout << __func__ << ": " << __LINE__ << ": ENTER." << endl;
	say_hello();
	cout << __func__ << ": " << __LINE__ << ": EXIT." << endl;

	return 0;
}

