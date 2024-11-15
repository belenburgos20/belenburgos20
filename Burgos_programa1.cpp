#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main (){
   
   
    int mes, dia ; //declarar las variables
   
   
    cout<< "\t Ingrese su mes de nacimiento expresado en numeros"<<endl; //Le pedimos al usuario que ingrese su mes de nacimiento
    cin>> mes; //El usuario ingresa su mes de nacimiento

    if (mes<1 || mes>12){    //Condicion para preveer un error posible
        cout<<"\t El numero de mes ingresado no es valido"<<endl;
        return 0; //Sale del programa, si entra en la condicion
    }

    cout<< "\t Ingrese su dia de nacimiento expresado en numeros"<<endl; //Le pedimos al usuario que ingrese su dia de nacimiento
    cin>> dia;  //El usuario ingresa su dia de nacimiento
    
    
    if (dia<1 || ((mes==4 || mes==6 || mes==9 || mes==11) && dia==31)
    || (mes==2 && dia>=30) || dia>31){    //Condicion para limitar los dias de los meses y preveer un error posible
        cout<< "\t El dia ingresado no es valido para el mes ingresado";
        return 0; //Sale del programa si entra a la condicion
    }
    

    cout<<"\t Mes: "<< mes<<endl;
    cout<<"\t Dia: "<< dia <<endl;
    

    if ((mes==12 && dia>21) || (mes==1 && dia<=20))  { // Meses y dias que comprende el signo Capricornio
        cout<< "\t Tu signo zodiacal es: Capricornio"<<endl;
    }
    if ((mes==1 && dia>=21) || (mes==2 && dia<=19))  { // Meses y dias que comprende el signo Acuario
        cout<< "\t Tu signo zodiacal es: Acuario"<<endl;
        
    }
     if ((mes==2 && dia>=20) || (mes==3 && dia<=20))  { // Meses y dias que comprende el signo Piscis
         cout<< "\t Tu signo zodiacal es: Piscis"<<endl;
         
     }
    if ((mes==3 && dia>=21) || (mes==4 && dia<=19))  { // Meses y dias que comprende el signo Aries
        cout<< "\t Tu signo zodiacal es: Aries"<<endl;
        
    }
    if ((mes==4 && dia>=20) || (mes==5 && dia<=20))  { // Meses y dias que comprende el signo Tauro
        cout<< "\t Tu signo zodiacal es: Tauro"<<endl;
        
    }
    if ((mes==5 && dia>21) || (mes==6 && dia<=21))  { // Meses y dias que comprende el signo Geminis
        cout<< "\t Tu signo zodiacal es: Geminis"<<endl;
        
    }
    if ((mes==6 && dia>=22) || (mes==7 && dia<=22))  { // Meses y dias que comprende el signo Cancer
        cout<< "\t Tu signo zodiacal es: Cancer"<<endl;
        
    }
    if ((mes==7 && dia>=23) || (mes==8 && dia<=23))  { // Meses y dias que comprende el signo Leo
        cout<< "\t Tu signo zodiacal es: Leo"<<endl;
        
    }
    if ((mes==8 && dia>=24) || (mes==9 && dia<=22))  { // Meses y dias que comprende el signo Virgo
        cout<< "\t Tu signo zodiacal es: Virgo"<<endl;
        
    }
    if ((mes==9 && dia>=23) || (mes==10 && dia<=22))  { // Meses y dias que comprende el signo Libra
        cout<< "\t Tu signo zodiacal es: Libra"<<endl;
        
    }
    if ((mes==10 && dia>23) || (mes==11 && dia<=22))  { // Meses y dias que comprende el signo Escorpio
        cout<< "\t Tu signo zodiacal es: Escorpio"<<endl;
        
    }
    if ((mes==11 && dia>=23) || (mes==12 && dia<=21))  { // Meses y dias que comprende el signo Sagitario
        cout<< "\t Tu signo zodiacal es: Sagitario"<<endl;
    }
    
    string respuesta; //Declaramos variable de tipo string, cadena de caracteres

    cout<< "\t Te gusta festejar tu cumpleanos? Responde Si o No "<<endl; 
    cin>> respuesta;  //El usuario ingresa su respuesta
    
    if (respuesta== "SI" || respuesta=="Si" || respuesta=="sI" || respuesta=="si" ){ //Condicion a la que entra si la respuesta es SI o Si o sI o si
        cout<< "\t Que bueno, me alegro" <<endl; //Comentario intuitivo al entrar en la condicion
    }
    else if (respuesta== "NO" || respuesta=="No" || respuesta=="nO" || respuesta=="no"){ //Condicion a la que entra si la respuesta es NO o No o nO o no
        cout<< "\t Que lastima.Y si tuvieras que festejarlo..."<<endl; //Comentario intuitivo al entrar en la condicion
    }
    else {
        cout<< "\t La respuesta es incorrecta, vuelva a intentar ingresando los valores correctos. 'Si' o 'No'" <<endl;  //Si la respuesta no es la esperada, deja intentar nuevamente al usuario
        cin>>respuesta; //El usuario ingresa su respuesta
        if (respuesta== "SI" || respuesta=="Si" || respuesta=="sI" || respuesta=="si" ){ 
        cout<< "\t Que bueno, me alegro" <<endl; 
        } else if (respuesta== "NO" || respuesta=="No" || respuesta=="nO" || respuesta=="no"){ 
        cout<< "\t Que lastima.Y si tuvieras que festejarlo..."<<endl;
        } else {
            cout<<"\t La respuesta es incorrecta" <<endl;  //Si es usuario ingresa un valor erroneo nuevamente no lo deja intentar nuevamente
        }
    }
    
    float invitados; //Declaramos una variable de tipo float, valores reales, antes de usarla
   
    cout<< "\t Cuantos invitados tenes a tu fiesta de cumpleanos?" <<endl; //Le preguntamos al usuario la cantidad de invitados a su cumpleaños
    cin>> invitados; //El usuario ingresa la cantidad de invitados
    
    float total_invitados= (round(sqrt(pow(invitados,4)))); //Declaramos una variable de tipo float y le asignamos una operacion que nos dara la cantidad total de invitados
    cout<<"\t El numero total de invitados a tu fiesta de cumpleanos sera: "<<total_invitados<<endl; //Le mostramos al usuario el total de invitados



    
    return 0; //Sale del programa
}

