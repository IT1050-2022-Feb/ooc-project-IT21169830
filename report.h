class Report
{
	private:
		int ReportID;
		int propertyID;
		char propertyType;
		
	public:
		Report();
		Report(int rpid ,int PropertyID , char PropertyType);
		void displayReport();
                ~Report();
};
