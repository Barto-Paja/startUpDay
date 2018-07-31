#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "formsstackmanagement.h"

#include "formcharacter.h"
#include "formrobot.h"
#include "newgameform.h"
#include "formarena.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void drawBackground(QPixmap &bck);

private slots:

    void on_pushButton_NewGame_clicked();
    void on_pushButton_LoadGame_clicked();
    void on_pushButton_MultiPlayer_clicked();
    void on_pushButton_About_clicked();
    void on_pushButton_Exit_clicked();

    void switchPanel();
    void exitNewGamePanel();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
