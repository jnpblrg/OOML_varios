#include <ooml/core.h>
#include <ooml/components.h>
#include <ooml/parts.h>

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    Component cuerpo = Cube (152,66,31.5)
            - Cube (20,20,31.5).translate(152/2-20/2-1.5,66/2-20/2-1.5,1.5) //desayuno domingo
            - Cube (20,20,31.5).translate(152/2-20/2-1.5,66/2-20/2-1.5-20-1.5,1.5) //comida domingo
            - Cube (20,20,31.5).translate(152/2-20/2-1.5,66/2-20/2-1.5-20-1.5-20-1.5,1.5) //cena domingo
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5,66/2-20/2-1.5,1.5) //desayuno sabado
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5,66/2-20/2-1.5-20-1.5,1.5) //comida sabado
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,1.5) //cena sabado
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5,66/2-20/2-1.5,1.5) //desayuno viernes
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5,1.5) //comida viernes
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,1.5) //cena viernes
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5,1.5) //desayuno jueves
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5,1.5) //comida jueves
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,1.5) //cena jueves
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5,1.5) //desayuno miercoles
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5,1.5) //comida miercoles
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,1.5) //cena miercoles
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5,1.5) //desayuno martes
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5,1.5) //comida martes
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,1.5) //cena martes
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5,1.5) //desayuno lunes
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5,1.5) //comida lunes
            - Cube (20,20,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,1.5) //cena lunes

            ;

    Component cajon = Cube (19.5,29.5,19.5)
            - Cube (17.5,27.5,20).translate(0,0,1.5)
            ;

    Component pastillero = cuerpo + cajon.translate(0,50,0);

        IndentWriter writer;
        writer << pastillero;

    ofstream file("pastillero.scad");
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
