#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int tiempoPorDef = -1;
    while(true){

        int sumaDef=0;
        int def = -1;
        cin >> tiempoPorDef;
        if(tiempoPorDef == 0) break;
        while(def != 0){
            cin >> def;
            sumaDef += (int)def;
        }
        int tiempoTotal = tiempoPorDef * sumaDef;
        int horas=0, minutos=0, segundos=tiempoTotal;
        string sHoras="0", sMinutos="0", sSegundos="0";
        if(segundos > 59){
            minutos = floor(segundos / 60);
            segundos = segundos % 60;
        }
         if(minutos > 59){
            horas = floor(minutos / 60);
            minutos = minutos % 60;
        }

        sHoras = horas == 0 || horas < 10 ? sHoras+to_string(horas) : to_string(horas);
        sMinutos = minutos == 0 || minutos < 10 ? sMinutos+to_string(minutos): to_string(minutos);
        sSegundos = segundos == 0 || segundos < 10 ? sSegundos+to_string(segundos): to_string(segundos);
        sHoras +=":"; sMinutos+=":";
        cout << sHoras << sMinutos << sSegundos<<endl;

    }
    return 0;
}
