#include <windows.h>
#include <dos.h>
#include <conio.h>
#include <tchar.h>
#include<math.h>

#pragma comment(lib, "Winmm.lib")

int j;
double g = 0;

int static movex, movey;
int c1, c2;
int k;
int cx, cy;

int up = 0, down = 0, r = 0, l = 0, yaxe = 0, xaxe = 0;

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	static TCHAR szAppName[] = TEXT("Primul program WINAPI.");
	HWND         hwnd;
	MSG          msg;
	WNDCLASS     wndclass;

	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpfnWndProc = WndProc;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(NULL, IDI_INFORMATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(255, 255, 220));


	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = szAppName;




	if (!RegisterClass(&wndclass))
	{
		MessageBox(NULL, TEXT("Acest program necesita Windows NT!"),
			szAppName, MB_ICONERROR);
		return 0;
	}

	hwnd = CreateWindow(szAppName,                  // window class name
		TEXT("Lab4_Begal"),  // window caption
		WS_OVERLAPPEDWINDOW,// window style

		CW_USEDEFAULT,              // initial x position
		CW_USEDEFAULT,              // initial y position
		1000,              // initial x size
		1000,              // initial y size
		NULL,                       // parent window handle
		NULL,                       // window menu handle
		hInstance,                  // program instance handle
		NULL);                     // creation parameters

	ShowWindow(hwnd, iCmdShow);
	UpdateWindow(hwnd);

	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

void draw(HDC hdc) {

	POINT pt;
	HBRUSH H1, H2, H3, H4, H5, H6;
	H1 = CreateSolidBrush(RGB(255, 238, 0));
	H2 = CreateSolidBrush(RGB(45, 45, 40));
	H3 = CreateSolidBrush(RGB(255, 238, 0));
	H4 = CreateSolidBrush(RGB(255, 238, 0));
	H5 = CreateSolidBrush(RGB(255, 238, 0));
	H6 = CreateSolidBrush(RGB(198, 9, 9));

	
	SelectObject(hdc,(HBRUSH) CreateSolidBrush(RGB(21, 247, 243)));
	Rectangle(hdc, 0, 0, 1000, 800);

	SelectObject(hdc, CreatePen(4, 4, RGB(255, 238, 0)));
	SelectObject(hdc, H5);
	Ellipse(hdc, 100 + j, 650 + k, 250 + j, 800 + k);
	SelectObject(hdc, H3);
	Ellipse(hdc, 250 + j, 720 + k, 350 + j, 800 + k);
	SelectObject(hdc, H1);

	SelectObject(hdc, H1);
	//SelectObject(hdc, H1);

	MoveToEx(hdc, 305 + j, 825 + k, &pt);
	MoveToEx(hdc, 305 + j, 825 + k, &pt);
	MoveToEx(hdc, 305 + j, 825 + k, &pt);
	Ellipse(hdc, 50 + j, 720 + k, 350 + j, 950 + k);
	MoveToEx(hdc, 305 + j, 825 + k, &pt);
	SelectObject(hdc, H2);
	Ellipse(hdc, 55 + j, 720 + k, 350 + j, 950 + k);
	MoveToEx(hdc, 145 + j, 825 + k, &pt);
	MoveToEx(hdc, 145+j, 825+k, &pt);
	MoveToEx(hdc, 145 + j, 825 + k, &pt);
	MoveToEx(hdc, 145 + j, 825 + k, &pt);


}



LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	HDC         hdc;
	PAINTSTRUCT ps;
	RECT        rect;
	static double cxClient, cyClient, cxMovie;
	int x, y;
	POINT pt[4], pt_arr[1];
	HPEN hNewPen;



	switch (message)
	{
	
	case WM_SIZE:
		cxClient = LOWORD(lParam);
		c1 = cxClient / 2;
		cyClient = HIWORD(lParam);
		c2 = cyClient / 2;
		return 0;

	case WM_KEYDOWN:
		switch (wParam) {
		case VK_UP:
			hdc = GetDC(hwnd);
			k = k - 5;
			draw(hdc);
			ReleaseDC(hwnd, hdc);
			return 0;


		case VK_DOWN:
			hdc = GetDC(hwnd);
			k = k + 5;
			draw(hdc);
			ReleaseDC(hwnd, hdc);
			return 0;

		case VK_LEFT:
			hdc = GetDC(hwnd);
			j = j - 5;
			g = g - 0.05;
			draw(hdc);
			ReleaseDC(hwnd, hdc);
			return 0;
		case VK_RIGHT:
			hdc = GetDC(hwnd);
			j = j + 5;
			g = g + 0.05;
			draw(hdc);
			ReleaseDC(hwnd, hdc);
			return 0;

		case 'R':
			hdc = GetDC(hwnd);
			g = g + 0.05;
			draw(hdc);
			ReleaseDC(hwnd, hdc);
			return 0;
		case 'L':
			hdc = GetDC(hwnd);
			g = g - 0.05;
			draw(hdc);
			ReleaseDC(hwnd, hdc);
			return 0;


		}
		
		case WM_CREATE:
			pt[0].x = 120;
			pt[0].y = 460;
			pt[1].x = 160;
			pt[1].y = 30;
			pt[2].x = 580;
			pt[2].y = 410;
			pt[3].x = 600;
			pt[3].y = 30;

			hNewPen = CreatePen(PS_DOT, 2, RGB(38, 82, 153));
			break;
			
	
	
	case WM_PAINT:
		hdc = BeginPaint(hwnd, &ps);
		draw(hdc);


		
		EndPaint(hwnd, &ps);
		return 0;
	






		EndPaint(hwnd, &ps);
		return 0;

	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hwnd, message, wParam, lParam);
} 

