#include <iostream>

#include "../include/ArrowInput.hpp"
using namespace std;
class Employee {
 private:
  int id;
  char* name;
  int salary;

 public:
  Employee() {
    id = 0;
    name = nullptr;
    salary = 0;
  }
  void setEmployee(int Eid, char arr[], int s) {
    id = Eid;
    name = stringCopy2(arr);
    salary = s;
  };

  int getID() { return id; }
  const char* getName() const { return name; }
  int getSalary() { return salary; }
  void DisplayEmployee() {
    cout << " Employee Info" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << (name != nullptr ? name : "No Name Entered") << endl;
    cout << "Salary: " << salary << endl;
  }

  ~Employee() { delete[] name; }
};