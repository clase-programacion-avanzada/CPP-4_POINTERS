#include <iostream>

using namespace std;

void cambiarArreglo(int arreglo[]){
    arreglo[0] = 10;
    
}
void recorrerArregloConApuntador(int *ptr, int tam){
    
    for (int i = 0; i < tam; i++) {
        cout <<"["<<i<<"]"<< *(ptr) <<"Dirección apuntada"<<(int *) ptr << endl;
        ptr++;
    }
}
void recorrerArregloConReferencia(int& arreglo, int tam){
    int* ptr = &arreglo;
    for (int i = 0; i < tam; i++) {
        cout <<"["<<i<<"]"<< *(ptr) <<"Dirección apuntada"<<(int *) ptr << endl;
        ptr++;
    }
}

void function4(char &letra){
  letra='E';
  
  }

void function3(char* letra){
  
  *letra= 'D';
  
  }

void function2(char letra){
  
  letra= 'C';
  
  }

void function1 (){
  char letra = 'B';
  }

int main(){

    /*
    Variables creadas en stack
    Las variables declaradas con un identificador se almacenan en memoria stack.
    */
    char letra = 'A';
    char* apuntador = &letra;
    
    cout << "El valor de la variable letra es: " << letra << endl;
    cout << "El valor de la dirección de memoria de la variable letra es: " << (int *) &letra << endl;
    cout << "El valor de la dirección de memoria a la que apunta apuntador es: " << (int*) apuntador << endl;
    cout << "El valor de la variable *apuntador es: " << *apuntador << endl;
    cout <<endl;
    
    function1();
    function2(letra);
    function3(&letra);
    function4(letra);
    /*
    Variables creadas en heap
    Las variables declaradas con el operador new se guardan en memoria heap.

    Con new le estamos pidiendo al sistema operativo que reserve memoria para una variable de tipo int. (4 bytes)
    y que nos devuelva una dirección de memoria que apunta a esa memoria.
    */

    

    int* p = new int;
    *p = 10;

    char* p2 = new char;
    *p2 = 'A';

    
    
    /*La variable de tipo apuntador siempre ocupa la misma cantidad de espacio. En cambio, el valor 
    apuntado ocupará el espacio que necesite, dependiendo del tipo de dato que apunte.
    */
    cout <<endl;
    cout << "El tamaño de la variable p es: " << sizeof(p) << endl;
    cout << "El valor de la dirección de memoria a la que apunta p es: " << (int *) p << endl;
    cout << "El tamaño de la variable *p es: " << sizeof(*p) << endl;
    cout <<endl;
    cout << "El tamaño de la variable p2 es: " << sizeof(p2) << endl;
    cout << "El valor de de la dirección de memoria a la que apunta p2 es: " << (int *) p2 << endl;
    cout << "El tamaño de la variable *p2 es: " << sizeof(*p2) << endl;

    /*Si la dirección retornada por new no es guardada o usada, ya no habrá forma de acceder a ese dato.
    y se producirá un 'memory leak'. Vamos a verlo.
    */
    p = new int;
    *p = 20;

    cout <<endl;
    cout << "El valor de la variable apuntada por p es: " << *p << endl;
    cout << "El valor de la dirección de memoria a la que apunta p es: " << (int *) p << endl;
    

    /*Manejar la memoria se considera una tarea insegura. En c++, a diferencia de otros lenguajes,
    no existe un garbage collector que se encargue de ello y la responsabilidad es enteramente 
    del programador.
    */
    delete p;
    delete p2;
    

    //También podemos tener más de un apuntador a una variable.
    int* p3 = new int;
    *p3 = 30;

    int* p4 = p3;
    cout <<endl;
    cout << "El valor de la variable apuntada por p3 es: " << *p3 << endl;
    cout << "El valor de la dirección de memoria de la variable p3 es: " << (int *) p3 << endl;
    cout << "El valor de la variable apuntada por p4 es: " << *p4 << endl;
    cout << "El valor de la dirección de memoria de la variable p4 es: " << (int *) p4 << endl;

    /*Diferencia entre apuntador y referencia.
    Un apuntador es una variable que apunta a una dirección de memoria.
    Una referencia es una variable que apunta a una dirección de memoria y que contiene un valor.
    */
    int a = 40;
    //a y b son identificadores del mismo dato en memoria. 
    int& b = a;
    
    b = 50;

    cout <<endl;
    cout << "El valor de la variable a es: " << a << endl;
    cout << "El valor de la variable b es: " << b << endl;

    /*
    C++ tiene la particularidad que usa el símbolo & para dos cosas distintas: obtener la dirección de memoria 
    y declarar una referencia :(  
    Las referencias no pueden cambiar el valor de memoria 'referenciada', no puede tener valor nulo ni cambiar. 

    */    

   /*Las referencias son comunes y las vamos a ver en los parámetros de las funciones:
    Esto es así porque muchas veces vamos a trabajar con estructuras de datos grandes y que no queremos
    copiar todo el dato. Con esto podemos trabajar directamente sobre el dato. 

    Este es el caso de los arreglos, que solo pueden ser referenciados.
   
   */

    int arreglo[5] = {1,2,3,4,5};
    cambiarArreglo(arreglo);
    cout <<endl;
    cout << "El valor de la variable arreglo[0] es: " << arreglo[0] << endl;
    
    

    /*Ahora, vamos a hablar de la aritmética de apuntadores con un ejemplo:
        En el código siguiente, vamos a encontrar un apuntador que tiene como valor
        la dirección de memoria del primer elemento de un arreglo. 

        Recordemos que los arreglos van a tener datos contiguos dentro de la memoria, 
        separados por una cantidad de bytes que dependerá del tipo de dato que contengan.

        En este caso, el arreglo tiene 5 enteros, cada uno de 4 bytes.
    
    */
    int* p5=&arreglo[0];
    
    
    /*Vamos a recorrer el arreglo usando la aritmética de apuntadores */
    for (int i = 0; i < 5; i++) {
        cout <<"["<<i<<"] "<< *(p5) <<" Dirección apuntada"<<(int *) p5 << endl; 
        p5++;
    }
    //p5 ha perdido la referencia al arreglo, por lo que no podemos acceder a sus datos.
    //recorrerArregloConApuntador(p5,5);

    /*Podemos tener también un apuntador hacia otro apuntador*/
    int valor = 60;
    int* p6 = &valor;
    
    int** p7 = &p6;

    /*En este caso tendremos dos niveles de 'indirección', para poder acceder hay que hacer dos desreferencias
    
    (usar *)
    Esto será útil en el futuro para trabajar con arreglos de arreglos o con listas de listas.
    También podría ser útil para apuntar a una estructura que internamente tiene un apuntador.

    */



    cout <<endl;
    cout << "El valor de la variable valor es: " << valor << endl;
    cout << "el valor apuntado por p7 es " << **p7 << endl;
    /*Para liberar memoria heap, usamos delete. Delete, no se encarga de borrar el apuntador, sino que
    permite que esa dirección de memoria pueda ser usada*/


    delete p7;
    delete p6;
    /*No deberíamos volver a usar ese espacio en memoria*/
    cout <<endl;
    cout <<*p7<<endl;
    cout <<*p7<<endl;
    cout <<*p7<<endl;

    /*si queremos que un apuntador no tenga un valor basura, podemos usar nullptr para indicar que este no apunta
    a nada*/
    p7= nullptr;
    cout <<endl;
    cout <<*p7<<endl;
    
    /*No se debe usar para borrar variables que no sean apuntadores, ya que liberaría el espacio de memoria
    en el stack y puede generar comportamientos inesperados.
    */
    return 0;
}