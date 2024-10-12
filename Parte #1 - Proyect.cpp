#include <iostream>
#include <vector>
#include <string>
using namespace std;

enum Carrera { INGENIERIA = 1, ADMINISTRACION, DERECHO, MEDICINA, PSICOLOGIA, ARQUITECTURA, CRIMINOLOGIA };

string obtenerNombreCarrera(Carrera carrera) {
    switch (carrera) {
        case INGENIERIA: return "Ingenieria";
        case ADMINISTRACION: return "Administracion";
        case DERECHO: return "Derecho";
        case MEDICINA: return "Medicina";
        case PSICOLOGIA: return "Psicologia";
        case ARQUITECTURA: return "Arquitectura";
        case CRIMINOLOGIA: return "Criminologia";
        default: return "Carrera desconocida";
    }
}

struct Estudiante {
    int carnet;
    string nombres;
    string apellidos;
    int edad;
    string fechaNacimiento;
    string telefono;
    string correoElectronico;
    string direccion;
    string fechaInicioUniversidad;
    Carrera carrera;
};

string leerCadena(const string& mensaje) {
    string entrada;
    cout << mensaje;
    getline(cin, entrada);
    return entrada;
}

int leerEntero(const string& mensaje) {
    int valor;
    cout << mensaje;
    cin >> valor;
    cin.ignore();  
    return valor;
}


void registrarEstudiante(vector<Estudiante> &estudiantes) {
    Estudiante est;
    est.carnet = estudiantes.size() + 1;

    est.nombres = leerCadena("Ingrese Nombres: ");
    est.apellidos = leerCadena("Ingrese Apellidos: ");
    est.edad = leerEntero("Ingrese Edad: ");
    est.edad = leerEntero("Ingrese el Numero de Carnet: ");
    est.fechaNacimiento = leerCadena("Ingrese Fecha de Nacimiento (DD/MM/AAAA): ");
    est.telefono = leerCadena("Ingrese Numero de Telefono: ");
    est.correoElectronico = leerCadena("Ingrese Correo Electronico: ");
    est.direccion = leerCadena("Ingrese Direccion: ");
    est.fechaInicioUniversidad = leerCadena("Ingrese Fecha de Inicio de la Universidad (DD/MM/AAAA): ");

    cout << "Seleccione carrera: \n";
    cout << "1: Ingenieria\n";
    cout << "2: Administracion\n";
    cout << "3: Derecho\n";
    cout << "4: Medicina\n";
    cout << "5: Psicologia\n";
    cout << "6: Arquitectura\n";
    cout << "7: Criminologia\n";
    int opcionCarrera = leerEntero("");

    if (opcionCarrera >= 1 && opcionCarrera <= 7) {
        est.carrera = static_cast<Carrera>(opcionCarrera);
    } else {
        cout << "Opcion no valida. Se asignara carrera desconocida.\n";
        est.carrera = INGENIERIA;
    }

    estudiantes.push_back(est);

    cout << "Estudiante registrado con exito en la carrera: " << obtenerNombreCarrera(est.carrera) << "\n";
}

int main() {
    vector<Estudiante> estudiantes;
    registrarEstudiante(estudiantes);

    return 0;
}
