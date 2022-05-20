#include "Admin.h"
#include "FinancialRecord.h"
#include "Staff.h"
#include "Feedback.h"

Admin::Admin()
{
	strcpy_s(Admin_ID, "");
	strcpy_s(Admin_Name, "");
	strcpy_s(Admin_Email, "");
	strcpy_s(Admin_Position, "");
	strcpy_s(Admin_Address, "");
	Admin_Phone = 0;
}

Admin::Admin(const char ID[], const char Name[], const char Email[], const char Position[], const char Address[], int Phone, FinancialRecord* records)
{
	strcpy_s(Admin_ID, ID);
	strcpy_s(Admin_Name, Name);
	strcpy_s(Admin_Email, Email);
	strcpy_s(Admin_Position, Position);
	strcpy_s(Admin_Address, Address);
	Admin_Phone = Phone;

	financialRecords = records;
}

void Admin::setLogin()
{
}

void Admin::adminsStaff(Staff* staff)
{
}

void Admin::adminsFeedback(Feedback* feedbacks)
{
}

Admin::~Admin()
{
	cout << "Admin deleted" << endl;
}
