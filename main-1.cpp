// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>
#include <string>
#include "bookType-1.h"



int main() 
{// start of mian program
   string authors[4] = {"larry", "harry", "larryO", "harryO"};
// class declaration
   bookType book("gary", "pubpub", 1112, 15.85, 10, authors);
   bookType buuk;
   bookType meek;
   bookType geek;
   bookType heek;

   buuk.setAuthor(authors);
   buuk.setPrice(10.99);
   buuk.setPublisher("marry");
   buuk.setTitle("hatech"); 
   buuk.setCopies(5);
   buuk.setISBN(1111);

// testing dynamic array
   book.print();
   cout << endl;
   buuk.print();
   cout << endl;

// testing copy constructor   
   bookType mook(buuk);
   mook.print();
   cout << endl;
   
// testing overloaded assignment 
   meek = buuk;
   heek = geek = meek;
   meek.print();
   cout << endl;
   geek.print();
   cout << endl;
   heek.print();
   cout << endl;

return 0;
}