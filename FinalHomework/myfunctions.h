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
/***********************************************************************/

extern WorkerInfo *HEAD[10],*tempNode;

unsigned char WriteToFile(WorkerInfo *worker);

#endif // MYFUNCTIONS

