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

    Component piezacuna = RoundedCube (40,18.7,25.33,3)
            - Cube(30,30,30).translate(15+34.6/2,0,0)
            - Cylinder(20,30).translate(35,0,0)
            - Cylinder(4,30).translate(-(10),0,0)
            - Cylinder(2.2,20).translate(0,0,10).rotate(0,90,0)

            ;

    piezacuna.color(1,1,1);

        IndentWriter writer;
        writer << piezacuna;

    ofstream file("piezacuna.scad");
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
