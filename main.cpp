#include "admin.h"
#include "report.h"
#include <iostream>
using namespace std;

int main()
{
  
    //Report class
  Report r1 = Report(001,01,"Lands");
	r1.displayReport();
	
	Report r2 = Report(002,02,"Houses");
	r2.displayReport();

  
  return 0;
}
