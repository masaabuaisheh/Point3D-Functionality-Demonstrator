#include <iostream>
#include <fstream>
#include "Point3D.h"
using namespace std;

int main()
{
    ////test 1
    
    Point3D A;//(11,22,33,"Point3d Name");
    A.set_x(11);
    A.set_name("Point3d Name");

    cout << A.get_x() << " " << A.get_name() << endl;      // output:11 Point3d Name
    

   //// test2 
  /*
  Point3D A,Sum;
  Point3D B;// (1, 2, 3, "B");
  B.set_x(1);
  B.set_y(2);
  B.set_z(3);
  B.set_name("B");
  A.set_x(5);
  A.set_y(5);
  A.set_z(5);
  A.set_name("A B C D");
  Sum= A + B ;    //
  cout<< Sum<< endl;    //output:A B C DB: (6.00,7.00,8.00)
  
  */
  //// test3 
 /*
    Point3D B;
    B.set_x(1);
    B.set_y(2);
    B.set_z(3);
    B.set_name("B");
    //(1, 2, 3, "B");
 {
        Point3D B;//(11,22,33,"BB");
 }
 cout<< B<< endl;       // output: B: (1,2,3)
 */


 //// test4 
    /*
    Point3D A;// (1, 2, 3, "Name Point");
    A.set_x(1);
    A.set_y(2);
    A.set_z(3);
    A.set_name("Name Point");

Point3D B=A;

cout<< A << endl; // output:  Name Point: (1,2,3)
cout<< B<< endl;  // output:  Name Point: (1,2,3)

*/

//// test5 
   /*
    Point3D A;// (1, 2, 3, "Name Point");
    A.set_x(1);
    A.set_y(2);
    A.set_z(3);
    A.set_name("Name Point");
Point3D B=A;
Point3D C;// (1, 1, 1, "C_new");
C.set_x(1);
C.set_y(1);
C.set_z(1);
C.set_name("C_new");
A+=C;
C--;
cout<< A << endl;  //output:  Name PointC_new: (2,3,4)
cout<< B<< endl;   //output:  Name Point: (1,2,3)
cout<< C<< endl;   //output:  C_new: (0,0,0)
*/


////test 6
/*
Point3D A(1,2,3,"Name Point");
Point3D B=A;
Point3D C(1,1,1,"C_new");
A+=C;
C--;
cout<< A << endl;  output:  Name PointC_new: (2,3,4)
cout<< B<< endl;   output:  Name Point: (1,2,3)
cout<< C<< endl;   output:  C_new: (0,0,0)
*/



//// test7
    /*
    int size, i;
    ifstream in("input.txt");
    in >> size;

    Point3D* my_Array;
    my_Array = new Point3D[size];

    for (i = 0; i < size; i++)
    {
        in >> my_Array[i];
    }
    int d = 5;
    Point3D origin;

    for (i = 0; i < size; i++)
    {
        if (my_Array[i].Dist_From(origin) > d)
        {
            cout << my_Array[i] << endl;  // result: P2: (-3.00,3.00,3.00)
                                                 // P3: (4.00,5.00,6.00)
        }
    }

    Point3D A;
    A = my_Array[0] = my_Array[2];
    A--;

    if (my_Array[0] == my_Array[2])
    {
        cout << "Equal \n";	//output equal;
    }
    else
        cout << "Not Equal \n";



        */

}

