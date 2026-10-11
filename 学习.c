//1.程序框架

//# 预处理指令，在预编译时处理

//#include<stdio.h> 包含<stdio.h>文件 stdio.h类似于菜单（头文件）

//符号与（）结合代表这个是一个函数

//main() main函数也叫主函数 作用：整个程序中仅写一个main函数，程序从main函数开始进行

//int 代表main函数结束后的返回值类型

//{} 里面的是函数体（所有需要执行的代码必须写在大括号内）

//每一条代码必须以分号结束

//printf 是一个函数库，printf（）的意思是函数调用（从“菜单”中点菜）

//\n 换行输出

/*
#include <stdio.h>
int main()
{
	printf("Hello World\n");//打印到终端
	return 0;
}
*/



//2.做计算
//%d 逗号后面的值填入

/*
#include<stdio.h>
int main()
{
	printf("12+34=%d\n",12+34);
	return 0;
}
*/



//3.变量  变量的赋值与初始化

//(1)变量的名字叫标识符

//(2)变量原则：标识符只能由字母、数字和下划线组成，数字不可以出现在第一个位置上
               
			   //C语言的关键字（有的地方叫它们保留字）不可以用作标识符*/

//(3)a=b与b=a为两个完全不同的意思。a=b表示将b的值赋予a，是一个动态的过程，并非数学中的静态过程

//(4)如果没有给变量初始化，则变量值为随机

//(5)=是赋值运算符

/*
#include<stdio.h>
int main()
{
	int price = 0;   //定义了第一个变量，类型为int，名称为price，初始值为0
	printf("请输入金额（元）：");
	scanf("%d", &price);   //将输入的值赋给price变量
	int change = price - 32;   //定义了第二个变量，类型为int，并且做了计算
	                           //32为常量，更好的方式定义常量：const int AMOUNT = 32
	printf("找您%d元。\n", change);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);   //a,b,a+b依次放入%d中
	return 0;
}
*/



//4.浮点数

//(1)%f表达浮点数，%d表达整数

//(2)double为双精度浮点类型，float为单精度浮点类型

/*
#include<stdio.h>
int main()
{
	printf("请分别输入英尺和英寸(如输入\"5 7\"表示五英尺七英寸):");
	int foot;
	double inch;
	scanf("%d %lf", &foot, &inch);   //%lf表示输入double类型数值
	printf("换算国际单位为%f\n", (foot + inch / 12) * 0.3048);   //将12改为浮点数12.0或inch改成浮点数即可
	retuen 0;
}
*/



//5.表达式

//(1)运算符(operator):是指进行运算的动作，比如加法运算符“+”，减法运算符“-”,取余运算符“&”

//(2)算子(operand):是指参与运算的值，这个值可能是常数，也可能是变量，还可能是一个方法的返回值

/*
#include<stdio.h>
int main()
{
	printf("请分别输入两个小时与分钟(如3 20 5 40为三点二十分到五点四十分的时间差)：");
    int hour1, minute1;
	int hour2, minute2;
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	int t = t2 - t1;
	printf("时间差为：%d小时%d分钟\n", t / 60, t % 60);
	return 0;
}
*/



//6.求平均值

//(1)注意运算符的优先级

/*
#include<stdio.h>
int main()
{
	printf("请分别输入两个数值求取其平均值(如12 7.9)：");
	double a, b;
	scanf("%lf %lf", &a, &b);
	double average = (a + b) / 2.0;
	printf("%lf与%lf的平均值=%f\n", a, b, average);
	return 0;
}
*/



//7.交换变量

//(1)设置临时变量作为交换容器

//(2)断点的设置

/*
#include<stdio.h>
int main()
{
	int a = 5;
	int b = 6;
	int c;
	c = a;
	a = b;
	b = c;
	printf("a=%d,b=%d", a, b);
	
	return 0;
}
*/



//8.复合赋值

//(1)++和--可以放在变量的前面，叫做前缀形式。也可以放在变量的后面，叫做后缀形式

//(2)a++的值是a+1以前的值，而++a的值是a+1以后的值，无论哪个，a自己的值都+1了(“-”同理)

/*
#include<stdio.h>
int main()
{
	int a = 10;
	printf("a++=%d\n", a++);
	printf("a=%d\n", a);
	
	printf("++a=%d\n", ++a);
	printf("a=%d\n", a);

	return 0;
}
*/



//9.条件判断(if)

/*
#include<stdio.h>
int main()
{
	printf("请输入个做差时间点：");

	int hour1, minute1;
	int hour2, minute2;
	
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);

	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	if (im < 0)
	{
		im = 60 + im;
		ih - 1;
	}
	printf("时间差是%d小时%d分。\n",ih,im);
	return 0;
}
*/



