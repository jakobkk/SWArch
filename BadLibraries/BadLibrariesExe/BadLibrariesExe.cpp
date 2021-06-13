// BadLibrariesExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "..\Core\LinkedList.h"
#include "..\BusInt\BusInt.h"
#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
#include <iomanip>
#include <sstream>
#include "..\UILibrary\UI.h"


using namespace std;



void RunTests();





int main(int argc, char** argv)
{
	
	if (argc == 0)
	{
		UI* theUI = new UI();

		theUI->Init();

		theUI->StartGUILoop();

		return 0;
	}
	else 
	{
		//we are in test mode
		RunTests();
	}



	return 0;
}




void RunTests()
{
	ArrayBasedLinkedList linkedList;
	assert(linkedList.isEmpty());

	assert(std::string("")== linkedList.toString());

	linkedList.clear();
	assert(linkedList.isEmpty());

	assert(!linkedList.add(1));

	//Assert::IsFalse(linkedList.isEmpty());

	//Assert::AreEqual(std::string("1"), linkedList.toString());

	//linkedList.clear();
	//Assert::IsTrue(linkedList.isEmpty());


}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
