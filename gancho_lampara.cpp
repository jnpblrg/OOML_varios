#include <ooml/core.h>
#include <ooml/components.h>
#include <ooml/parts.h>

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
        double largoA, largoB, largoC, largoD, largoE, alto, ancho;
        largoA = 25;
        largoB = 16;
        largoC = 8;
        largoD = 9;
        largoE = 6;
        alto = 12;
        ancho = 2.1;

    Component gancho_lampara =
            Cube(largoA,ancho,alto) //A
            + Cube (ancho,largoB,alto).translate(-largoA/2,largoB/2,0) //B
            + Cube (largoC, ancho, alto).translate(-4, 11, 0).rotate(0,0,-140) //C
            + Cube (largoD, ancho,alto).translate(22,-11,0).rotate(0,0,160) //D
            + Cube (largoE, ancho,alto).translate(22,-15,0).rotate(0,0,160) //E
            + Cylinder (ancho+0.5,alto).translate(12.8,-1.57,0) //A-C
            + Cylinder (ancho/2,alto).translate(-12.5,0,0) //A-B
            + Cylinder (ancho/2+0.2,alto).translate(-12.7,16,0) //B-D
            + Cylinder (ancho+0.9,alto).translate(-19.6,20.9,0) //D-E
            - Cylinder (ancho/2-0.2,alto+2).translate(-20,21,0)  //Cilindros agujero D-E
            - Cylinder (ancho/2-0.2,alto+2).translate(-19,20.7,0) //////  ||
            - Cylinder (ancho/2-0.2,alto+2).translate(-18.2,20.4,0) // /  \/
            - Cylinder (ancho/2-0.2,alto+2).translate(-17.5,20.1,0)
            - Cylinder (ancho/2-0.2,alto+2).translate(-17,20.1,0)
            + Cube(5,ancho,alto).translate(-6,-0.3,0).rotate(0,0,-10) //pestana
            - Cylinder (ancho/2-0.2,alto+2).translate(12.5,-1.8,0)  //Cilindros agujero A-C
            - Cylinder (ancho/2-0.2,alto+2).translate(12,-2,0) //////  ||
            - Cylinder (ancho/2,alto+2).translate(11.5,-2.1,0) // /    \/
            - Cylinder (ancho/2+0.2,alto+2).translate(11,-2.2,0)
            - Cylinder (ancho/2+0.4,alto+2).translate(10.5,-2.4,0)
            - Cube(5,10,alto+2).translate(2,-10,8).rotate(0,30,10) //redondeo superior
            - Cube(5,10,alto+2).translate(2,-10,-10).rotate(0,-30,10) //redondeo inferior
            ;


        IndentWriter writer;
        writer << gancho_lampara;

    ofstream file("gancho_lampara.scad");
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
