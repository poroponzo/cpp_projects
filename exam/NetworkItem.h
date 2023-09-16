#ifndef NETWORKITEM_H
#define NETWORKITEM_H
#include "IP.h"
#include <string>

class NetworkItem{
protected:
std::string ItemName; //identifier
IP m_ip; //IP address

public:
//constructor default
NetworkItem();

//constructor using id and ip
NetworkItem(std::string, IP);

// Dichiarazione del costruttore di copie
NetworkItem(const NetworkItem& other); 

// print and size methods 
virtual void Print()const; // virtual but not pure, must be implemented in .cpp
virtual int Size()const =0; //pure virtual, no implementation in .cpp
virtual NetworkItem* clone() const =0; //pure virtual, no implementation in .cpp

// mi serve un metodo set-ip
void setip(IP);

//metodo per ottenere IP
IP getip();


// Metodo per ottenere il valore di ItemName
const std::string& GetName() const {
    return ItemName;
}

// default destructor
~NetworkItem();

};
#endif

