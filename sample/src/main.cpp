#include <iostream>
#include "utils/power.hpp"
#include "SampleConfig.h"

using namespace std;


int main() {

	cout << "\n ---> main for cmake\n" << endl;

	//cout << "version major\t" << SAMPLE_VERSION_MAJOR << endl;
	//cout << "version minor\t" << SAMPLE_VERSION_MINOR << endl;
	cout << "version major\t" << MY_VERSION_MAJOR << endl;
	cout << "version minor\t" << MY_VERSION_MINOR << endl;

	cout << endl;
	cout << "2 power 3 is\t" << power(2, 3) << endl;
	return 0;
}
