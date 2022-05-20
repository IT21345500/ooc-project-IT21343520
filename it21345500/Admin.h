#include "FinancialRecord.h"
#include "Staff.h"
#include "Feedback.h"

class Admin
{
private:
	char Admin_ID[10];
	char Admin_Name[30];
	char Admin_Email[30];
	char Admin_Position[30];
	char Admin_Address[30];
	int Admin_Phone;

	FinancialRecord* financialRecords;
	Staff* theStaff[SIZE];
	Feedback* feedback[SIZE];

public:
	Admin();
	Admin(const char ID[], const char Name[], const char Email[], const char Position[], const char Address[], int Phone, FinancialRecord* records);
	void setLogin();
	void adminsStaff(Staff* staff);
	void adminsFeedback(Feedback* feedbacks);
	~Admin();
};

