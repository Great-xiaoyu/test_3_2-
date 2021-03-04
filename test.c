#include<stdio.h>

//好孩子  --  孩子
//指针数组   - 数组  - 存放指针的数组
//数组指针   - 指针  
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//整型数组 - 存放整型
	//字符数组 - 存放字符
	//指针数组 - 存放指针
	//int arr[10];
	int* arr2[3] = {&a,&b,&c};  //指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ",*(arr2[i]));
	}
	return 0;
}



////二级指针
////指针变量也是变量，是变量就有地址，那指针变量的地址存放在哪里？ 这就是 二级指针 。
//int main()
//{
//	int a = 10;
//	int* pa = &a;    //pa指向a的
//	int* * ppa = &pa;     //ppa就是二级指针   ppa指向的对象的类型是int*     int* * ppa;  int** * pppa
//	**ppa = 20;
//	printf("%d\n", **ppa);    //10   20
//	printf("%d\n", a);   //20
//
//	return 0;
//}






////指针和数组
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//    int* p = arr; //指针存放数组首元素的地址
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0;i<10;i++)
//    {
//        *(p + i) = i;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//        //printf("%d ", *(p+i));
//    }
//
//    //for (i = 0; i < sz; i++)
//    //{
//    //    //地址一模一样    数组用指针来访问
//    //    printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
//    //}
//    return 0;
//}




//int main()
//{
//	//把数组名当成地址存放到一个指针中，我们使用指针来访问一个就成为可能。
//	int arr[10] = {0};
//	int* p= arr;   // 指针存放数组首元素的地址
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n",arr); //地址 - 首元素的地址
//	//printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);  
//	//printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr); // 取出的是整个数组的地址
//	printf("%p\n", &arr+1);     //0x28 -> 32+8=40  跳过一个数组 
//	//结论：数组名表示的是数组首元素的地址
//	//1、&arr - &数组名 - 数组名不是首元素地址- 数组名表示整个数组 - &数组名  取出的是整个数组的地址
//	//2、sizeof(arr)  - sizeof(数组名)  - 数组名表示的是整个数组 - sizeof(数组名)计算的是整个数组的大小
//
//	return 0;
//}


//指针运算
//指针+-整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	//int* p =&arr[9]   //第十个元素
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*p);
//		p = p + 1;  //p++;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;   //p-=2;
//	}
//	return 0;
//}

//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
////指针+-整数；指针的关系运算
//for (vp = &values[0]; vp < &values[N_VALUES];)
//{
//    *vp++ = 0;    //5个元素全为0
//}


////指针-指针
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&arr[9] - &arr[0]);    //9   得到中间的元素的个数  指针-指针      ；小地址-大地址  为-9；
//	//printf("%d\n",&arr[9] - &ch[0]);    //error   一定要指向同一块空间  内存不兼容
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen - 计数器的方式，递归的方式
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

////指针的关系运算    比较大小
////允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
////但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp
//for (vp = &values[N_VALUES]; vp > &values[0];)
//{
//    *--vp = 0;
//}
//
////改造
////for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
////{
////    *vp = 0;
////}我们还是应该避免这样写，因为标准并不保证它可行。








//int main()
//{
//	//int a = 10;
//	//int* pa = &a;  //初始化
//	//int* p = NULL;   //  ((void *)0)  NULL - 用来初始化指针的/给指针赋值
//	//int* p = NULL;
//	
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;  //置位空指针
//	//*pa = 10;    //error    写入时发生冲突
//
//	if (pa != NULL)
//	{
//		*pa = 10;
//	}
//	return 0;
//}




//野指针 - 野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//1. 指针初始化
//2. 小心指针越界 
//3. 指针指向空间释放即使置NULL
//4. 指针使用之前检查有效性

////1. 指针未初始化
//int main()
//{
//    //int a;//局部变量不初始化，默认是随机值
//    int* p;//局部变量指针未初始化，默认为随机值
//    *p = 20;
//    return 0;
//}

////2. 指针越界访问
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//			//*p =i;
//			//p++;
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
//        *(p++) = i;
//    }
//    return 0;
//}

////3、指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;   //内存释放了
//   // int arr[10] = {0};
//   // return arr;
//}
//int main()
//{
//	int *p = test();    //可以接受地址，但是内存东西释放了
//	*p = 20;
//	return 0;
//}






//指针类型的简单应用
//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//数组名- 首元素的地址
//	char* p = arr;  //只改变了两个半整型 10个字节
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;    //将数组中每个元素都改为1
//	}
//
//	return 0;
//}



////指针 + -整数
////总结：指针的类型决定了指针向前或者向后走一步有多大（距离）。
////int*; p + 1-- > 4
////char*; p + 1-- > 1;
////double* p; p + 1-- > 8;
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	
//	printf("%p\n",&a);
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);   //+4
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);   //+1
//
//	return 0;
//}



////指针和指针类型
////指针的解引用
//int main()
//{
//
//	int a = 0x11223344;  //4字节
//	//int* pa = &a;
//	//*pa = 0;     //内存中操作了四个字节。
//
//	char* pc = &a;
//	*pc = 0;     //  内存中仅仅操作了一个字节。
//	//总结：指针类型决定了指针进行解引用操作的时候能够访问空间的大小。
//	//int*p; *p能够访问四个字节
//	//char*; *p能够访问一个字节
//	//double*; *p能够访问八个字节
//
//
//	//char* pc = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);   //从“int *”到“char *”的类型不兼容
//
//
//	//printf("%d\n",sizeof(char*));   //4
//	//printf("%d\n", sizeof(short*));   //4
//	//printf("%d\n", sizeof(int*));   //4
//	//printf("%d\n", sizeof(double*));    //4
//	return 0;
//}




////总结：
////指针是用来存放地址的，地址是唯一标示一块地址空间的。
////指针的大小在32位平台是4个字节，在64位平台是8个字节。
//int main()
//{
//	int a = 10;    //在内存中开辟一块空间
//	int* p = &a;    //指针变量（存放地址的变量）
//	//指针就是一个变量，变量里面存的是地址，也可以说指针就是地址。
//	//总结：指针就是变量，用来存放地址的变量。（存放在指针中的值都被当成地址处理）。
//	//32位  4Byte  ； 64位  8Byte
//	return 0;
//}