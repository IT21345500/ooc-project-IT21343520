#include"Admin.h"

class FinancialRecord
{
private:
    char Record_ID[10];

    Admin* admin;

public:
    FinancialRecord();
    FinancialRecord(const char ID[], Admin* admins);
    void editRecords();
    void addRecords();
    ~FinancialRecord();
};

