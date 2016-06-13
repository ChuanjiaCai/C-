//
//  main.cpp
//  array of structures
//
//  Created by jack on 16/6/13.
//  Copyright © 2016年 jack. All rights reserved.
//
//the example shows how the members of an object act as regular variables. for example, the member yours.year is a
// valid variable of type int, and mine.title is valid variable of type string.
// but the object mine and yours are also variables with a type(of type movies_t).for example, both have been
//passed to function printmovie just as if they were simple variables. therefore, one of the features of data structures
//is the ability to refer to both their members individually or to the entire structure as a whole. in both cases using
//the same identifier: the name of the structure.
//because structures are types, they can also be used as the type of arrays to construct tables or databases of them:

#include <iostream>
#include<string>
#include<sstream>
using namespace std;
struct movies_t
{
    string title;
    int year;
}films [3];
void printmovie(movies_t movie);//predefine function

int main(int argc, const char * argv[]) {
    // insert code here...
    string mystr;
    int n;
    for(n=0;n<3;n++)
    {
        cout<<"Enter title: ";
        getline (cin,films[n].title);
        cout<<"Enter year: ";
        getline(cin,mystr);
        stringstream(mystr)>>films[n].year;
    }
    cout<<" \n You have enterd these movies:\n";
    for(n=0;n<3;n++)
        printmovie (films[n]);
    //  std::cout << "Hello, World!\n";
    return 0;
}
void printmovie (movies_t movie)
{
    cout<<movie.title;
    cout<<" ("<<movie.year<<" )\n";
}
