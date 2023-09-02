#include <iostream>
#include <vector>

using namespace std;

class Curso
{
    int codigo;
    string nombre;
    vector<vector<float>> pesos;
    vector<vector<float>> notas;

    public:
        Curso(){
        }

        Cusro(int codigo, string nombre, vector<vector<float>> pesos, vector<vector<float>> notas){
            this->codigo = codigo;
            this->nombre = nombre;
            this->pesos = pesos;
            this->notas = notas;
        }

        int getCodigo(){
            return codigo;
        }

        string getNombre(){
            return nombre;
        }

        vector<vector<float>> getPesos(){
            return pesos;
        }

        vector<vector<float>> getNotas(){
            return notas;
        }

        void setCodigo(int codigo){
            this->codigo = codigo;
        }

        void setNombre(string nombre){
            this->nombre = nombre;
        }

        void setPesos(vector<vector<float>> pesos){
            this->pesos = pesos;
        }

        void setNotas(vector<vector<float>> notas){
            this->notas = notas;
        }

        void showCurso(){
            cout << "Codigo: " << codigo << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Pesos: " << endl;
            for (int i = 0; i < pesos.size(); i++)
            {
                for (int j = 0; j < pesos[i].size(); j++)
                {
                    cout << pesos[i][j] << " ";
                }
                cout << endl;
            }
            cout << "Notas: " << endl;
            for (int i = 0; i < notas.size(); i++)
            {
                for (int j = 0; j < notas[i].size(); j++)
                {
                    cout << notas[i][j] << " ";
                }
                cout << endl;
            }
        }
};