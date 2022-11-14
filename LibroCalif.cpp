#include <iostream>
#include <iomanip>
#include "HeaderCalificacion.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre)
{
	establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre)
{
	if (nombre.size()<25)
	{
		nombreCurso = nombre;
	}
	else
	{
		nombreCurso = nombre.substr(0, 25);
		cerr << "El nombre \n" << nombre << "Excede la longitud maxima (25)"
			<< "Se limito nombreCurso a los primeros 25 caracteres \n" << endl;
	}
}

string LibroCalificaciones::obtenerNombreCurso()const
{
	return nombreCurso;
}

void LibroCalificaciones::mostrarMensajes()const
{
	cout << "Bienvenido al libro de calificacion para \n " << obtenerNombreCurso() << "!\n" << endl;

}

void LibroCalificaciones::determinarPromedioClase()const
{
	int total = 0;
	unsigned int contadorCalif = 0;
	cout << "Escribir la calificacion o -1 para salir:\n";
	int calificacion = 0;
	cin >> calificacion;

	while (calificacion!=-1)
	{
		total = total + calificacion;
		contadorCalif = contadorCalif + 1;

		cout << "Escribir la calificacion o -1 para salir:\n";
		cin >> calificacion;

	}
	if (contadorCalif != 0)
	{
		double promedio = static_cast<double>(total) / contadorCalif;

		cout << "\nEl total de las " << contadorCalif << "Calificaciones introducidas es:" << total << endl;
		cout << setprecision(2) << fixed;
		cout << "El promediode la clase es: " << promedio << endl;
	}
	else
	{
		cout << "NO SE INTRODUJERON CALIFICACIONES" << endl;
	}



}