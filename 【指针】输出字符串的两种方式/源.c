#include <stdio.h>
/*void main()
{
	char string[] = "I love U";
	printf("%s\n", string);

}
*/
/*
00F71842  mov         eax, dword ptr[string "I love U" (0F77B30h)]
00F71847  mov         dword ptr[string], eax
00F7184A  mov         ecx, dword ptr ds : [0F77B34h]
00F71850  mov         dword ptr[ebp - 10h], ecx
00F71853  mov         dl, byte ptr ds : [0F77B38h]
00F71859  mov         byte ptr[ebp - 0Ch], dl
*/
void main()
{
	char *string = "I love U";
	printf("%s\n", string);

}
//00B31838  mov         dword ptr[string], offset string "I love U" (0B37B30h)