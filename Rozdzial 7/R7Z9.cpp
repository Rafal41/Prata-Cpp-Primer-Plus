#include <iostream>

using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n);
// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);
// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student * ps);
// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);

    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "enter the name of the student (enter finishes data input): ";
        cin.getline(pa[i].fullname,SLEN);       // \n is straightaway converted into \0
        if (pa[i].fullname[0] == '\0')
            break;  
        cout << "enter the hobby: ";
        cin >> pa[i].hobby;
        cout << "enter the op level (1-5): ";
        cin >> pa[i].ooplevel;
        while (pa[i].ooplevel < 1 || pa[i].ooplevel > 5)
        {   
            cout << "enter the correct op level (1-5): ";
            cin >> pa[i].ooplevel;
        }
        cin.get();
    }

    return i; 
}

void display1(student st)
{
    int i = 0;
    cout << "student    hobby   op level" << endl;
    cout << st.fullname << " " << st.hobby << " " << st.ooplevel << " " << endl;

}

void display2(const student * ps)
{
    int i = 0;
    cout << "student    hobby   op level" << endl;
    cout << ps->fullname << " " << ps->hobby << " " << ps->ooplevel << " " << endl;
}

void display3(const student pa[], int n)
{
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "student    hobby   op level" << endl;
        cout << pa[i].fullname << " " << pa[i].hobby << " " << pa[i].ooplevel << " " << endl;
    }
}