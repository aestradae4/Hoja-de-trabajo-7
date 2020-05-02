/*La tarea de hoy consiste en aplicar los conocimientos adquiridos acerca de punteros.

Una empresa necesita llevar el control de los datos personales
 de sus 10 empleados contratados, por la motivo la empresa 
 lo ha contratado para la implementacion de este proyecto, 
 los datos a almacenar son:

Codigo Empleado,
Nombre Empleado,
Puesto,
Departamento,
Salario.

Existen 3 departamentos, 1 Gerencia, 2 Administracion y 3 Produccion. 
 El programa debera de desplegar la lista de 
 empleados almacenados y el total de la planilla.
*/
//Nota: Se debe utilizar ciclos, punteros, arreglos y estructuras.
#include <iostream>
#include <string>

using namespace std; 

struct empresa {
	int codigo; 
	string nombre; 
	string puesto; 
	string departamento; 
	float salario; 
	
};

int main(){
	int n, i; 
	float totalp=0.00; 
	int totale=0; 
	
	empresa *base; 
	cout<<"Ingrese el numero de empleados a registrar?"<<endl; 
	cout<<"Recuerde que es un minimo de 10 empleados"<<endl; 
	cin>>n;
	
	base = new empresa[n]; 
	for (i=0; i<n; i++){
		cout<<"Ingrese codigo del empleado"<<endl; 
		cin>>base[i].codigo; 
		cin.ignore(); 
		cout<<"Ingrese nombre del empleado"<<endl; 
		getline(cin,base[i].nombre); 
		cout<<"Ingrese puesto del empleado"<<endl;
		getline(cin,base[i].puesto); 
		cout<<"Ingrese departamento del empleado"<<endl;
		getline(cin,base[i].departamento); 
		cout<<"Ingrese el salario del empleado"<<endl; 
		cin>>base[i].salario; 
		
		totalp += base[i].salario;
		totale += n; 
	}
	cout<<"El total de la planilla de los trabajadores es de:"<<totalp<<endl; 
	cout<<"El total de empleados registrados es de:"<<totale<<endl;
	delete [] base; 
	
	
	
	
}

	
