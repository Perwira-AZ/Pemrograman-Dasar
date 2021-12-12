#ifndef _CONTROL_H
#define _CONTROL_H
 
class Control {
public:
    void commandLoop();
    void addContact();
    void viewCurrent_contact();
    void viewNext_contact();
    void viewPrevious_contact();
    void findContact();
    void editContact();
    void deleteContact();
};
 
#endif