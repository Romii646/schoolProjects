// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>  
#include <iomanip>
#include <fstream>
#include "stackType.h"
  
using namespace std; 


int main(){
	
	stackType<string> stack(100);
	
	stack.initializeStack();
	
	stack.push('h');
	stack.push('h');
	stack.push('s');
	stack.push('s');
	stack.push('a');
	
	while(!stack.isEmptyStack()){
		cout << stack.top() << endl;
		stack.pop();
	}
	

   return 0;
}
