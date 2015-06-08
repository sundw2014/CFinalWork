#include "myfunctions.h"

unsigned char searchFlag;
WorkerInfo *HEAD[10],*tempNode;

unsigned char WriteToFile1(WorkerInfo *woker)
{
    FILE *fp;
    if((fp = fopen("workers.db", "ab")) == NULL)
        return 2;
    if(fwrite(woker, sizeof(WorkerInfo), 1, fp) != 1)
           {
                fclose(fp);
                return 1;
           }
    fclose(fp);
    return 3;
}
unsigned char ReadFromFile1(WorkerInfo *worker,int n)
{
    FILE *fp;
    if((fp = fopen("workers.db", "rb")) == NULL)
        return 2;
    fseek(fp,n*sizeof(WorkerInfo),SEEK_SET);
    if(fread(worker, sizeof(WorkerInfo), 1, fp)== 0)
           {
                fclose(fp);
                return 1;
           }
    fclose(fp);
    return 3;
}
unsigned char ReadFromFile2(int num[10],unsigned char dataFlag)
{
    FILE *fp;
    if((fp = fopen("jobs.db", "rb")) == NULL)
        return 2;
    if(dataFlag==FOROFFER)
    {
        fseek(fp,sizeof(int [10]),SEEK_SET);
    }
    if(fread(num, sizeof(int [10]), 1, fp)== 0)
    {
         fclose(fp);
         return 1;
    }
    fclose(fp);
    return 3;
}
unsigned char WriteToFile2(int num[10],unsigned char dataFlag)
{
    FILE *fp;

    if((fp = fopen("jobs.db", "r+b")) == NULL)
        return 2;

    fseek(fp,0,SEEK_SET);

    if(dataFlag==FOROFFER)
    {
        fseek(fp,sizeof(int [10]),SEEK_SET);
    }
    if(fwrite(num, sizeof(int [10]), 1, fp) != 1)
           {
                fclose(fp);
                return 1;
           }
    fclose(fp);
    return 3;
}
unsigned char UpdateFile2(void)
{
    WorkerInfo *currentWorker;
    int workerCNT=0;
    currentWorker=(WorkerInfo *)malloc(sizeof(WorkerInfo));

    int jobSize[10];
    memset(jobSize,0,sizeof(int [10]));

    unsigned char status;

    while((status=ReadFromFile1(currentWorker,workerCNT))==3)
    {
        if((currentWorker->jobID>=0)&&(currentWorker->jobID<=9))
            jobSize[currentWorker->jobID]++;
        workerCNT++;
    }
    free(currentWorker);
    WriteToFile2(jobSize,OLDWORKER);
    return status;
}

//void ListSort(Job *HEAD)
//{
//    Job *curNode;
//    for(int i=0;i<10;i++)
//    {

//    }
//}

void ListSort(Job *HEAD)
{
    Job *curSor1,*curSor2,*curSor3,*curSor4,*temp1;

    curSor1=HEAD;curSor2=HEAD->next;
    while(curSor2->next!=NULL)
    {
        curSor3=curSor1->next;
        curSor4=curSor2->next;
        temp1=curSor3;
        while(temp1->next!=NULL)
        {
            if((temp1->next->num>curSor2->num) && (temp1->next->num>curSor4->num))
            {
                curSor3=temp1;curSor4=temp1->next;
            }
            temp1=temp1->next;
        }
        if(curSor3!=curSor1->next || (curSor3==curSor1->next && curSor3->num<curSor4->num))
        {
            curSor1->next=curSor4;
            curSor1=curSor4;
            curSor3->next=curSor2;
            curSor3=curSor2;
            curSor2=curSor2->next;
            curSor4=curSor4->next;
            curSor1->next=curSor2;
            curSor3->next=curSor4;
        }/*交换两个节点*/
        else
        {
            curSor1=curSor1->next;
            curSor2=curSor2->next;
        }
    }


}
