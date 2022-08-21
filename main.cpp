#include <bits/stdc++.h>
#include "myStack.h"
using namespace std;

// global id
int globalId = 100;

// Person class

class person
{

    string name;
    int id;
    float salary;

public:
    person()
    {
        name = "";
        id = -1;
        salary = -1.0;
    }

    // setter function
    void setName(string name)
    {
        this->name = name;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }

    person(string name, float salary)
    {

        setName(name);
        setSalary(salary);
        id = globalId;

        globalId++;
    }

    // getter function
    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    float getSalary()
    {
        return salary;
    }

    // print function
    void print()
    {
        cout << name << " | " << id << " | " << salary << endl;
    }
};

int main()
{
    // Stack<pair<string, char>> st;

    // st.push(make_pair("Naime", 'N'));
    // st.push(make_pair("Sajid", 'S'));
    // st.push(make_pair("Molla", 'M'));

    // while (!st.isEmpty())
    // {
    //     pair<string, char> name;
    //     name = st.pop();
    //     cout << "Name: " << name.first << " | First latter: " << name.second << endl;
    //     // cout << st.pop() << endl;
    // }

    // cout << "stack size = " << st.size() << endl;

    // if (!st.isEmpty())
    // {
    //     pair<string, char> name;
    //     name = st.Top();
    //     cout << "Name: " << name.first << " | First latter: " << name.second << endl;

    //     // cout << "Top value is " << st.Top() << endl;
    // }

    // store object on the stack
    Stack<person> st;

    person a("Naime Molla", 2.2);
    person b("Akib Zaman", 10.10);
    person c("sakib Ahmed", 5.5);

    st.push(a);
    st.push(b);
    st.push(c);

    // while (!st.isEmpty())
    // {
    //     person printObj;
    //     printObj = st.pop();
    //     printObj.print();
    // }

    // see the top
    person printObj;
    printObj = st.Top();
    printObj.print();

    cout << "Size: " << st.size() << endl;

    return 0;
}