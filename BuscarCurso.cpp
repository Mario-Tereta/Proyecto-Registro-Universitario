#include <iostream>
#include <vector>
#include <string>

struct Curso {
    std::string codigoCurso;
    std::string nombreCurso;
    int creditos;
};

struct Asignacion {
    Curso curso;
    std::string codigoEstudiante;
    int semestre;
};

int main() {
    // Lista de cursos por carrera
    std::vector<Curso> cursos = {
        {"10001", "Algoritmos", 3}, {"10002", "Matem�tica", 4}, {"10003", "F�sica", 4},
        {"10004", "Calculo", 4}, {"10005", "Algebra", 3}, {"10006", "Estad�stica", 3},
        {"20001", "Fundamentos de Administraci�n", 3}, {"20002", "Comportamiento Organizacional", 3},
        {"20003", "Marketing Estrat�gico", 4}, {"20004", "Finanzas Corporativas", 4},
        {"20005", "Recursos Humanos", 3}, {"20006", "Emprendimiento", 3},
        {"30001", "Introducci�n al Derecho", 3}, {"30002", "Derecho Constitucional", 4},
        {"30003", "Derecho Civil", 4}, {"30004", "Derecho Penal", 3},
        {"30005", "Derecho Administrativo", 3}, {"30006", "Derecho Internacional", 4},
        {"40001", "Anatom�a Humana", 4}, {"40002", "Fisiolog�a", 3},
        {"40003", "Bioqu�mica", 4}, {"40004", "Patolog�a", 4},
        {"40005", "Farmacolog�a", 3}, {"40006", "Medicina Preventiva", 3},
        {"50001", "Psicolog�a General", 3}, {"50002", "Psicolog�a del Desarrollo", 3},
        {"50003", "Psicolog�a Social", 3}, {"50004", "Psicolog�a Cl�nica", 4},
        {"50005", "Psicolog�a Educativa", 3}, {"50006", "M�todos de Investigaci�n en Psicolog�a", 4},
        {"60001", "Historia de la Arquitectura", 3}, {"60002", "Dise�o Arquitect�nico", 4},
        {"60003", "Estructuras", 4}, {"60004", "Urbanismo", 3},
        {"60005", "Instalaciones en Edificios", 3}, {"60006", "Representaci�n Gr�fica", 3},
        {"70001", "Teor�a Criminol�gica", 3}, {"70002", "M�todos de Investigaci�n Criminal", 4},
        {"70003", "Psicolog�a Criminal", 3}, {"70004", "Criminal�stica", 4},
        {"70005", "Derecho Penal", 3}, {"70006", "Victimolog�a", 3}
    };

    std::vector<Asignacion> asignaciones;
    std::string codigoEstudiante;
    std::string codigoCurso;
    int semestre;

    std::cout << "Ingrese el codigo del estudiante: ";
    std::cin >> codigoEstudiante;
    std::cout << "Ingrese el codigo del curso: ";
    std::cin >> codigoCurso;
    std::cout << "Ingrese el semestre: ";
    std::cin >> semestre;

    bool cursoEncontrado = false;
    for (const auto& curso : cursos) {
        if (curso.codigoCurso == codigoCurso) {
            Asignacion nuevaAsignacion = {curso, codigoEstudiante, semestre};
            asignaciones.push_back(nuevaAsignacion);
            cursoEncontrado = true;
            std::cout << "Curso asignado exitosamente:\n";
            std::cout << "Curso: " << curso.nombreCurso << "\n";
            std::cout << "Creditos: " << curso.creditos << "\n";
            std::cout << "Semestre: " << semestre << "\n";
            break;
        }
    }

    if (!cursoEncontrado) {
        std::cout << "Curso no encontrado.\n";
    }

    return 0;
}
