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


            ///////////// CUBOS RESTADOS ATRAS /////////////


            - Cube (15,15,31.5).translate(152/2-20/2-1.5,66/2-20/2-1.5,-1) //desayuno domingo
            - Cube (15,15,31.5).translate(152/2-20/2-1.5,66/2-20/2-1.5-20-1.5,-1) //comida domingo
            - Cube (15,15,31.5).translate(152/2-20/2-1.5,66/2-20/2-1.5-20-1.5-20-1.5,-1) //cena domingo
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5,66/2-20/2-1.5,-1) //desayuno sabado
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5,66/2-20/2-1.5-20-1.5,-1) //comida sabado
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,-1) //cena sabado
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5,66/2-20/2-1.5,-1) //desayuno viernes
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5,-1) //comida viernes
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,-1) //cena viernes
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5,-1) //desayuno jueves
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5,-1) //comida jueves
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,-1) //cena jueves
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5,-1) //desayuno miercoles
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5,-1) //comida miercoles
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,-1) //cena miercoles
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5,-1) //desayuno martes
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5,-1) //comida martes
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,-1) //cena martes
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5,-1) //desayuno lunes
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5,-1) //comida lunes
            - Cube (15,15,31.5).translate(152/2-20/2-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5-20-1.5,66/2-20/2-1.5-20-1.5-20-1.5,-1) //cena lunes


            ;

    Component cajon = Cube (19,28.5,19)
            - Cube (17,26.5,20).translate(0,0,2)
            - Cylinder (1.6,3).rotate(90,0,0). translate(0,-19/2-4,0)
            ;

    Component pastillero = //cuerpo;
            cajon.translate(0,50,0);

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
