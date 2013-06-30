#include <ooml/core.h>
#include <ooml/components.h>
#include <ooml/parts.h>

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    double alto_grueso, alto_fino, diametro_grueso, diametro_fino, diametro_varilla, alto_varilla;

    alto_grueso = 85;
    alto_fino = 10;
    diametro_grueso = 7.15;
    diametro_fino = 5;
    diametro_varilla = 3;
    alto_varilla = 25;

    Component palored =
            Cylinder (diametro_fino/2,alto_fino).translate(0,0,alto_fino/2)
            + Cylinder (diametro_grueso/2, alto_grueso).translate(0,0,alto_fino+alto_grueso/2)
            - Cylinder (diametro_varilla/2+0.2, alto_varilla+1).translate(0,0,alto_varilla/2)
            + Sphere(diametro_grueso/2).translate(0,0,alto_fino+alto_grueso)
            - Cube(diametro_grueso+1,diametro_grueso+1,alto_grueso+alto_fino+5).translate(-diametro_grueso/2-0.5,0,(alto_grueso+alto_fino+5)/2-1)

   ;

    Component palored_rot = palored.rotate(0,-90,0);


        IndentWriter writer;
        writer << palored_rot;

    ofstream file("palo_red.scad");
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
