#include <stdio.h>
#include <string.h>
#include <cstdbool>

int main()
{
	//if (init()==-1)
		//return 0;
	char *startCity = "changzhou\n";
	char *endCity = "peking";
	s();
	//linenum();
	//write(startCity, endCity);
	//read();
	return 0;
}




int linenum()
{
	FILE *fp = fopen("info.txt", "r");
	char str[999];
	int i = 0;
	while (fgets(str,999, fp) != NULL)
		i++;
	return i;
}

int init()
{
	FILE *f;
	if ((f=fopen("info.txt","r"))==NULL)
	{
		printf("Cannot read");
		return -1;
	}
	char c[20]="";
	fscanf(f, "%s", c); 
	if (c=="")
	{
		;
	}
	return 0;


}



int read()
{
	FILE *fp;
	char line1[99];
	char c[99]="\0";
	char d[99]="\0";
	
	if ((fp = fopen("info.txt", "r")) == NULL)
	{
		printf("Err");
	}
	fgets(line1,99,fp);//第一行
	fscanf(fp,"%s %s", c,d);//第二行
	printf("%s\t%s", c, d);
	return 0;
}


struct flightinfo
{
	char name[10];
	char startStation[99];
	char endStation[99];
	int allSitNumber;
	int orderSitNumber;
	_Bool week[7];//0->sun、6->sat
}flightLineNumber[99][10];

int write()
{
	char weektemp[7] = "\0";
	
	printf("请输入航班号:");
	scanf("%s", flightLineNumber[0]->name);
	printf("请输入起始地点:");
	scanf("%s", flightLineNumber[0]->startStation);
	printf("请输入目的地:");
	scanf("%s", flightLineNumber[0]->endStation);
	printf("请输入总座位数:");
	scanf("%d", &flightLineNumber[0]->allSitNumber);
	printf("请输入已预订的座位数:");
	scanf("%d", &flightLineNumber[0]->orderSitNumber);
	for (int i = 0; i < 7; i++)
	{
		flightLineNumber[0]->week[i] = 0;
	}
	printf("请依次输入周几有航班，如周二和周四有则输入 0010100，最后一个1后面的0可省略");
	scanf("%s", weektemp);
	for (int i = 0; i < 7; i++)
	{
		if (weektemp[i]=='1')
		{
			flightLineNumber[0]->week[i] = 1;
		}
	}
	/*
	Monday 周一
	Tuesday 周二
	Wednesday 周三
	Thursday 周四
	Friday  周五
	Saturday 周六
	Sunday  周日
	*/
	char weekAlpha[7][10] = {"\0"};
	for (int i = 0; i < 7; i++)
	{
		if (flightLineNumber[0]->week[i] == 1)
		{
			switch (i)
			{
			case 0: 
				strcpy(weekAlpha[0], "Sunday");
				break;
			case 1:	
				strcpy(weekAlpha[1], "Monday");
				break;
			case 2:	
				strcpy(weekAlpha[2], "Tuesday");
				break;
			case 3:	
				strcpy(weekAlpha[3], "Wednesday");
				break;
			case 4:	
				strcpy(weekAlpha[4], "Thursday");
				break;
			case 5:
				strcpy(weekAlpha[5], "Fridayday");
				break;
			case 6:
				strcpy(weekAlpha[6], "Saturday");
				break;
			}
		}
	}

	FILE *fp = fopen("info.txt","w");
	fprintf(fp, "%s\t%s\t%s\t%d\t%d\t", flightLineNumber[0]->name, flightLineNumber[0]->startStation, flightLineNumber[0]->endStation, flightLineNumber[0]->allSitNumber, flightLineNumber[0]->orderSitNumber);
	for (int i = 0; i < 7; i++)
	{
		if (weekAlpha[i][0]!='\0')
		{
			fprintf(fp, "%s\t", weekAlpha[i]);
		}
	}
	fprintf(fp, "\n");
}

