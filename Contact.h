#include <string>
#ifndef _CONTACT_H
#define _CONTACT_H
 
using namespace std;
 
class Contact{
public:
    void setName(string first, string last);  
    void setPhone_number(string number);
    void setAddress(string _city, string _province, string _country);
    string getName() const;
    string getPhone_number() const;
    string getAddress() const;
    void print() const;
    Contact(string first = "", string last = "", string number = "", string _city = "", string _province = "", string _country = "");
 
private:
    string first_name;
    string last_name;
    string name;
    string phone_number;
    string city;
    string province;
    string country;
    string address;
};
 
#endif