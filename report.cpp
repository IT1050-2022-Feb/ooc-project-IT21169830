#include <iostream>
#include "report.h"

using namespace std;

Report::Report(){};
Report::Report(int rpid ,int PropertyID , char PropertyType){
	ReportID = rpid;
	propertyID = PropertyID;
	propertyType = PropertyType;
}

void Report::displayReport()
{
	cout << "Report ID: " << ReportID << endl;
	cout << "Property ID: " << propertyID << endl;
	cout << "Property Type: " << propertyType << endl;
}
Report :: ~Report(){
  cout << "Destructor called" << endl;
}