//10.判断的条件：关系运算，作比较的运算符(注意：==为等于，!=为不等于)

//(1)优先级：所有的关系运算符的优先级比算术运算的低，但是比赋值运算的高

//(2)判断是否相等的==和!=的优先级比其他的低，而连续的关系运算是从左到右进行的

/*
#include<stdio.h>
int main()
{
	printf("%d\n", 5 == 3);
	printf("%d\n", 5 > 3);
	printf("%d\n", 5 <= 3);
	printf("%d\n", 3 <= 3 + 5);

	//int r = a > 0的意思是a>0的计算结果给r进行赋值

	return 0;
}
*/



//11.找零计算器：注释，判断，流程图

/*
#include<stdio.h>
int main()
{
	//初始化
	int price = 0;
	int bill = 0;
	//输入金额与票面
	printf("请输入金额");
	scanf("%d", &price);
	printf("请输入票面");
	scanf("%d", &bill);
	//计算找零
	if (bill >= price)
	{
		printf("应该找您：%d元\n", bill - price);
	}
	return 0;
}
*/



//12.if的否则结构

//(1)else结构需要在if结构的{}之外

/*
#include<stdio.h>
int main()
{
	//初始化
	int price = 0;
	int bill = 0;
	//输入金额与票面
	printf("请输入商品金额");
	scanf("%d", &price);
	printf("请输入消费者支付的票面");
	scanf("%d", &bill);
	//计算找零
	if (bill >= price)
	{
		printf("应该找零消费者：%d元\n", bill - price);
	}
	else
	{
		printf("消费者支付的票面不够\n");
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	printf("请输入两个整数：");
	int a, b;
	scanf("%d %d", &a, &b);
	int max = 0;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	printf("较大的数是%d\n", max);
	return 0;
}
*/



//13.if和else后面也可以没有{}，而是一条语句

//(1)if后面的圆括号之后不能加;，因为那不是一句完整的语句,else同理，可以不用{}

/*
#include<stdio.h>
int main()
{
	const double rate = 8.25;
	const int standard = 40;
	double pay = 0.0;
	int hours;

	printf("请输入工作的小时数：");
	scanf("%d", &hours);
	printf("\n");
	if (hours > standard)
		pay = standard * rate + (hours - standard) * (rate * 1.5);
	else
		pay = hours * rate;
	printf("应付工资：%f\n", pay);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	const int pass = 60;
	int score = 0;
	printf("请输入该学生的成绩：");
	scanf("%d", &score);
	if (score < pass)
		printf("该学生成绩不合格\n");
	else
		printf("该学生成绩合格\n");
	return 0;

}
*/



//14.嵌套的if-else

//(1)当if的条件满足或者不满足的时候要执行的语句也可以是一条if或if-else语句，这就是嵌套的if语句

//(2)else总是和最近的if匹配

//(3)在if或else后面总是用{}，即使只有一条语句

/*
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b,&c);

	int max = 0;

	if (a > b)
	{
		if (a > c)
		{
			max = a;
		}
		else
		{
			max = c;
		}
	}
	else
	{
		if (b > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	printf("最大的整数为%d\n", max);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);

	int max = 0;

	if (a > b)
		if (a > c)
			max = a;
		else
			max = c;
	else
		if (b > c)
			max = b;
		else
			max = c;
	printf("最大的整数为：%d\n", max);
	return 0;
}
*/



//15.级联的if-else

/*
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int f;
	if (x < 0)
	{
		f = -1;
	}
	else if (x = 0)
	{
		f = 0;
	}
	else
	{
		f = 2 * x;
	}
	printf("%d\n", f);
	return 0;
}
*/



//16.多路分支：switch-case语句

//(1)switch语句可以看作是一种基于计算的跳转,计算控制表达式的值后,程序会跳转到相匹配的case(分支标号)处。

//分支标号只是说明switch内部位置的路标,在执行完分支中的最后一条语句后,如果后面没有break,就会顺序执行到下面的case里去,直到遇到一个break,或者switch结束为止

/*
#include<stdio.h>
int main()
{
	int type;
	scanf("%d", &type);
	if (type == 1)
		printf("你好\n");
	else if (type == 2)
		printf("早上好\n");
	else if (type == 3)
		printf("晚上好\n");
	else if (type == 4)
		printf("再见\n");
	else
		printf("啊，什么啊？\n");
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int type;
	scanf("%d", &type);
	switch (type)
	{
		case 1:
			printf("你好\n");
			break;
		case 2:
			printf("早上好\n");
			break;
		case 3:
			printf("晚上好\n");
			break;
		case 4:
			printf("再见\n");
			break;
		default:
			printf("啊，什么啊？\n");
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	printf("输入成绩：");
	int grade;
	scanf("%d", &grade);
	grade /= 10;
	switch (grade) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
	return 0;
}
*/



