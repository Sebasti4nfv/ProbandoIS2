#include <iostream> 
using namespace std;

//hola amigos de youtube


float elpromediomayor (float promedio1,
                       float promedio2,
                       float promedio3,
                       float promedio4) 
  {

    if(promedio1 > promedio2 && promedio1 >promedio3 && promedio1 > promedio4){
        return  promedio1;
    }
    
        else if (promedio2 > promedio1 && promedio2 > promedio3 && promedio2 > promedio4){
       return  promedio2;
     }
        else if (promedio3 > promedio1 && promedio3 > promedio2 && promedio3 > promedio4){
        return  promedio3;
     }
        else {
        return  promedio4;

    }

  }

void ImprimirResultados (float may){
  cout << "El mayor es"<<may <<endl;

}
int main(){

    //declarando variables
    float promedio1, promedio2,promedio3,promedio4, mayor;
    //ingresando variables

    cout<<"Ingrese su primer promedio:";
    cin>>promedio1;
     cout<<"Ingrese su segundo promedio:";
    cin>>promedio2;
     cout<<"Ingrese su tercer promedio:";
    cin>>promedio3;
     cout<<"Ingrese su cuarto promedio:";
    cin>>promedio4;

    //procedimiento
    
    mayor = elpromediomayor (promedio1, promedio2, promedio3, promedio4);
    //resultado

    ImprimirResultados(mayor);
    
// probando git
    return 0;
 }
