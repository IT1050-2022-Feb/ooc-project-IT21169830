#include <iostream>
#include "admin.h"

using namespace std;

Admin::Admin(){}
Admin::Admin(int AdminID , Report *p){
	Admin_ID=AdminID;
	property = p;
}
void Admin::displayreport(){
	property->displayReport();
}
void Admin::RemoveProperty(){}
void Admin::ManageProperty(){}
void Admin::AddProerty(){}
void Admin::Display(){}
void Admin::DisplayAdmin(){}
Admin::~Admin(){
  cout << "Destructor called" << endl;
}