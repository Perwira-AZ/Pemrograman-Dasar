#ifndef _ADD_H
#define _ADD_H
#include "Contact.h"
 
class Add {
public:    
    int totalCount();
    void insertNew(Contact n);
    Contact getCurrent_contact();
    void nextContact();
    void previousContact();
    void editContact(Contact n);
    void deleteContact();
};
 
#endif