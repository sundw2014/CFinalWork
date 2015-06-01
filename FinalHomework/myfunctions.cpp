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
