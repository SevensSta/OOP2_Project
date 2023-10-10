#include "functions.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"

int turn=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setWindowIcon(QIcon(":/icon/images/icon.png"));
    setStyleSheet("background-color:blck");
    QMainWindow::setWindowFlags( Qt::WindowTitleHint |  Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint );
    ui->setupUi(this);
    ui -> oneonebutton -> setVisible(false);
    ui -> twoonebutton -> setVisible(false);
    ui -> threeonebutton -> setVisible(false);
    ui -> fouronebutton -> setVisible(false);
    ui -> fiveonebutton -> setVisible(false);
    ui -> sixonebutton -> setVisible(false);
    ui -> bonusonebutton -> setVisible(false);
    ui -> choiceonebutton -> setVisible(false);
    ui -> fkindonebutton -> setVisible(false);
    ui -> fullhouseonebutton -> setVisible(false);
    ui -> sstraightonebutton -> setVisible(false);
    ui -> lstraightonebutton -> setVisible(false);
    ui -> yahtzeeonebutton -> setVisible(false);
    ui -> totalone -> setVisible(false);
    ui -> onetwobutton -> setVisible(false);
    ui -> twotwobutton -> setVisible(false);
    ui -> threetwobutton -> setVisible(false);
    ui -> fourtwobutton -> setVisible(false);
    ui -> fivetwobutton -> setVisible(false);
    ui -> sixtwobutton -> setVisible(false);
    ui -> bonustwobutton -> setVisible(false);
    ui -> choicetwobutton -> setVisible(false);
    ui -> fkindtwobutton -> setVisible(false);
    ui -> fullhousetwobutton -> setVisible(false);
    ui -> sstraighttwobutton -> setVisible(false);
    ui -> lstraighttwobutton -> setVisible(false);
    ui -> yahtzeetwobutton -> setVisible(false);
    ui -> totaltwo -> setVisible(false);
    ui -> backbutton -> setVisible(false);
    ui -> reroll -> setVisible(false);
    ui -> keep1 -> setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startbutton_clicked()
{
    bool flag = true;
    ui->gamestart->setVisible(false);
    ui->startbutton->setVisible(false);
    ui->howtobutton->setVisible(false);
    ui->creditsbutton->setVisible(false);
    ui->exitbutton->setVisible(false);
    ui -> oneonebutton -> setVisible(true);
    ui -> twoonebutton -> setVisible(true);
    ui -> threeonebutton -> setVisible(true);
    ui -> fouronebutton -> setVisible(true);
    ui -> fiveonebutton -> setVisible(true);
    ui -> sixonebutton -> setVisible(true);
    ui -> bonusonebutton -> setVisible(true);
    ui -> choiceonebutton -> setVisible(true);
    ui -> fkindonebutton -> setVisible(true);
    ui -> fullhouseonebutton -> setVisible(true);
    ui -> sstraightonebutton -> setVisible(true);
    ui -> lstraightonebutton -> setVisible(true);
    ui -> yahtzeeonebutton -> setVisible(true);
    ui -> totalone -> setVisible(true);
    ui -> totaltwo -> setVisible(true);
    ui -> reroll -> setVisible(true);
    ui -> keep1 -> setVisible(true);

    turn++;

    if (turn == 27)
        final_score();

    if (turn % 2 == 1)
        ui->playingplayer->setText("Player 1 is in control...");
    else if (turn % 2 == 0)
        ui->playingplayer->setText("Player 2 is in control...");

    ui -> lefttime -> setText("3 left");

    QPixmap pix_one(":/dice/images/one.png");
    QPixmap pix_two(":/dice/images/two.png");
    QPixmap pix_three(":/dice/images/three.png");
    QPixmap pix_four(":/dice/images/four.png");
    QPixmap pix_five(":/dice/images/five.png");
    ui -> test -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
    ui -> test_2 -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
    ui -> test_3 -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
    ui -> test_4 -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
    ui -> test_5 -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
    ui -> category -> setText("← Choose category");
}


void MainWindow::on_exitbutton_clicked()
{
    QCoreApplication::exit(0);
}


void MainWindow::on_creditsbutton_clicked()
{
    ui->gamestart->setVisible(false);
    ui->startbutton->setVisible(false);
    ui->howtobutton->setVisible(false);
    ui->creditsbutton->setVisible(false);
    ui->exitbutton->setVisible(false);
    ui->playingplayer->setText("이 프로그램에 사용한 Open Source / Copyleft Source");
    ui -> backbutton -> setVisible(true);
}


void MainWindow::on_oneonebutton_clicked()
{
    ui -> oneonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_backbutton_clicked()
{
    ui->gamestart->setVisible(true);
    ui->startbutton->setVisible(true);
    ui->howtobutton->setVisible(true);
    ui->creditsbutton->setVisible(true);
    ui->exitbutton->setVisible(true);
    ui->playingplayer->setText("");
    ui -> backbutton -> setVisible(false);
}



void MainWindow::on_twoonebutton_clicked()
{

}


void MainWindow::on_threeonebutton_clicked()
{

}


void MainWindow::on_fouronebutton_clicked()
{

}


void MainWindow::on_fiveonebutton_clicked()
{

}


void MainWindow::on_sixonebutton_clicked()
{

}


void MainWindow::on_choiceonebutton_clicked()
{

}


void MainWindow::on_fkindonebutton_clicked()
{

}


void MainWindow::on_fullhouseonebutton_clicked()
{

}


void MainWindow::on_sstraightonebutton_clicked()
{

}


void MainWindow::on_lstraightonebutton_clicked()
{

}


void MainWindow::on_yahtzeeonebutton_clicked()
{

}


void MainWindow::on_onetwobutton_clicked()
{

}


void MainWindow::on_twotwobutton_clicked()
{

}


void MainWindow::on_threetwobutton_clicked()
{

}


void MainWindow::on_fourtwobutton_clicked()
{

}


void MainWindow::on_fivetwobutton_clicked()
{

}


void MainWindow::on_sixtwobutton_clicked()
{

}


void MainWindow::on_choicetwobutton_clicked()
{

}


void MainWindow::on_fkindtwobutton_clicked()
{

}


void MainWindow::on_fullhousetwobutton_clicked()
{

}


void MainWindow::on_sstraighttwobutton_clicked()
{

}


void MainWindow::on_lstraighttwobutton_clicked()
{

}


void MainWindow::on_yahtzeetwobutton_clicked()
{

}

