#include<iostream>
using namespace std;

//Clase Persona
class Person {
        private:
        //Atributo nombre
            string name;
        //Atributo edad
            int age;
        public:
            //Constructor
            Person(string n, int a){
                name = n;
                age = a;
            }
            //Destructor
            ~Person(){
                cout << "Object deleted" << endl;
            }
            //Presentación
            void present(){
                cout << "Name:" << name << ".\nAge:" << age << "." << endl;
            }
};

//Función principal
int main(){
    
    //Creación de objeto
    Person p1("Juan", 20);
    //Presentación
    p1.present();
    //Eliminación de objeto
    p1.~Person();

    //Fin del programa
    return 0;
}