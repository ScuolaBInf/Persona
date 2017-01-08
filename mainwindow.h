#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

namespace Ui
    {
        class MainWindow;
    }

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

class MainWindow : public QMainWindow
    {
        Q_OBJECT

        public:
            explicit MainWindow(QWidget *parent = 0);
            ~MainWindow();

        private slots:
            void on_Add_clicked();

            void on_Visualizza_clicked();

private:
            Ui::MainWindow *ui;
            Persona *p;
            QVector<Persona> person;
    };

#endif // MAINWINDOW_H
