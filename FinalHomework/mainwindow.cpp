#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myfunctions.h"
#include<QTextCodec>
#include "stdio.h"
#include <qDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/***********************************
 function:@
 note:录入响应
 ***********************************/
 void MainWindow::on_pushButton_clicked()
{
     unsigned char length;
//      int i=sizeof(WorkerInfo);
//      ui->label_16->setText(QString::number(i, 10));

//     string1 = textcod ->fromUnicode(ui->lineEdit_2->text());
//     tempNode->job=string1.c_str();

//     string1 = textcod ->fromUnicode(ui->lineEdit_3->text());
//     tempNode->gender=string1.c_str();

//     string1 = textcod ->fromUnicode(ui->lineEdit_4->text());
//     tempNode->name=string1.c_str();

//     string1 = textcod ->fromUnicode(ui->lineEdit_5->text());
//     tempNode->name=string1.c_str();

//     string1 = textcod ->fromUnicode(ui->lineEdit_6->text());
//     tempNode->name=string1.c_str();

//     string1 = textcod ->fromUnicode(ui->lineEdit_7->text());
//     tempNode->name=string1.c_str();

       tempNode=(WorkerInfo *)malloc(sizeof(WorkerInfo));
       QTextCodec *textcod = QTextCodec::codecForName("GBK");
       std::string string1 = textcod ->fromUnicode(ui->lineEdit->text());
       length=string1.copy(tempNode->name,string1.size(),0);
       tempNode->name[length]='\0';

       string1 = textcod ->fromUnicode(ui->lineEdit_2->text());
       length=string1.copy(tempNode->job,string1.size(),0);
       tempNode->job[length]='\0';

//       qDebug() << length;
//       qDebug("%s","abc12");
//       qDebug("%s",tempNode->job);
//       if(!strcmp(tempNode->job,"abc12"))
//               qDebug("okokok");

       string1 = textcod ->fromUnicode(ui->lineEdit_3->text());
       length=string1.copy(tempNode->gender,string1.size(),0);
       tempNode->gender[length]='\0';

       string1 = textcod ->fromUnicode(ui->lineEdit_4->text());
       length=string1.copy(tempNode->age,string1.size(),0);
       tempNode->age[length]='\0';

       string1 = textcod ->fromUnicode(ui->lineEdit_5->text());
       length=string1.copy(tempNode->degree,string1.size(),0);
       tempNode->degree[length]='\0';

       string1 = textcod ->fromUnicode(ui->lineEdit_6->text());
       length=string1.copy(tempNode->major,string1.size(),0);
       tempNode->major[length]='\0';

       string1 = textcod ->fromUnicode(ui->lineEdit_7->text());
       length=string1.copy(tempNode->num,string1.size(),0);
       tempNode->num[length]='\0';
//     tempNode->name=c_str(ui->lineEdit->text().toStdString());
//     tempNode->job=c_str(ui->lineEdit_2->text().toStdString();
//     tempNode->gender=ui->lineEdit_3->text().toStdString();
//     tempNode->age=ui->lineEdit_4->text().toStdString();
//     tempNode->degree=ui->lineEdit_5->text().toStdString();
//     tempNode->major=ui->lineEdit_6->text().toStdString();
//     tempNode->num=ui->lineEdit_7->text().toStdString();

//     qDebug("%s",tr(tempNode->job));
//     qDebug("%s",textcod ->fromUnicode("会计"));
       if(!strcmp(tempNode->job,textcod ->fromUnicode("会计")))
                 tempNode->jobID=0;
       if(!strcmp(tempNode->job,textcod ->fromUnicode("经理")))
                 tempNode->jobID=1;
       if(!strcmp(tempNode->job,textcod ->fromUnicode("技术员")))
                 tempNode->jobID=2;
       if(!strcmp(tempNode->job,textcod ->fromUnicode("策划")))
                 tempNode->jobID=3;
       if(!strcmp(tempNode->job,textcod ->fromUnicode("文案")))
                 tempNode->jobID=4;
       if(!strcmp(tempNode->job,textcod ->fromUnicode("出纳")))
                 tempNode->jobID=5;
       if(!strcmp(tempNode->job,textcod ->fromUnicode("秘书")))
                 tempNode->jobID=6;
       if(!strcmp(tempNode->job,textcod ->fromUnicode("厨师")))
                 tempNode->jobID=7;
       if(!strcmp(tempNode->job,textcod ->fromUnicode("顾问")))
                 tempNode->jobID=8;
       if(!strcmp(tempNode->job,textcod ->fromUnicode("后勤")))
                 tempNode->jobID=9;
       qDebug("%d",tempNode->jobID);

//   switch (tempNode->job)
//   {
//        case "会计":
//            tempNode->jobID=0;
//            break;
//        case "经理":
//            tempNode->jobID=1;
//            break;
//        case "技术员":
//            tempNode->jobID=2;
//            break;
//        case "策划":
//            tempNode->jobID=3;
//            break;
//        case "文案":
//            tempNode->jobID=4;
//            break;
//        case "出纳":
//            tempNode->jobID=5;
//            break;
//        case "程序员":
//            tempNode->jobID=6;
//            break;
//        case "工程师":
//            tempNode->jobID=7;
//            break;
//        case "顾问":
//            tempNode->jobID=8;
//            break;
//        case "采购员":
//            tempNode->jobID=9;
//            break;
//        default:
//            //@@@@@@@@@@@@@flag=0
//            break;
//   }
    switch (WriteToFile(tempNode)) {
    case 3:
       // ui->label_16->setText("写入成功");
        break;
    case 2:
        ui->label_16->setText("文件无法打开");
        break;
    case 1:
        ui->label_16->setText("写入失败");
        break;
    default:
        break;
    }
    free(tempNode);
 }

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
}
