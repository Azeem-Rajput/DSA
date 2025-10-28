#include<iostream>
using namespace std;

class person
{
    protected:
    int name,age;
};

class employee:public person
{
    protected:
    int salary;
};
class manager:public employee
{
    protected:
    string dep;
    int no_emp;
};
