#include <iostream>
#include <string>
#include "Add.h"
#include "Contact.h"
 
using namespace std;
 
int count = 0;
int maximum = 100;
int current = -1;
Contact contact_list[20];
 
int Add::totalCount(){
    return (count);
}
 
void Add::insertNew(Contact n){
    if (count == maximum){
        return;
    }
    contact_list[count] = n;
    current = count;
    count++;
}
 
Contact Add::getCurrent_contact(){
    if (current == -1){
    }
    else if (current >= 0){
        cout << "            " << current+1 << endl;
        cout << "=========================" << endl;
        return contact_list[current];
    }
}
 
void Add::nextContact(){
    if (current == -1){
        return;
    }
    if (current >= (count-1)){
        return;
    }
    if (current == count+1){
        current == count;
        //cout << "Index reach = 20" << endl;
        return;
    }
    current++;
}
 
void Add::previousContact(){
    if (current == -1){
        current = 0;
        return;
    }
    if (current == 0){
        return;
    }
    current--;
}
 
void Add::editContact(Contact n){
    contact_list[current] = n;
}
 
void Add::deleteContact(){
    for (int i = current; i <= count; i++){
        contact_list[i] = contact_list[i+1];
    }
    count--;
}