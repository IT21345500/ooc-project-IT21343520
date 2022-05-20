#include "FinancialRecord.h"
#include "Admin.h"

FinancialRecord::FinancialRecord()
{
	strcpy_s(Record_ID, "");
}

FinancialRecord::FinancialRecord(const char ID[], Admin* admins)
{
	strcpy_s(Record_ID, ID);
	admin = admins;
}

void FinancialRecord::editRecords()
{
}

void FinancialRecord::addRecords()
{
}

FinancialRecord::~FinancialRecord()
{
	cout << "TheFinancialRecords deleted" << endl;
}
