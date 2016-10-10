#include "stdafx.h"


using namespace std; 
 
Zoo::Zoo(void) 
{ 
 	cout<<"	  Entring of a Constructor for Zoo"<<endl; 
} 
 
void Zoo::setsize(char *size) 
{ 
	this->size = size; 
} 
 
void Zoo::getsize() 
{ 
 	cout << "Size of Zoo-Animal: " << this->size << endl; 
} 
 
Zoo::~Zoo(void) 
{ 
 	cout << "	Entring of a Destructor for Zoo " << endl; 
} 
