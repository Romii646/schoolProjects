// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>
#include <string>
#include "bookType.h"



int main() 
{// start of mian program
string authors[4] = {"larry", "harry", "larryO", "harryO"};
// class declaration
bookType book("gary", "pubpub", 1112, 15.85, 10, authors);
bookType buuk;

buuk.setAuthor(authors);
buuk.setPrice(10.99);
buuk.setPublisher("marry");
buuk.setTitle("hatech"); 
buuk.setCopies(5);
buuk.setISBN(1111);

book.print();
cout << endl;
buuk.print();
return 0;
}