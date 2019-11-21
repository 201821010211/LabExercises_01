// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee employee1("Bob","Jones",2875);
   Employee employee2("Susan","Baker",3150);
   /* Output the first name, last name and salary for each Employee. */
   cout << "Employee 1: " << employee1.getFirstName() << " " <<employee1.getLastName()
     << "; Yearly Salary: " << 12*employee1.getMonthlySalary() << endl;
   cout << "Employee 2: " << employee2.getFirstName() << " " <<employee2.getLastName()
     << "; Yearly Salary: " << 12*employee2.getMonthlySalary() << endl;

   /* Give each Employee a 10% raise. */
   employee1.setMonthlySalary(employee1.getMonthlySalary()*1.1);
   employee2.setMonthlySalary(employee2.getMonthlySalary()*1.1);


   /* Output the first name, last name and salary of each Employee again. */
   cout << "Increasing employee salaries 10% " << endl;
   cout << "Employee 1: " << employee1.getFirstName() << " " <<employee1.getLastName()
     << "; Yearly Salary: " << 12*employee1.getMonthlySalary() << endl;
   cout << "Employee 2: " << employee2.getFirstName() << " " <<employee2.getLastName()
     << "; Yearly Salary: " << 12*employee2.getMonthlySalary() << endl;
} // end main


