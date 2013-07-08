#include <ooml/core.h>
#include <ooml/components.h>
#include <ooml/parts.h>

#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    double diametro_bote, alto_pestana, grosor_pestana, botes, numero_botes ;

    diametro_bote = 45.5; //bote especias
    alto_pestana = 15; //alto pestaña soporte bote
    grosor_pestana = 4; //grueso pestañas y soporte
    botes = 1; //variable
    numero_botes = 3; //cantidad de botes

    Component modulo_soporte_especias =
              Cylinder (diametro_bote/2+grosor_pestana, alto_pestana)
            - Cylinder (diametro_bote/2, 120).color( 0,0.9,1) //bote
            + Cube (alto_pestana, grosor_pestana, 4*alto_pestana).translate(0,-diametro_bote/2-grosor_pestana/2,-1.5*alto_pestana)
            //+ Cube (alto_pestana, grosor_pestana*3, grosor_pestana).translate(0,-diametro_bote/2+grosor_pestana/2.25,-3.5*alto_pestana)
            ;

    Component soporte_especias =
              modulo_soporte_especias.translatedCopy(0,0,0)
            + modulo_soporte_especias.translatedCopy(diametro_bote + 2*grosor_pestana +4,0,0)
            + modulo_soporte_especias.translatedCopy(2*(diametro_bote + 2*grosor_pestana +4),0,0)
            + modulo_soporte_especias.translatedCopy(3*(diametro_bote + 2*grosor_pestana +4),0,0)
            + modulo_soporte_especias.translatedCopy(4*(diametro_bote + 2*grosor_pestana +4),0,0)
            + modulo_soporte_especias.translatedCopy(5*(diametro_bote + 2*grosor_pestana +4),0,0)
             ;

        IndentWriter writer;
        writer << soporte_especias;

    ofstream file("soporte_especias.scad");
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
