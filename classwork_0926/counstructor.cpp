#include <iostream>

#include <string>

#include <fstream>

using std::cout, std::cin, std::endl;

using std::string;

using std::fstream;


struct point {

  string name;
  int x{}, y{}, z{};
};



// simple display support function

void show(const point& P ) {

  cout<<'(' << P.name <<P.x<<','<<P.y<<','<<P.z<<')';

  return;

}


//OVERLOADING 

std::ostream& operator<<(std::ostream& raus, const point& P ) {

  raus<<'('<< P.name << P.x <<','<< P.y <<','<< P.z <<')';

  return raus;

}



/*********************************** 

 create 3 points with 3 names, 

 change overload of << to display a point's name.

*************************************/



string junk ="C:\\Users\\Tito\\Desktop\\MAC-125\\fun3.txt";
int main()

{
//   std::ofstream file; 
  std::ofstream file(junk);

  point A{"Hello",0,0,0}, B{"Hello",1,1,1};

  cout << "point a is " << A << B<< endl;    // operator<<( ostream, point)

   //file.close();

  show(A); 

   

  return 0;

} 