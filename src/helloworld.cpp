#include "helloworld.h"
#include <iostream>

using namespace std;

void say_hello()
{
	cout << __func__ << ": " << __LINE__ << ": ENTER." << endl;
	cout << "Hello, world!" << endl;
	cout << __func__ << ": " << __LINE__ << ": EXIT." << endl;
}

