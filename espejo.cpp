#include <ooml/core.h>
#include <ooml/components.h>
#include <ooml/parts.h>

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    double ancho, alto, grosor_espejo, d_tornillo;

    ancho = 40;
    alto = 20;
    grosor_espejo = 3;
    d_tornillo = 3;

    Component espejo = Cube (ancho, alto, 2*grosor_espejo)
            - Cube (ancho+1, alto, grosor_espejo+0.5).translate(0,alto/2,0.5*grosor_espejo)
            - Cylinder(d_tornillo/2, grosor_espejo+1).translate(ancho/2-d_tornillo/2-2*d_tornillo,-(alto/4),(grosor_espejo/2+0.5)) //agujero tornillo
            - Cylinder(d_tornillo/2, grosor_espejo+1).translate(-(ancho/2-d_tornillo/2-2*d_tornillo),-(alto/4),(grosor_espejo/2+0.5)) //agujero tornillo
            - Cylinder(d_tornillo, grosor_espejo+1).translate(ancho/2-d_tornillo/2-2*d_tornillo,-(alto/4),-(grosor_espejo/2+1)) //agujero tapa
            - Cylinder(d_tornillo, grosor_espejo+1).translate(-(ancho/2-d_tornillo/2-2*d_tornillo),-(alto/4),-(grosor_espejo/2+1)) //agujero tapa

            ;

    Component tapon = Cylinder(d_tornillo-0.3,grosor_espejo)
            - Cylinder(d_tornillo-1,grosor_espejo).translate(0,0,grosor_espejo/2)

            ;


    Component soporte_espejo = espejo + tapon.translate(ancho/2+5,5,-grosor_espejo/2)+ tapon.translatedCopy(ancho/2+5,-5,-grosor_espejo/2);

        IndentWriter writer;
        writer << soporte_espejo;

    ofstream file("espejo.scad");
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
