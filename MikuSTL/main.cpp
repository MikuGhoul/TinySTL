#include <iostream>
#include <cassert>



#include "Test/testAlloc.hpp"
#include "Test/testList.hpp"
//#include "Test/testString.hpp"
//#include "Test/testVector.hpp"
//#include "Test/testHeader.hpp"

#include "Test/TestListPerformance.hpp"

void testAlloc() {
	allocTestCase1();
	allocTestCase2();
	allocTestCase3();
	allocTestCase4();
}

void testList() {
	listTestCase1();
	listTestCase2();
	listTestCase3();
	listTestCase4();
	listTestCase5();
	listTestCase6();
	listTestCase7();
	listTestCase8();
	listTestCase9();
	listTestCase10();
	listTestCase11();
	listTestCase12();
	listTestCase13();
	listTestCase14();
}

void basic_test() {
	// testString();
	testAlloc();
	testList();
}

void performance_test() {
	list_test();
}

int main(int argc, char* argv[]) {

	// basic_test();
	performance_test();
	return 0;
}