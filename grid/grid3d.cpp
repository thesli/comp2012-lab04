#include <iostream>
#include "grid3d.h"

using namespace std;

////////////////////////////////////////////////////////////////////////////////

// default constructor
// Remember to allocate the array data[]
// data[0], data[1] and data[2] represent x, y, z respectively
// It should also print "default constructor" (with newline) to cout

grid3d::grid3d ()
{
  cout << "default constructor" << endl;
  data = new int[3];
  data[0] = 0;
  data[1] = 0;
  data[2] = 0;  
}


////////////////////////////////////////////////////////////////////////////////

// copy constructor
// You have to a deep copy, not shallow copy!
// It should also print "copy constructor" (with newline) to cout

grid3d::grid3d (const grid3d & g)
{
  cout << "copy constructor" << "\n";
  data = new int[3];
  data[0] = g.data[0];
  data[1] = g.data[1];
  data[2] = g.data[2];
}

// assignment operator 
// You have to a deep copy, not shallow copy!
// It is similar to copy constructor
grid3d & grid3d::operator=(const grid3d & g)
{
    this->data[0] = g.data[0];
    this->data[1] = g.data[1];
    this->data[2] = g.data[2];
    return (*this);
}


////////////////////////////////////////////////////////////////////////////////

// conversion constructor
// You can call it by "grid3d(2)", or by "grid3d x = 2;"
grid3d::grid3d(int X) {
   data    = new int[3];
   data[0] = X;
   data[1] = 0;
   data[2] = 0;
   cout << "conversion constructor" << endl;
}

////////////////////////////////////////////////////////////////////////////////
// Another constructor
grid3d::grid3d(int a, int b, int c) {
   data    = new int[3];
   data[0] = a;
   data[1] = b;
   data[2] = c;
   cout << "typical constructor" << endl;
}


////////////////////////////////////////////////////////////////////////////////

// destructor
// Remember to free all dynamically allocated objects here!
// It should also print "In destructor" (with newline) to cout

grid3d::~grid3d ()
{
  cout << "In destructor" << endl;
}


////////////////////////////////////////////////////////////////////////////////
// This function prints the point in the form of (x, y, z)
void grid3d::print() const { 
   cout << "(" << data[0] << ", " << data[1] << ", " << data[2] << ")"; 
}


////////////////////////////////////////////////////////////////////////////////
// The member functions getx(), gety() and getz() return 
// the x, y and z co-ordinates of the point.

int grid3d::getx () const
{    
    return data[0];
}

int grid3d::gety () const
{
    return data[1];
}

int grid3d::getz () const
{
    return data[2];
}


////////////////////////////////////////////////////////////////////////////////
// Overloaded operator >> to read from the input stream 
// Three integers, x co-ordinate, y co-ordinate and z co-ordinate are read
// and then put to grid3d

istream& operator>>(istream& is, grid3d& g) 
{
  for (int i = 0; i < 3; i++)
    is >> g.data[i];

    return is;
};





