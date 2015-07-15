// file: kadai321.c
// ウィンドウプロシージャ
// 2015.7.15 author: 1J12F147-4　Kazuki Bandai

#include <windows.h>

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM Ip){

  switch(msg){
    case WM_DESTROY:
    MessageBox(hwnd, TEXT("正常に終了しました"),
      TEXT("メッセージボックス"), MB_ICONINFORMATION);
    PostQuitMessage(0);
    return 0;
  }
  return DefWindowProc(hwnd, msg, wp, lp);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR IpCmdLine, int nCmdShow){
  HWND hwnd;
  MSG msg;
  WNDCLASS winc;

  winc.style         = CS_HREDRAW | CS_VREDRAW;
  winc.IpfnWndProc   = WndProc;
  winc.cbClsExtra    = winc.cbClsExtra = 0;
  winc.hInstance     = hInstance;
  winc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
  winc.hCursor       = LoadCursor(NULL, IDC_ARROW);
  winc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
  winc.IpszMenuName  = NULL;
  winc.IpszClassName = TEXT("Default Class Name");

  if(!RegisterClass(&winc)){ return 0;}

  hwnd = CreateWindow(
    TEXT("Default Class Name"),
    TEXT("CreateWindow関数で表示"),
    WS_OVERAPPENDWINDOW | WS_VISIBLE,
    100,100,200,200,NULL,NULL,
    hInstance,NULL
    );
  if(hwnd == NULL){return 0;}

  while(GetMessage(&msg,NULL,0,0)) {
      DespatchMessage(&msg);
  }
  return msg.wParam;
}