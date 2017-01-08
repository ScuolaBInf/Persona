#include <QMainWindow>

#ifndef PERSONA_H
#define PERSONA_H

class Persona
    {
        private:
            QString nome;
            QString cognome;
            QString tipo;

        public:
            Persona();
            Persona(QString nome, QString cognome, QString tipo);
            QString getNome();
            QString getCognome();
            QString getTipo();
    };

#endif // PERSONA_H
