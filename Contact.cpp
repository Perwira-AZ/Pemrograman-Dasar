#include <iostream>
#include <string.h>
#include "Contact.h"
 
using namespace std;
 
void Contact::setName(string first, string last){
   first_name = first;
   last_name = last;
   name = first_name + " " + last_name;
}
 
void Contact::setPhone_number(string number){
    phone_number = number;
}
 
void Contact::setAddress(string _city, string _province, string _country){
    city = _city;
    province = _province;
    country = _country;
    address = city + ", " + province + ", " + country;
}
 
string Contact::getName() const{
    return name;
}
 
string Contact::getPhone_number() const{
    return phone_number;
}
 
string Contact::getAddress() const{
    return address;
}
 
void Contact::print() const{
    cout << "Name         : " << name << endl;
    cout << "Phone number : " << phone_number << endl;
    cout << "Address      : " << address << endl;
}
 
Contact::Contact(string first, string last, string number, string _city, string _province, string _country){
    phone_number = number;
    setName(first, last);
    setAddress(_city, _province, _country);
}