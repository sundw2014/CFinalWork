#ifndef __MYFUNCTIONS_H
#define __MYFUNCTIONS_H

#include "qstring.h"
#include "mainwindow.h"

typedef struct WorkerInfo
{
    char name[20],job[20],major[40],degree[20],num[20],gender[10],age[10];
    unsigned char jobID;
    WorkerInfo *next;
}WorkerInfo;

typedef struct Job
{
    QString *name;
    //unsigned char jobID;
    int num;

    Job *next;

}Job;
/***********************************************************************/

/****************search function***************/
extern unsigned char searchFlag;
#define NameFlag    0x40
#define JobFlag     0x20
#define GenderFlag  0x10
#define AgeFlag     0x08
#define DegreeFlag  0x04
#define MajorFlag   0x02
#define NumFlag     0x01
/**********************************************/

#define OLDWORKER 0
#define FOROFFER 1

extern WorkerInfo *HEAD[10],*tempNode;

unsigned char WriteToFile1(WorkerInfo *worker);
unsigned char ReadFromFile1(WorkerInfo *worker,int n);
unsigned char ReadFromFile2(int num[10],unsigned char dataFlag);
unsigned char WriteToFile2(int num[10],unsigned char dataFlag);
unsigned char UpdateFile2(void);
void ListSort(Job *HEAD);

#endif // MYFUNCTIONS

