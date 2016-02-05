#include <iostream>
#include <cstdlib>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

void llenar (double []);
void ordenar(double arreglo[], double lon);

int main(int argc, char *argv[]){
 srand(time(NULL));
 int Ejercicio =1;
 
 

 double Tabla[10];
	do {
	cout << "1. Ejercicio 1 "<<endl;
	cout << "2. Ejercicio 2 "<<endl;
	cout << "3. Salir "<<endl;
	cin >> Ejercicio;
         int persona =0;
          if (Ejercicio == 1){
            llenar (Tabla);
            
            int numero =0;
           
            int cont=1;
	    cout << "Jugar Adivinar el Numero :')"<<endl;
            while (cont==1){
            double magic=(rand()%1000)-500;
            cout << magic <<endl;
          
             int intentos = 0;
               while (numero != magic){
               cout << "Ingrese un numero";
               cin >> numero ;
               double por1 = (numero / magic)*100;
               double controlador = numero- magic;
               
              
            	if (por1 <= 20){

            		cout << "helado"<<endl;
            	}

            	if ( 20 < por1 && por1 <=60 ){
            		cout<< "tibio"<< endl;
            	}
            	if (  60< por1 && por1 <=80 ){
            		cout<< "Caliente"<< endl;
            	}
            	if ( 80 < por1 && por1 <100 ){
            		cout<< "super Caliente"<< endl;
            	}
            	if (0<controlador){
            		
            		double por2 =   controlador/(1000 -magic)*100;
            		if (por2<=20){
            			cout<< "super Caliente"<< endl;
            		}

            		if (20 < por2 && por2 <=60 ){
            			cout<< "Caliente"<< endl;
            		}
            		if (60< por2 && por2 <=80 ){
            		cout<< "Tibio"<< endl;
            	    }

            		if ( 80 < por2 && por2 <=100 ){
            		    cout<< "Helado"<< endl;
            		}

            	}
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
                break;
                }
	  	  
           }// fin del while 
	  }// fin del if del ejercicio 1
        
	}while(Ejercicio <=2);// fin del do while
        cout << "------------------------"<< endl;


       ordenar(Tabla, 10);

       cout << "-------------------"<< endl;
	for (int i= 0 ;i <10;i++){
         cout <<Tabla[i]<<endl;
        }


 return 0;
}

void llenar (double Tabla[]){
	for (int i =0; i<10; i++){
         Tabla[i]=1000;
	}

}
void ordenar(double arreglo[], double lon){
        int Temp;
         for(int i=0;i<lon;i++)
                for(int j=0;j<lon-1;j++)
                    if(arreglo[j]>arreglo[j+1]){
                        Temp=arreglo[j];
                        arreglo[j]=arreglo[j+1];
                        arreglo[j+1]=Temp;}

             
} 

 

