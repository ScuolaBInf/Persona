#include <QMainWindow>
#include <QApplication>
#include "persona.h"

Persona::Persona(QString nome, QString cognome, QString tipo)
    {
        this -> nome = nome;
        this -> cognome = cognome;
        this -> tipo = tipo;
    }

Persona::Persona()
    {
        this -> nome = "nome";
        this -> cognome = "cognome";
        this -> tipo = "tipo";
    }

QString Persona::getNome()
    {
        return nome;
    }

QString Persona::getCognome()
    {
        return cognome;
    }

QString Persona::getTipo()
    {
        return tipo;
    }

