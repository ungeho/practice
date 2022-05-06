#include <stdio.h>
#include <Windows.h>

/*
MinGWでWindows.hを使う時はコンパイルオプション -mwindows を追加する
  gcc multithreading.c -mwindows
*/


int a;
CRITICAL_SECTION cs; /* ロックの機能 */

/* スレッド1 */
DWORD WINAPI Thread1(LPVOID param) {
  //共通の変数にアクセスする場合、ロックすることで他のタスクがアクセスできないように出来る。
  //mutex:他のタスクからのアクセスを禁止し、ロックを行ったタスクのみがロックの解除を行える。
  //semaphore：上限数を設定し、上限数を超えるタスクが同時にアクセスで出来ないようにする。
  EnterCriticalSection(&cs); /* ロック */
  if (a == 0) {
    /* 0が表示されるはず */
    printf("%d", a);
  }
  LeaveCriticalSection(&cs); /* ロック解除 */
  return TRUE;
}

/* スレッド2 */
DWORD WINAPI Thread2(LPVOID param)
{
  EnterCriticalSection(&cs); /* ロック */
  a = 1;
  LeaveCriticalSection(&cs); /* ロック解除 */
  return TRUE;
}

int main(void) {
  a = 0;
  InitializeCriticalSection(&cs); /* ロック機能の準備 */
  CreateThread(NULL, 0, Thread1, Thread1, 0, NULL); /* スレッド1を開始 */
  CreateThread(NULL, 0, Thread2, Thread2, 0, NULL); /* スレッド2を開始 */
  return 0;
}