//17.循环

/*
#include<stdio.h>
int main()
{
	int x;
	int n = 1;
	scanf("%d", &x);
	if (x > 999)
	{
		n = 4;
	}
	else if (x > 99)
	{
		n = 3;
	}
	else if (x > 9)
	{
		n = 2;
	}
	else
	{
		n = 1;
	}
	printf("%d\n", n);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int x;
	int n = 0;
	scanf("%d", &x);
	n++;
	x /= 10;
	while (x > 0)
	{
		n++;
		x /= 10;
	}
	printf("%d\n", n);
	return 0;
}
*/



//18.if循环

//(1)如果我们把while翻译为"当"，那么一个while循环的意思就是:当条件满足时,不断地重复循环体内的语句

//(2)循环执行之前判断是否继续循环,所以有可能循环一次也没有被执行

/*
#include<stdio.h>
int main()
{
	int x;
	int n = 0;
	scanf("%d", &x);
	n++;
	x /= 10;
while (x > 0)
{
	n++;
	x /= 10;
	printf("x=%d,n=%d\n",x,n);
}
	printf("%d\n", n);
	return 0;
}
*/



//19.do-while循环

//(1)在进入循环的时候不做检查,而是在执行完一轮循环体的代码之后,再来检查循环的条件是否满足,如果满足则继续下一轮循环,不满足则结束循环

//(2)do-while循环和while循环很像,区别是在循环体执行结束的时候才来判断条件.也就是说,无论如何,循环都会执行至少一遍,然后再来判断条件.与while循环相同的是,条件满足时执行循环,条件不满足时结束循环

/*
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int n = 0;
	do
	{
		x /= 10;
		n++;
	} while (x > 0);
	printf("%d", n);
	return 0;
}
*/



//20.猜数

//(1)让计算机来想一个数,然后让用户来猜,用户每输入一个数,就告诉它大了或者小了,直到猜中为止,最后告诉用户猜了多少次

//(2)需要用到循环

//(3)rand是生成随机数

/*
#include<stdio.h>
#include<stdlib.h>   //为了使用srand(time(0))
#include<time.h>   //为了使用int number = rand()

int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;   //x % n的结果是[0,n-1]的一个整数
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到100之间的数。");
	do {
		printf("猜猜这个1到100之间数：");
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("你猜的数大了。");
		}
		else if (a < number) {
			printf("你猜的数小了。");
		}
	} while (a != number);
	printf("太好了，你用了%d次就猜到了答案。\n", count);
	return 0;
}
*/



//21.算平均数

//(1)让用户输入一系列的正整数,最后输入-1表示输入结束,然后程序计算出这些数字的平均数,输出输入的数字的个数和平均数

//(2)变量→算法→流程图→程序

/*
#include<stdio.h>
int main()
{
	int number;
	int sum = 0;
	int count = 0;
	scanf("%d", &number);
	while(number != -1) {
		sum += number;
		count++;
		scanf("%d", &number);
	}
    printf("%f\n", 1.0*sum / count);
	return 0;
}
*/



//22.整数求逆

/*
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int digit;
	int ret = 0;
	while ( x > 0 ) {
		digit = x % 10;
		printf("%d", digit);
		ret = ret * 10 + digit;
		x /= 10;
	}
	return 0;
}
*/



//23.for循环(阶乘)

//(1)for(初始条件；循环条件；循环动作)

/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int fact = 1;
	int i = 1;
	while (i <= n) {
		fact *= i;
		i++;
	}
	printf("%d!=%d\n", n, fact);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int fact = 1;
	int i;
	for (i = 1; i <= n; i++) {
		fact *= i;
	}
	printf("%d!=%d\n", n, fact);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int fact = 1;
	int i = 1;
	for(i = n;i >= 2; i--) {
		fact *= n;
	}
	printf("%d!=%d\n", n, fact);
		return 0;
}
*/



//24.循环的计算和选择:计算循环次数/选择不同的循环

//(1)任何一个for循环都可以做成一个while循环

//(2)for(;条件;) == while(条件)

//(3)如果有固定次数,用for；如果必须执行一次，用do-while；其他情况用while

/*
#include<stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 5; i++) {
		printf("i = %d", i);
	}
	printf("\n最后i = %d", i);
	return 0;
}
*/



//25.循环控制:用break与continue控制循环

//(1)break:跳出循环；continue:跳过循环这一轮剩下的语句进入下一轮

/*
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int i;
	int isPrime = 1;   //x是素数
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			isPrime = 0;
			break;
		}
	}
	if (isPrime == 1) {
		printf("是素数\n");
	}
	else {
		printf("不是素数\n");
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int i;
	int isPrime = 1;   //x是素数
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			isPrime = 0;
			continue; 
		}
		printf("%d\n", i);
	}
	if (isPrime == 1) {
		printf("是素数\n");
	}
	else {
		printf("不是素数\n");
	}
	return 0;
}
*/



