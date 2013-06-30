#include <ooml/core.h>
#include <ooml/components.h>
#include <ooml/parts.h>

#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    double diam_buddasch, diam_max, lado_ventilador,alto_cilindro  ;

    diam_buddasch = 40;
    diam_max = 50;
    lado_ventilador = 40;
    alto_cilindro = 15;

    Component soporte_ventilador =
            Cube(lado_ventilador,lado_ventilador,10)
            & Cube(alto_cilindro, alto_cilindro,1).translate(0,0,lado_ventilador)
            ;

    Component soporte_ventilador_interior =
            Cube(lado_ventilador-10,lado_ventilador-10,11)
            & Cube(alto_cilindro-3, alto_cilindro-3,2).translate(0,0,lado_ventilador)
            ;

    Component cilindro =
            Cylinder(diam_max/2,alto_cilindro)
            - Cylinder(diam_buddasch/2,alto_cilindro+1)
            - Cylinder(2,diam_buddasch+3).rotate(90,0,0)
            - Cylinder(2,diam_buddasch+3).rotate(0,90,0)
            - Cylinder(2,diam_buddasch+3).rotate(90,0,45)
            - Cylinder(2,diam_buddasch+3).rotate(0,90,45)
            - Cube(4,alto_cilindro+1,alto_cilindro+2).translate(diam_buddasch/2+4,0,0)
            ;

    Component cilindro_interior =
            Cylinder(diam_max/2-1,alto_cilindro-2)
            - Cylinder(diam_buddasch/2+1,alto_cilindro+1)


            ;

    Component ventilador = soporte_ventilador - soporte_ventilador_interior + (cilindro-cilindro_interior).translate(60,0,0)

            ;



        IndentWriter writer;
        writer << ventilador;

    ofstream file("ventilador.scad");
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
