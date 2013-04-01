#include <ooml/core.h>
#include <ooml/components.h>
#include <ooml/parts.h>

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    double ancho, alto, profundidad;

    ancho = 26;
    alto = 15;
    profundidad = 25;



    Component exterior = Cube (alto,ancho,profundidad)
            + Cylinder (ancho/2,profundidad).translate(alto/2,0,0)
            - Cylinder (1.2, profundidad+1)
            - Cylinder (3, profundidad-10)

            ;
    Component interior = Cube (alto+1,ancho-10,profundidad)
            + Cylinder (ancho/2-5,profundidad).translate(alto/2,0,0);

    Component percha = exterior-interior.translate(0,0,7);

        IndentWriter writer;
        writer << percha;

    ofstream file("percha.scad");
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
