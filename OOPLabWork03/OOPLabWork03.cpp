#include "stdafx.h"

// Animal : class Birds, class Mammal, class Fish.




using namespace std; 
 
int _tmain(int argc, _TCHAR* argv[]) 
{    
 	setlocale(LC_ALL,"rus"); 
 
 	Animal tiger; 
 	tiger.setname("Tiger"); 
 	tiger.getname(); 
 	cout << endl; 
 
 	Animal lion; 
 	lion.setname("Lion"); 
 	lion.getname(); 
 	cout << endl; 
 
 	Bird own; 
 	own.setname("Own"); 
 	own.getname(); 
 	own.sethabitat("The whole world, except Antarctic"); 
 	own.gethabitat();  
 	cout << endl; 
 
 	Fish shark; 
 	shark.setname("Shark"); 
 	shark.getname(); 
	
 	 	cout << endl; 

	Mammal crocodile;
	crocodile.setname("Crocodile");
	crocodile.getname();
	crocodile.setcolor("Green");
	crocodile.getcolor();
	cout << endl;

	Zoo monkey;
	monkey.setname("Monkey");
	monkey.getname();
	monkey.setcolor("brown");
	monkey.getcolor();
	monkey.setsize("little");
	monkey.getsize();
 	return 0; 

	Dogs labrador;
	
} 

