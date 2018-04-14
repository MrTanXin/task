#include <stdio.h>	

int main()
{
	int sal;
	scanf("%d", &sal);

	sal -= 800;

	int rate = 0;

	switch (sal / 20000)
	{
		case 5:
			rate += (sal - 100000)*0.45;
			sal = 100000;
		case 4:
			rate += (sal - 80000)*0.4;
			sal = 80000;
		case 3:
			rate += (sal - 60000)*0.35;
			sal = 60000;
		case 2:
			rate += (sal - 40000)*0.3;
			sal = 40000;
		case 1:
			rate += (sal - 20000)*0.25;
			sal = 20000;
		case 0:
			switch (sal/5000)
			{
				case 4:
				case 3:
				case 2:
				case 1:
					rate += (sal - 5000)*0.2;
					sal = 5000;
				case 0:
					switch (sal/1000)
					{
						case 5:
						case 4:
						case 3:
						case 2:
							rate += (sal - 2000)*0.15;
							sal = 2000;
						default:
							switch (sal/500)
							{
								case 4:
								case 3:
								case 2:
								case 1:
									rate += (sal - 500)*0.1;
									sal = 500;
								case 0:
									rate += (sal)*0.05;
							}
					}
			}
	}

	printf("Rate = %d", rate);

	return 0;
}

