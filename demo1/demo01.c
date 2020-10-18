//熟能生巧 敲代码
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// page 09 浮点型
int mainpage09()
{
	double a,b,area;
	a=1.2;
	b=3.6;
	area =a*b;
	printf("a=%f,b=%f,area=%f\n",a,b,area);
	 system("pause");//用来暂停窗口的，需要调用"stdlib"头文件
	return 0;
}

// page 11 计算圆面积
#define PI 3.14159
int mainpage11()
{
	double r,s;
	r=5.0;
	s=PI*r*r;
	printf("s=%f\n",s);
	system("pause");
	return 0;
}

// page 22 上机改错题
int mainpage2201 ()
{
	float r,s;
	r=5.0;
	s=3.14159*r*r;
	printf("%f\n",s);
	system("pause");
	return 0;
}
int main2202()
{
	float a,b,c,v;
	a=2.0;b=3.0;c=4.0;
	v=a*b*c;
	printf("%f\n",v);
	system("pause");
	return 0;
}

// page 24 格式输出
int mainpage24 ()
{
	int i=2518;
	double a=3.1415;
	printf("i=%d,a=%f,a*10=%e\n",i,a,a*10);
	system("pause");
	return 0;
}

// page 32 普通数据交换
int mainpage32 ()
{
	int x,y,t;
	printf("Enter x & y : \n");
	scanf("%d%d",&x,&y);

	printf("x=%d y=%d\n",x,y);
	t=x;x=y;y=t;
	printf("x=%d y=%d\n",x,y);
	system("pause");
	return 0;
}

// page 33 数据四舍五入
 int mainpage33 ()
{
	double x;
	printf("Enter x :\n");
	scanf("%lf",&x); //需要加上"l(L)"，否则程序出现乱码
	printf("(1)x=%f\n",x);
	x=x*100;
	x=x+0.5;
	x=(int)x; //这里也很重要，类型转换       
	x=x/100;
	printf("(2)x=%f\n",x);
	system("pause");
	return 0;
}

 // page 35 上机改错题
int  mainpage35()
{
	double a,b,c,s,v;						//double a,b,c,s,v;
	printf("input a,b,c:\n");				//printf(input a,b,c:\n);
	scanf("%lf %lf %lf",&a,&b,&c);			//scanf("%d%d%d",a,b,c); 
	s=a*b;									//s=a*b;
	v=a*b*c;								//v=a*b*c;
	/*   s=(int)s;v=(int)v;   可有可无 */
	printf("a=%f b=%f c=%f \n",a,b,c);		//printf("%d%d%d",a,b, c);
	printf(" s=%f\n v=%f\n",s,v );			//printf("s=%f\n",s,"v=%f",v );	
	system("pause");						
	return 0;
}
// page 36 时间变换题
int mainpage36()
{
	int s,m,h;
	printf("input time(second)s:\n");
	scanf("%d",&s);


	//m=s/60;
	//h=m/60;
	//printf("time=%d%d%d\n",h,m,s);

	system("pause");
	return 0;
}

// page 40 比较结构
int mainpage40()
{
	int x, y;
	printf("Enter x&y:\n");
	scanf("%d%d",&x,&y);
	printf("x=%d,y=%d\n",x,y);
	if (x > y)
	{
		printf("x=%d\n", x);
	}
	if (y > x)
	{
		printf("y=%d\n",y);
	}
	if (x==y)
	{
		printf("x==y %d:\n",x);
	}
	system("pause");
	return 0;
}

// page 41 大小排序
int mainoage41()
{
	int a, b, c, t;
	printf("input a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	if (a>b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a>c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b>c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d,%d,%d\n",a,b,c);
	system("pause");
	return 0;
}

// page 42 比较两个数
int mainpage4201()
{
	int x, y;
	printf("Enter x&y:\n");
	scanf("%d%d",&x,&y);
	printf("x,y:%d  %d\n",x,y);
	if (x > y)
	{
		printf("the bigger number is x:%d", x);
	}
	else
		printf("the bigger number is y:%d",y);
	system("pause");
	return 0;
}

