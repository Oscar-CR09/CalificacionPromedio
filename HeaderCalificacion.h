#include <string>

class LibroCalificaciones
{
public:
	explicit LibroCalificaciones(std::string);
	void establecerNombreCurso(std::string);
	std::string obtenerNombreCurso() const;
	void mostrarMensajes()const;
	void determinarPromedioClase()const;
private:
	std::string nombreCurso;

};