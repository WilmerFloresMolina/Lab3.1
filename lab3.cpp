#include <iostream>
#include <cstdlib>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){
 srand(time(NULL));
 int Ejercicio =1;
 
 int persona =0;

 int Tabla[10];
	do {
	cout << "1. Ejercicio 1 "<<endl;
	cout << "2. Ejercicio 2 "<<endl;
	cout << "3. Salir "<<endl;
	cin >> Ejercicio;
          if (Ejercicio == 1){
            int numero =0;
            int intentos = 0;
            int cont=1;
	    cout << "Jugar Adivinar el Numero :')"<<endl;
            while (cont==1){
            double magic=(rand()%1000)-500;
            cout << magic <<endl;
          
            
               while (numero != magic){
               cout << "Ingrese un numero";
               cin >> numero ;
               intentos = intentos +1;
	       }// fin del while
	    
                if(numero == magic){
                cout << "Encontrastes el numero magico :)"<<endl;
                cout << "Desea continuar 1.Si y 2.No";
                cin >> cont;

                }// fin del if 
                if (cont ==1){
                Tabla[persona]=intentos;   
                persona = persona +1;
                   
	        }else {
                break;
                } 
                if (persona==10){
                break;
                }
	  	  
           }// fin del while 
	  }// fin del if del ejercicio 1
	}while(Ejercicio <=2);// fin del do while


return 0;
}


 