// page 42 判断一个数能否被3整除
int mainpage4202()
{
	float  n;
	int s;
	printf("Enter x:\n");
	scanf("%f",&n);
	printf("the number is %f\n",n);
	s = n;
	if (s % 3 == 0)		//地板除，判断n是否能被3整除
	{
		printf("%f可以被3整除\n",n);
	}
	else
	{
		printf("%d不可以被3整除\n",n);
	}
	system("pause");
	return 0;
}

// page 45 划分成绩段
int mainpage45()
{
	int goal;
	printf("Enter goal:\n");
	scanf("%d", &goal);
	if (goal >= 90)
	{
		printf("A\n");
	}
	if (goal >= 80)
	{
		printf("B\n");
	}
	if (goal >= 70)
	{
		printf("C\n");
	}
	else
	{
		printf("D\n");
	}
	system("pause");
	return 0;
}

// page 47 上面的switch语句
int mainpage4701()
{
	int goal;
	printf("Enter goal:\n");
	scanf("%d", &goal);
	switch (goal/ 10)
	{
	case 10:
	case 9:printf("1");
	case 8:printf("2");
	default:printf("3");
	}
	system("pause");
	return 0;
}

// page 47 对上面的程序进行修改
int mainpage4702()
{
	int goal;
	printf("Enter goal:\n");
	scanf("%d", &goal);
	switch (goal / 10)
	{
	case 10:
	case 9:printf("1");
		break;
	case 8:printf("2"); 
	default:printf("3");
		break;
	}
	system("pause");
	return 0;
}

// page 49 习题4.6 4.7
int mainpage4901()
{
	int w = 4, x = 3, y = 2, z = 1;
	printf("%d\n",(w<x?w:z<y?z:x));//三目运算符，首先计算w<x的值是否为真，然后在表达式1和表达式2中选择正确的一方，再进行三目运算
	system("pause");
	return 0;
}

int mainpage4902()
{
	int a, b, s;
	scanf("%d%d",&a,&b);
	s = a;
	if (a < b)
	{
		s = b;
	}
	s *= s;
	printf("%d\n",s);
	system("pause"); 
	return 0;
}

// page 51 习题4.20
int mainpage51()
{
	int x, y, z;
	x = 0;
	y = 2;
	z = 3;
	switch (x)
	{
	case 0:switch (y==2)//判断y是否等于2，如果y的值是2，那就执行语句
		{
			case 1:printf("$1"); break;//此处是程序的伏笔，看读者是否记得程序遇见break就停止
			case 2:printf("*1"); break;
		}
	case 1:switch (z)//程序执行case1 所以就跳过case2的执行条件
		{
			case 1:printf("$2");
			case 2:printf("*2"); break;
			default:printf("#2");//只执行此处
		}
	}
	system("pause");
	return 0;     
}

// page 55 累加平方根，n个数的平方的和，当满足条件后，打印n和和,主要是考察循环语句的使用
int mainpage5501()
{
	int i, sum;
	i = 0;
	sum = 0;
	while (sum < 10000) //如果不满足此处的条件，那么大括号内的运算一次也不执行
	{
		sum += i * i; //sum累加i的平方
		i++;
	}
	printf("i=%d \nsum=%d \n",i,sum);
	system("pause");
	return 0;
}

// page 55 对上面程序进行的修正
int mainpage5502()
{
	int i, sum;
	i = 0;
	sum = 0;
	while (sum < 10000)
	{
		i++;
		sum += i * i;
	}
	printf("i=%d\nsum=%d\n",i,sum);
	system("pause");
	return 0;
}

// page 55 算圆周率，这里用到了math头文件
int mainpage5503()
{
	int s;
	float n, t, pi;
	t = 1.0;
	pi = 0;
	n = 1.0;
	s = 1;
	while (fabs(t) >= 1e-6)
	{
		pi = pi + t;
		n += 2.0;
		s = -s;
		t = s / n;
	}
	pi = pi * 4;
	printf("pi=%f\n",pi);
	system("pause");
	return 0;
}

// page 56 迭代法求方程x=cosx的根，
int main()
{
	double x1, x2;
	x1 = 0.0;
	x2 = cos(x1);
	while (fabs(x2 - x1) > 1e-6)
	{
		x1 = x2;
		x2 = cos(x1);
	}
	printf("x=%f\n", x2);
	system("pause");
	return 0;
}

//




















