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
	  }// fin del if del ejercic+io 1
          if(Ejercicio ==2){
	    cout <<"-----------Juego------------" <<endl;
           double magic=(rand()%115)+85;
	   int matriz [4][3];
	    for (int i =0 ; i < 4; i++){
 	        for (int j=0 ; j <3 ;j++){
		
		  if(j==0){
                   matriz[i][j]=(rand()%30)+85;
		   }//fin del if
                   if(j==1){
                   matriz[i][j]=(rand()%25)+50;
		   }//fin del if
		  if(j==2){
                  matriz[i][j]=(rand()%50)+150;
		   }//fin del if
                } // fin for j
            }// fin for i de la matiz
            cout<< "---------------------------"<<endl;
	    for (int i =0 ; i < 4; i++){
 	        for (int j=0 ; j <3 ;j++){
                cout<< matriz[i][j]<<", ";
                }
              cout << ""<<endl;
            } 
          double vida = 0;
          double ataque = 0;
          int player=1;
	  while (player==1||player==2){
          
            if (player ==1){
              for (int i=0 ; i <4 ;i++){
                  for(int j=0 ;j<3;j++){
                  
                  }
	      }
             
            
            player=3;
            }
          }
          
          }// fin for del ejercicio2
        
          
        
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

 

