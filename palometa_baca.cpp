#include <ooml/core.h>
#include <ooml/components.h>
#include <ooml/parts.h>

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    double radio, alto, diam_tuerca, diam_tornillo;

    radio = 22;
    alto = 20;
    diam_tuerca = 11.5;
    diam_tornillo = 7;

    int caras;

    caras = 6;

    Component palometabaca = Cylinder(radio,alto)
            - Cylinder(radio+1,alto+1).translate(0,-(radio+13),0) //abajo
            - Cylinder(radio+1,alto+1).translate(0,-(radio+13),0).rotate(0,0,120) //derecho
            - Cylinder(radio+1,alto+1).translate(0,-(radio+13),0).rotate(0,0,-120) //izquierdo
            - Cylinder(diam_tuerca/2,alto,caras,true).translate(0,0,5)
            - Cylinder(diam_tornillo/2,alto+1)

            ;

        IndentWriter writer;
        writer << palometabaca;

    ofstream file("palometabaca.scad");
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
