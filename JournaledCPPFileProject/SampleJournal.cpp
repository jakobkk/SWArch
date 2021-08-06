#include <iostream>
#include "..\AutomationBinding\Session.h"
#include "..\AutomationBinding\Part.h"

int main()
{
    std::cout << "Hello World!\n";
    AutomationAPI::Session* mySession = AutomationAPI::Session::GetSession();
    AutomationAPI::Part* Part1 = mySession->GetPart("some\\path\\to\\part.part");
    //Part1->MakeWidgetFeature();
    Part1->Save();
    AutomationAPI::Part* Part2 = mySession->OpenPart("C:\\Users\\polek\\source\\repos\\AutomationAPI_pt2\\SampleVersionUp.prt");
}
