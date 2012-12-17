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

    Component apoyo1 = Cylinder(1,3)
            & Cylinder (1,4).translate(30,0,0)
            & Cylinder (1,4).translate(15,30,0);

    Component apoyo2 = Cylinder(1,3)
            & Cylinder (1,4).translate(30,0,0)
            & Cylinder (1,4).translate(15,30,0);

    Component apoyo3 = Cylinder(1,3)
            & Cylinder (1,4).translate(30,0,0)
            & Cylinder (1,4).translate(15,30,0);

    Component base = RoundedTablet(150,50,8, 5)
            - RoundedTablet(146,46,10,2).translate(0,0,3)
            - apoyo1.translate(-66.5,-15,-1)
            - apoyo2.translate(-15,-15,-1)
            - apoyo3.translate(36.5,-15,-1)

            ;



        IndentWriter writer;
        writer << base;

    ofstream file("base.scad");
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
