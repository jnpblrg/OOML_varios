#include <ooml/core.h>
#include <ooml/components.h>
#include <ooml/parts.h>

#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    double belt_width, belt_height, screw_diameter ;

    belt_width = 5; //width of the belt
    belt_height = 2; //width of the belt
    screw_diameter = 3; //diamter of the screw

    Component encaje = RoundedTablet(46,40,10,3)
            + Cube(15,4,7).translate(-10,0,5)
            + Cylinder(7.5,4).rotate(90,0,0).translate(-10,0,8.5)
            - Cylinder(1.6,10).rotate(90,0,0).translate(-10,0,10)
            - Cube(15,32,20).translate(10,0,0)
            - Cube(15,14,20).translate(-10,9,0)
            - Cube(15,14,20).translate(-10,-9,0)

            ;
    Component palo = Cylinder(7.5,10).translate(50,0,0).rotate(90,0,0)
            + RoundedTablet (15,10,40,3).translate(50,0,20)
            - Cube (20,4.5,15).translate(50,0,0)
            - Cylinder(1.6,20).translate(50,-3,0).rotate(90,0,0)
            - Cylinder(1.6,30).translate(-35,0,50).rotate(0,90,0)
            - Cube(30,30,25).translate(63,0,31)
            ;


    Component soportegolf = encaje + palo.rotate(180,-90,180).translate(0,-40,-50);

        IndentWriter writer;
        writer << soportegolf;

    ofstream file("soportegolf.scad");
    if (file){
        //generate OpenScad code of the translated cube and save it into file;
        file << writer;
        file.close();
    }else{
        cerr << "Error, cannot open the file" << endl;
    }

    cout << "Done" << endl;

    return 0;
}
