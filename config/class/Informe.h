#include <iostream>
#include "Curso.h"

using namespace std;

class Informe
{
    string titulo;
    int codigo;
    float acumulado;
    Curso curso;

    public:
        Informe(){
        }

        Informe(string titulo, int codigo, float acumulado, Curso curso){
            this->titulo = titulo;
            this->codigo = codigo;
            this->acumulado = acumulado;
            this->curso = curso;
        }

        string getTitulo(){
            return titulo;
        }

        int getCodigo(){
            return codigo;
        }

        float getAcumulado(){
            return acumulado;
        }

        Curso getCurso(){
            return curso;
        }

        void setTitulo(string titulo){
            this->titulo = titulo;
        }

        void setCodigo(int codigo){
            this->codigo = codigo;
        }

        void setAcumulado(float acumulado){
            this->acumulado = acumulado;
        }

        void setCurso(Curso curso){
            this->curso = curso;
        }
};