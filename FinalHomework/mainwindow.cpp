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
       std::string string1;

       string1 = textcod ->fromUnicode(ui->lineEdit->text());
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

//       if(!strcmp(tempNode->job,textcod ->fromUnicode(ui->lineEdit->text())))
//           qDebug("okokok++++++++++++++++++++++++++++++");
       //qDebug("%d",tempNode->jobID);

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
    switch (WriteToFile1(tempNode)) {
    case 3:
        ui->label_16->setText("写入成功");
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

void MainWindow::on_pushButton_4_clicked()
{

    //Flags
    unsigned char Flag;

    //
    QString temp;
    WorkerInfo *currentWorker;
    int workerCNT=0;

    //used to process string
    currentWorker=(WorkerInfo *)malloc(sizeof(WorkerInfo));
    QTextCodec *textcod = QTextCodec::codecForName("GBK");
//    std::string string1;

    searchFlag=0x00;

    temp=ui->lineEdit_8->text();
    if(temp.isEmpty())
        searchFlag|=NameFlag;
    temp=ui->lineEdit_9->text();
    if(temp.isEmpty())
        searchFlag|=JobFlag;
    temp=ui->lineEdit_10->text();
    if(temp.isEmpty())
        searchFlag|=GenderFlag;
    temp=ui->lineEdit_11->text();
    if(temp.isEmpty())
        searchFlag|=AgeFlag;
    temp=ui->lineEdit_12->text();
    if(temp.isEmpty())
        searchFlag|=DegreeFlag;
    temp=ui->lineEdit_13->text();
    if(temp.isEmpty())
        searchFlag|=MajorFlag;
    temp=ui->lineEdit_14->text();
    if(temp.isEmpty())
        searchFlag|=NumFlag;

    currentWorker=(WorkerInfo *)malloc(sizeof(WorkerInfo));
    ui->label_15->setText("");
    qDebug("searchFlag=%d",searchFlag);
    while(1)
    {
        Flag=searchFlag;
        unsigned char status;
        if((status=ReadFromFile1(currentWorker,workerCNT))==2)
        {
            ui->label_15->setText(ui->label_15->text()+"文件打开失败");
            break;
        }
        else if(status==1)
        {
            ui->label_15->setText(ui->label_15->text()+"end");
            break;
        }
        if(!(searchFlag & NameFlag))
            if(!strcmp(currentWorker->name,textcod ->fromUnicode(ui->lineEdit_8->text())))
                  Flag|=NameFlag;
        qDebug("%d",Flag);
        if(!(searchFlag & JobFlag))
            if(!strcmp(currentWorker->job,textcod ->fromUnicode(ui->lineEdit_9->text())))
                  Flag|=JobFlag;
        qDebug("%d",Flag);
        if(!(searchFlag & GenderFlag))
            if(!strcmp(currentWorker->gender,textcod ->fromUnicode(ui->lineEdit_10->text())))
                  Flag|=GenderFlag;
        qDebug("%d",Flag);
        if(!(searchFlag & AgeFlag))
            if(!strcmp(currentWorker->age,textcod ->fromUnicode(ui->lineEdit_11->text())))
                  Flag|=AgeFlag;
        qDebug("%d",Flag);
        if(!(searchFlag & DegreeFlag))
            if(!strcmp(currentWorker->degree,textcod ->fromUnicode(ui->lineEdit_12->text())))
                  Flag|=DegreeFlag;
        qDebug("%d",Flag);
        if(!(searchFlag & MajorFlag))
            if(!strcmp(currentWorker->major,textcod ->fromUnicode(ui->lineEdit_13->text())))
                  Flag|=MajorFlag;
        qDebug("%d",Flag);
        if(!(searchFlag & NumFlag))
            if(!strcmp(currentWorker->num,textcod ->fromUnicode(ui->lineEdit_14->text())))
                  Flag|=NumFlag;
        qDebug("%d",Flag);
        if(Flag==0x7F)
        ui->label_15->setText(ui->label_15->text()+textcod->toUnicode(currentWorker->name)+textcod->toUnicode(currentWorker->job)+textcod->toUnicode(currentWorker->gender)+textcod->toUnicode(currentWorker->age)+textcod->toUnicode(currentWorker->degree)+textcod->toUnicode(currentWorker->major)+textcod->toUnicode(currentWorker->num)+'\n');
        workerCNT++;
    }
    free(currentWorker);
//    ui->pushButton_5->setEnabled(true);
//    ui->label_15->setText("123");
}
