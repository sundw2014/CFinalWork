#include "myfunctions.h"

WorkerInfo *HEAD[10],*tempNode;

unsigned char WriteToFile(WorkerInfo *woker)
{
    FILE *fp;
    if((fp = fopen("workers.db", "wb")) == NULL)
        return 2;
    if(fwrite(woker, sizeof(WorkerInfo), 1, fp) != 1)
           {
                fclose(fp);
                return 1;
           }
    fclose(fp);
    return 3;
}
