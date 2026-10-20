#include <iostream>
#include <string>
using namespace std;
class BasicInfo 
{
protected:
    string name;
    int empId;
public:
    void setBasicInfo() 
    {
        cout << "Enter Employee Name: ";
        getline(cin >> ws, name); 
        cout << "Enter Employee ID: ";
        cin >> empId;
    }
    void displayBasicInfo() const 
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empId << endl;
    }
};
class DeptInfo
{
protected:
    string deptName;
    string designation;

public:
    void setDeptInfo()
    {
        cout << "Enter Department Name: ";
        getline(cin >> ws, deptName);
        cout << "Enter Designation: ";
        getline(cin >> ws, designation);
    }
    void displayDeptInfo() const 
    {
        cout << "Department: " << deptName << endl;
        cout << "Designation: " << designation << endl;
    }
};
class Employee : public BasicInfo, public DeptInfo
{
public:
    void setEmployeeData()
    {
        cout << "--- Enter Employee Details ---" << endl;
        setBasicInfo();
        setDeptInfo();
    }
    void displayEmployeeData() const {
        cout << "\n--- Employee Profile ---" << endl;
        displayBasicInfo();
        displayDeptInfo();
    }
};
int main()
{
    Employee emp;
    emp.setEmployeeData();
    emp.displayEmployeeData();
    return 0;
}