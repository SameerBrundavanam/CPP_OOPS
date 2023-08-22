#include<iostream>
using namespace std;
//creating the class
class Office{
    //specifying the access specifier
    private:
        int salary;
    public:
        string name;
        int epid;
        //creating the default constructor
        Office()
        {
            name="Sameer";
            epid=1234;
            salary=1000000;
        }
        //creating the parametrised constructor
        Office(string name,int epid)
        {
            this->name=name;
            this->epid=epid;
        }
        //declaring the member function
        void display()
        {
            cout<<name << endl;
            cout<<epid << endl;
            cout<<salary << endl;
        }
        int getsalary()
        {
            return this->salary;
        }
        void setsalary(int salary)
        {
            this->salary=salary;
        }
};
int main()
{
    Office e1;
    e1.display();
    Office e2("Ravi",4321);
    e2.setsalary(2000000);
    e2.getsalary();
    e2.display();
}
