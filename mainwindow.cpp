#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
    {
        ui->setupUi(this);
    }

MainWindow::~MainWindow()
    {
        delete ui;
    }

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

void MainWindow::on_Add_clicked()
    {
        p = new Persona(ui ->NomeText->text(), ui ->CognomeText->text(), ui ->TipoText -> text());
        person.push_back(*p);
        delete p;

        ui ->NomeText->setText("");
        ui ->CognomeText->setText("");
        ui ->TipoText->setText("");

        ui -> NumeroMassimo -> setText(QString::number(person.size()));
    }

void MainWindow::on_Visualizza_clicked()
    {
        double num = ui -> Numb -> text().toDouble() - 1;

        if (num < person.size())
            {
                ui ->   NomeText_2     ->   setText(person[num].getNome());
                ui ->   CognomeText_2  ->   setText(person[num].getCognome());
                ui ->   TipoText_2     ->   setText(person[num].getTipo());
            }
        else
            {
                ui ->   NomeText_2     ->   setText("");
                ui ->   CognomeText_2  ->   setText("");
                ui ->   TipoText_2     ->   setText("");
            }
    }
