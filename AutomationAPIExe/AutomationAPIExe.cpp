// AutomationAPIExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../APILibrary/APILibrary.h"
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;

int main(int argc, char** argv)
{
    std::cout << "Hello World from the automation batch!\n";
    generator gen;
    gen.add_messages_path(".");
    gen.add_messages_domain("messages");
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());
    cout << translate("Translation in automation libraries") << endl;
    locale::global(gen(""));
    cout.imbue(locale());
    cout << translate("Translation in automation libraries") << endl;

    if (argc < 3) {
        cout << "Form is ./automation.exe <operation_type> <adversary>" << endl;
        return 1;
    }

    APIHandler api = APIHandler();
    // api.call_object(argv[1], argv[2]);
    api.call_object("offensive", "russia");
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
