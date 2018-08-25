#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "formsstackmanagement.h"

#include "formcharacter.h"
#include "formrobot.h"
#include "newgameform.h"
#include "formarena.h"
#include "formnewrobot.h"
#include "formmenuingame.h"

#include "DataBase/queryaccount.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
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
    void exitSetIconPanel();
    void exitNewRobotForm();

    void on_pushButton_Connect_clicked();

    void on_pushButton_MultiPlayer_2_clicked();

private:
    Ui::MainWindow *ui;
    QueryAccount *qua;
};

#endif // MAINWINDOW_H
