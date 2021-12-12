#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "Control.h"
#include "Add.h"
#include "Contact.h"
 
using namespace std;
Add add;
 
void Control::commandLoop(){
    char button;
    Add count;
    do{
        if(count.totalCount() == 0){
            cout << "_________________________" << endl;
            cout << "|     (+)Add Contact    |" << endl;
            cout << "|=======================|" << endl;
            cout << "    Press ESC to exit    " << endl;
 
            button = getch();
            system("cls");
            switch (button){
                case '+':
                    addContact(); break;
                case '=':
                    addContact(); break;
                default :
                    cout << "wrong button" << endl; break;
            }
        }
        else{
            cout << "_________________________" << endl;
            cout << "|          Menu:        |" << endl;
            cout << "|   (0)Current Contact  |" << endl;
            cout << "|    (E)Edit Contact    |" << endl;
            cout << "|     (+)Add Contact    |" << endl;
            cout << "|   (-)Delete Contact   |" << endl;
            cout << "|=======================|" << endl;
            cout << "|(1) Previous | Next (9)|" << endl;
            cout << "|=======================|" << endl;
            cout << "    Press ESC to exit    " << endl;
 
            button = getch();
            system("cls");
            switch (button){
                case '0':
                    viewCurrent_contact(); break;
                case '+':
                    addContact(); break;
                case '=':
                    addContact(); break;
                case 'E':
                    editContact(); break;
                case 'e':
                    editContact(); break;
                case '-':
                    deleteContact(); break;
                case '1':
                    viewPrevious_contact(); break;
                case '9':
                    viewNext_contact(); break;
                case 27 :
                    exit(1);
                default :
                    cout << "wrong button" << endl; break;
            }
        }
    }
    while ( button != 27 );
 
    system("PAUSE");
    getch();
}
 
void Control::addContact(){
    string first, last, number, _city, _province, _country;
    cout << "NEW CONTACT" << endl;
    cout << "First Name   : "; cin >> first;
    cout << "Last Name    : "; cin >> last;
    cout << "Phone Number : "; cin >> number;
    cout << "City         : "; cin >> _city;
    cout << "Province     : "; cin >> _province;
    cout << "Country      : "; cin >> _country;
 
    Contact new_contact(first, last, number, _city, _province, _country);
    add.insertNew(new_contact);
}
 
void Control::viewCurrent_contact(){
    Contact contact = add.getCurrent_contact();
    contact.print();
}
 
void Control::viewNext_contact(){
    add.nextContact();
    Contact n = add.getCurrent_contact();
    n.print();
}
 
void Control::viewPrevious_contact(){
    add.previousContact();
    Contact n = add.getCurrent_contact();
    n.print();
}
 
void Control::editContact(){
    string first, last, number, _city, _province, _country;
    Contact contact = add.getCurrent_contact();
    contact.print();
    cout << "_________________________" << endl;
    cout << "EDIT CONTACT" << endl;
    cout << "First Name   : "; cin >> first;
    cout << "Last Name    : "; cin >> last;
    cout << "Phone Number : "; cin >> number;
    cout << "City         : "; cin >> _city;
    cout << "Province     : "; cin >> _province;
    cout << "Country      : "; cin >> _country;
 
    Contact edit_contact(first, last, number, _city, _province, _country);
    add.editContact(edit_contact);
}
 
void Control::deleteContact(){
    char option;
    string first, last, number, _city, _province, _country;
    Contact contact = add.getCurrent_contact();
    contact.print();
    cout << "_________________________" << endl;
    cout << "     DELETE CONTACT      " << endl;
    cout << "  Are you sure want to   " << endl;
    cout << "  delete this contact?   " << endl;
    cout << "    (Y)YES  |  (N)NO     " ;
 
    option = getch();
    system("cls");
    switch(option){
        case 'Y':
            add.deleteContact(); viewPrevious_contact(); break;
        case 'y':
            add.deleteContact(); viewPrevious_contact(); break;
        case 'N':
            viewCurrent_contact(); break;
        case 'n':
            viewCurrent_contact(); break;
    }
}