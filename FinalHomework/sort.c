#include "stdio.h"
#include "stdlib.h"
void BubbleSort(int *pn,int count)
{
	int temp,flag_exc=1;
	for(int i=0;i<count;i++)
	{
		if(flag_exc!=1) break;
		flag_exc=0;
		for(int j=count-1;j>i;j--)
			if(*(pn+j)>*(pn+j-1))
			{
				temp=*(pn+j);
				*(pn+j)=*(pn+j-1);
				*(pn+j-1)=temp;
				flag_exc=1;
			}
	}
}
void InsertSort(int *pn,int count)
{
	int *SelectRoom=(int *)malloc(count*sizeof(int)),flag=0;
	for(int i=0;i<count;i++)
	{
		flag=0;
		for(int j=0;j<i;j++)
			if(*(pn+i)>*(SelectRoom+j))
			{
				for(int k=i;k>j;k--)
					*(SelectRoom+k)=*(SelectRoom+k-1);
				*(SelectRoom+j)=*(pn+i);
				flag=1;
				break;
			}
		if(flag!=1)
			*(SelectRoom+i)=*(pn+i);
	}
	for(int i=0;i<count;i++)
		*(pn+i)=*(SelectRoom+i);
	free(SelectRoom);
}
void ShellSort(int *pn,int count)
{
	int gap=count;
	while(gap>1)
	{
		gap=(int)(gap/2);
		for(int i=0;i<gap;i++)
		{
			int *temp=(int *)malloc(sizeof(int));
			int j=0;
			while((i+j*gap)<count)
			{
				temp=(int *)realloc(temp,(j+1)*sizeof(int));
				*(temp+j)=*(pn+i+j*gap);
				j++;
			}
			InsertSort(temp,j);
			for(int k=0;k<j;k++)
				*(pn+i+k*gap)=*(temp+k);
			free(temp);
			//for(int i=0;i<10;i++)
			//	printf("%d,",*(pn+i));	//��ӡ��������
			//printf("\n");
		}
	}
}
void BinarySearch(int Target,int *pn,int count)
{
	int LowAdd=0,HighAdd=count-1,flag=0;

	while(LowAdd!=HighAdd)
	{
		int temp=(int)((LowAdd+HighAdd)/2);
		if((temp==LowAdd)||(temp==HighAdd))
			break;
		if(*(pn+temp)==Target) 
		{
			flag=1;
			printf("�۰���ң����������ݡ�\n");
			break;
		}
		if(*(pn+temp)<Target)
			HighAdd=temp;
		if(*(pn+temp)>Target)
			LowAdd=temp;
	}
	
	if(!flag)
		if((*(pn+HighAdd)==Target)||(*(pn+LowAdd)==Target))
			printf("�۰���ң����������ݡ�\n");
		else
			printf("�۰���ң�δ�ҵ������ݡ�\n");
}
void SQ_Search(int Target,int *pn,int count)
{
	int flag=0;
	for(int i=0;i<count;i++)
		if (*(pn+i)==Target)
		{
			printf("˳����ң����������ݡ�\n");
			flag=1;
			break;
		}
		if(!flag)
			printf("˳����ң�δ�ҵ������ݡ�\n");
}
void main()
{
	int *num=(int *)malloc(10*sizeof(int)),*num_ad=num,*num_op=(int *)malloc(10*sizeof(int)),*num_op_ad=num_op,num_tofind;
	printf("������ʮ���������м��ö��Ÿ�������");
	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",num,num+1,num+2,num+3,num+4,num+5,num+6,num+7,num+8,num+9);
	for(int i=0;i<10;i++)
		*(num_op+i)=*(num+i);		//��ʼ����������
	BubbleSort(num_op,10);			//Bubble����
	printf("ð���������Ϊ��");
	for(int i=0;i<10;i++)
		printf("%d,",*(num_op+i));	//��ӡ��������
	printf("\n");
	for(int i=0;i<10;i++)
		*(num_op+i)=*(num+i);       //��ԭ��������
	InsertSort(num_op,10);				//Select����
	printf("�����������Ϊ��");
	for(int i=0;i<10;i++)
		printf("%d,",*(num_op+i));	//��ӡ��������
	printf("\n");
	for(int i=0;i<10;i++)
		*(num_op+i)=*(num+i);       //��ԭ��������
	ShellSort(num_op,10);
	printf("Shell�������Ϊ��");
	for(int i=0;i<10;i++)
		printf("%d,",*(num_op+i));	//��ӡ��������
	printf("\n");
	printf("������һ��������");
	fflush(stdin);
	scanf("%d",&num_tofind);
	printf("\n");
	BinarySearch(num_tofind,num_op,10);
	SQ_Search(num_tofind,num_op,10);
	free(num);
	free(num_op);
	fflush(stdin);
	getchar();
}
