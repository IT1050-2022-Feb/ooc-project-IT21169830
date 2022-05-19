#include "report.h"
class Admin
{
	private:
		int Admin_ID;
		Report *property;
		
	public:
		Admin();
		Admin(int AdminID , Report *p);
		void displayreport();
    void RemoveProperty();
		void ManageProperty();
		void AddProerty();
    void Display();
		void DisplayAdmin();
    ~Admin();
};