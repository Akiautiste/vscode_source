#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main() {
    char ch;
    int i = 0;
    //ѭ��������ֱ����Esc���˳�
    while (1) {
        if (_kbhit()) {  //��⻺�������Ƿ�������
            ch = _getch();
            printf("%c\n",ch);//���������е��������ַ�����ʽ����
            if (ch == 27) {
                break;
            }
        }
       printf("Number: %d\n", ++i);
       Sleep(10);  //��ͣ1��
    }
    return 0;
}