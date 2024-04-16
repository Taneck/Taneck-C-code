#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <stdbool.h>
#include <locale.h>

//int main()
//{
//	system("mode con cols=100 lines=30");
//	system("title Snake");
//	//getchar();
//	system("pause");
//	return 0;
//}

//int main()
//{
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	CONSOLE_CURSOR_INFO cursor_info = { 0 };
//
//	GetConsoleCursorInfo(houtput, &cursor_info);
//
//	cursor_info.dwSize = 50;
//
//	SetConsoleCursorInfo(houtput, &cursor_info);
//
//	system("pause");
//
//	return 0;
//}


//int main()
//{
//	//获得标准输出设备的句柄
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//	
//	//定位光标位置
//	COORD pos = { 10,20 };
//	SetConsoleCursorPosition(houtput, pos);
//
//	printf("hello\n");
//	//getchar();
//	//system("pause");
//
//	return 0;
//}

//void set_pos(short x,short y)
//{
//	//获得标准输出设备的句柄
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	//定位光标位置
//	COORD pos = { 10,20 };
//	SetConsoleCursorPosition(houtput, pos);
//}

//int main()
//{
//	set_pos(10, 20);
//
//	printf("hello\n");
//	//getchar();
//	//system("pause");
//
//	return 0;
//}

//#define KEY_PRESS(vk) ((GetAsyncKeyState(vk) & 1) ? 1 : 0)
//int main()
//{
//	while (1)
//	{
//		if (KEY_PRESS(0x30))//0
//		{
//			printf("0\n");
//		}
//		if (KEY_PRESS(0x31))//1
//		{
//			printf("1\n");
//		}
//		////etc.
//	}
//	return 0;
//}

//●★
//★?

//int main()
//{
//	setlocale(LC_ALL, "");
//	char a = 'a';
//	char b = 'b';
//	printf("%c%c\n", a, b);
//
//	wchar_t wc1 = L'比';
//	wchar_t wc2 = L'特';
//	wprintf(L"%lc\n", wc1);
//	wprintf(L"%lc\n", wc2);
//	wprintf(L"%lc\n", '?');
//	return 0;
//}