//26.1000以内的素数

/*
#include<stdio.h>
int main()
{
	int x;
	for (x = 2; x < 1000; x++)
	{
		int i;
		int isPrime = 1;   //x是素数
		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			printf("%d ",x);
		}
	}
	printf("\n");
	return 0;
}
*/



//27.循环的嵌套:生成前五十个素数

/*
#include<stdio.h>
int main()
{
	int x;
	x = 2;
	int cnt = 0;
	while (cnt < 50)
	{
		int i;
		int isPrime = 1;   //x是素数
		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			printf("%d ", x);
			cnt++;
		}
		x++;
	}
	printf("\n");
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int x;
	x = 2;
	int cnt = 0;
	for (x = 2; cnt < 50; x++) 
	{
		int i;
		int isPrime = 1;   //x是素数
		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			printf("%d ", x);
			cnt++;
		}
	}
	printf("\n");
	return 0;
}
*/



//28.从嵌套的循环中跳出(break只能跳出其所在的循环)；接力break

//(1)goto out中out:是一个整体标签,需要放在循环结束的位置以达到跳出循环的目的

/*
#include<stdio.h>
int main()
{
	int x;
	int one, two, five;
	int exit = 0;

	scanf("%d", &x);
	for (one = 1; one < x * 10; one++) {
		for (two = 1; two < x * 10 / 2; two++) {
			for (five = 1; five < x * 10 / 5; five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",one, two, five, x);
					exit = 1;
					break;
				}
			}
			if (exit == 1)
				break;
		}
		if (exit == 1)
			break;
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int x;
	int one, two, five;

	scanf("%d", &x);
	for (one = 1; one < x * 10; one++) {
		for (two = 1; two < x * 10 / 2; two++) {
			for (five = 1; five < x * 10 / 5; five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
					goto out;
				}
			}
		}
	}
	out:
	return 0;
}
*/



//29.前n项求和

/*
#include<stdio.h>
int main()
{
	int n;
	int i;
	double sum = 0.0;
	
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum += 1.0 / i;
	}

	printf("f(%d)=%f\n", n, sum);

	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int n;
	int i;
	double sum = 0.0;
	int sign = 1;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum += sign * 1.0 / i;
		sign = -sign;
	}

	printf("f(%d)=%f\n", n, sum);

	return 0;
}
*/



//30.正序分解整数

/*
#include<stdio.h>   //二轮逆序只适用于末尾没有零的数字
int main()
{
	int x;
	scanf("%d", &x);

	int t = 0;
	do {
		int d = x % 10;
		t = t * 10 + d;
		x /= 10;
	} while (x > 0);
	printf("t=%d\n", t);

	x = t;

	do {
		int d = x % 10;
		printf("%d", d);
		if (x > 9) {
			printf(" ");
		}
		x /= 10;
	} while (x > 0);
	printf("\n");

	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);

	int t = x;
	int cnt = 0;
	int mask = 1;
	while(t > 9) {
		t /= 10;
		mask *= 10;
	}
	printf("mask=%d\n", mask);

	do {
		int d = x / mask;
		printf("%d", d);
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);

	return 0;
}
*/



//31.求最大公约数

//(1)枚举

//(2)辗转相除法

/*
#include<stdio.h>
int main()
{
	int a, b;
	int min;

	scanf("%d %d", &a, &b);
	if (a < b) {
		min = a;
	}
	else {
		min = b;
	}
	int ret = 0;
	int i;
	for (i = 1; i < min; i++) {
		if (a % i == 0) {
			if (b % i == 0) {
				ret = i;
			}
		}
	}
	printf("%d和%d的最大公约数是%d.\n", a, b, ret);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a, b;
	int t;
	scanf("%d %d", &a, &b);

	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("gcd=%d\n", a);
	return 0;
}
*/



//32.求符合给定条件的整数集

//(1)给定不超过6的正整数A，考虑从A开始的连续4个数字，请输出由它们组成的无重复数字的3位数(要求从小到大，每行6个整数，整数间以空格分隔，但行末不能有多余空格)


#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i, j, k;
	int cnt = 0;
	i = a;
	while (i <= a + 3) {
		j = a;
		while (j <= a + 3) {
			k = a;
			while (k <= a + 3) {
				if (i != j) {
					if (i != k) {
						if (j != k) {
							cnt++;
							printf("%d%d%d", i, j, k);
							if (cnt == 6) {
								printf("\n");
								cnt = 0;
							}
							else {
								printf(" ");
							}
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}

}