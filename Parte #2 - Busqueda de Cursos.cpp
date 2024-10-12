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
        {"10001", "Algoritmos", 3}, {"10002", "Matemática", 4}, {"10003", "Física", 4},
        {"10004", "Calculo", 4}, {"10005", "Algebra", 3}, {"10006", "Estadística", 3},
        {"20001", "Fundamentos de Administración", 3}, {"20002", "Comportamiento Organizacional", 3},
        {"20003", "Marketing Estratégico", 4}, {"20004", "Finanzas Corporativas", 4},
        {"20005", "Recursos Humanos", 3}, {"20006", "Emprendimiento", 3},
        {"30001", "Introducción al Derecho", 3}, {"30002", "Derecho Constitucional", 4},
        {"30003", "Derecho Civil", 4}, {"30004", "Derecho Penal", 3},
        {"30005", "Derecho Administrativo", 3}, {"30006", "Derecho Internacional", 4},
        {"40001", "Anatomía Humana", 4}, {"40002", "Fisiología", 3},
        {"40003", "Bioquímica", 4}, {"40004", "Patología", 4},
        {"40005", "Farmacología", 3}, {"40006", "Medicina Preventiva", 3},
        {"50001", "Psicología General", 3}, {"50002", "Psicología del Desarrollo", 3},
        {"50003", "Psicología Social", 3}, {"50004", "Psicología Clínica", 4},
        {"50005", "Psicología Educativa", 3}, {"50006", "Métodos de Investigación en Psicología", 4},
        {"60001", "Historia de la Arquitectura", 3}, {"60002", "Diseño Arquitectónico", 4},
        {"60003", "Estructuras", 4}, {"60004", "Urbanismo", 3},
        {"60005", "Instalaciones en Edificios", 3}, {"60006", "Representación Gráfica", 3},
        {"70001", "Teoría Criminológica", 3}, {"70002", "Métodos de Investigación Criminal", 4},
        {"70003", "Psicología Criminal", 3}, {"70004", "Criminalística", 4},
        {"70005", "Derecho Penal", 3}, {"70006", "Victimología", 3}
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
