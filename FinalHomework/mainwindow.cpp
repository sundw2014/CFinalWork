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
    if(UpdateFile2()==2)
    {
        //弹出更新失败警示窗口，数据可能会出错


    }
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

void MainWindow::on_pushButton_5_clicked()
{
    int numOfEmp[10];
    unsigned char status;
    if((status=ReadFromFile2(numOfEmp,FOROFFER))==3)
    {
        numOfEmp[ui->comboBox->currentIndex()]+=ui->lineEdit_15->text().toInt();
        if(WriteToFile2(numOfEmp,FOROFFER)!=3)
            ui->label_19->setText("写入失败");
    }
    else if(status==1)
        ui->label_19->setText("读取失败");
    else if(status==2)
        ui->label_19->setText("打开文件失败");
    MainWindow::on_pushButton_6_clicked();
}

void MainWindow::on_pushButton_6_clicked()
{
    int numOfEmp[10];
    unsigned char status;

    if((status=ReadFromFile2(numOfEmp,FOROFFER))==3)
    {
        ui->label_19->setText("会计   "+QString::number(numOfEmp[0])+'\n'
                +"经理   "+QString::number(numOfEmp[1])+'\n'+"技术员 "+QString::number(numOfEmp[2])+'\n'+"策划   "
                +QString::number(numOfEmp[3])+'\n'+"文案   "+QString::number(numOfEmp[4])+'\n'+"出纳   "+QString::number(numOfEmp[5])
                +'\n'+"秘书   "+QString::number(numOfEmp[6])+'\n'+"厨师   "+QString::number(numOfEmp[7])+'\n'
                +"后勤   "+QString::number(numOfEmp[8])+'\n'+"顾问   "+QString::number(numOfEmp[9])+'\n');
    }

    else if(status==1)
        ui->label_19->setText("读取失败");
    else if(status==2)
        ui->label_19->setText("打开文件失败");

}

void MainWindow::on_pushButton_7_clicked()
{
    QString name[10]={"会计","经理","技术员","策划","文案","出纳","秘书","厨师","后勤","顾问"},strPrint;
    Job *HEAD=(Job *)malloc(sizeof(Job)),*tempNode,*curSor=HEAD;

    qDebug("%d",sizeof(Job));

    int numOfEmp[10];
    unsigned char status;

    if((status=ReadFromFile2(numOfEmp,FOROFFER))==3)
    {
        for(int i=0;i<10;i++)
        {
            tempNode=(Job *)malloc(sizeof(Job));

            tempNode->name=&name[i];
            tempNode->num=numOfEmp[i];
            tempNode->next=NULL;

            curSor->next=tempNode;
            curSor=tempNode;
        }
        ListSort(HEAD);

        curSor=HEAD->next;
        for(int i=0;i<10;i++)
        {
            strPrint+=(*(curSor->name)+"     "+QString::number(curSor->num)+'\n');
            curSor=curSor->next;
        }
        ui->label_21->setText(strPrint);

        curSor=HEAD;

        while(curSor!=NULL)
        {
          HEAD=curSor->next;
          free(curSor);
          curSor=HEAD;
        }
    }

    else if(status==1)
        ui->label_21->setText("读取失败");
    else if(status==2)
        ui->label_21->setText("打开文件失败");


}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    if(index==4)
    {
        QString name[10]={"会计","经理","技术员","策划","文案","出纳","秘书","厨师","后勤","顾问"},strPrint;
        Job *HEAD=(Job *)malloc(sizeof(Job)),*tempNode,*curSor=HEAD;

        int jobSize[10];
        unsigned char status;

        if((status=ReadFromFile2(jobSize,OLDWORKER))==3)
        {
            for(int i=0;i<10;i++)
            {
                tempNode=(Job *)malloc(sizeof(Job));

                tempNode->name=&name[i];
                tempNode->num=jobSize[i];
                tempNode->next=NULL;

                curSor->next=tempNode;
                curSor=tempNode;
            }
            ListSort(HEAD);

            curSor=HEAD->next;
            for(int i=0;i<10;i++)
            {
                strPrint+=(*(curSor->name)+"     "+QString::number(curSor->num)+'\n');
                curSor=curSor->next;
            }
            ui->label_22->setText(strPrint);

            curSor=HEAD;

            while(curSor!=NULL)
            {
              HEAD=curSor->next;
              free(curSor);
              curSor=HEAD;
            }
        }

        else if(status==1)
            ui->label_22->setText("读取失败");
        else if(status==2)
            ui->label_22->setText("打开文件失败");

    }
}

void MainWindow::on_pushButton_8_clicked()
{

}

void MainWindow::on_pushButton_9_clicked()
{

}

void MainWindow::on_pushButton_3_clicked()
{
    QTime t;

    t= QTime::currentTime();
    qsrand(t.msec()+t.second()*1000);

    int r1 = qrand()%11;
    int r2 = qrand()%13;
    int r3 = qrand()%7;
    int r4 = qrand()%9;
    int r5 = qrand()%2;
    int r6 = qrand()%21;
    int r7 = qrand();
    int r8=qrand()%10;
    QString firstName[11]={"赵","钱","孙","南相","周","施","冯","上官","褚","诸葛","东方"};
    QString lastName[13]={"乐","清海","之源","诗","远","明","仲远","少羽","嘉","尘","博","奇","琪","群"};
    QString degree[7]={"初中","高中","大专","本科","硕士","博士","高职"};
    QString major[9]={"web前端","运维","烹饪","机械","航空","飞行器设计","汽车","电子","电机"};
    QString gender[2]={"男","女"};
    QString age[21]={"25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45"};
    QString job[10]={"会计","经理","技术员","策划","文案","出纳","秘书","厨师","后勤","顾问"};
    ui->lineEdit->setText(firstName[r1]+lastName[r2]);
    ui->lineEdit_2->setText(job[r8]);
    ui->lineEdit_3->setText(gender[r5]);
    ui->lineEdit_4->setText(age[r6]);
    ui->lineEdit_5->setText(degree[r3]);
    ui->lineEdit_6->setText(major[r4]);
    ui->lineEdit_7->setText(QString::number(2014010000+r7));
}
