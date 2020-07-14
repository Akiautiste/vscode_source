int main()
{
	char  str[128];
	printf("请输入什么呢：\n");
	scanf("%s", str);
	printf("您输入在这：%s\n", str);
	printf("%s", str[0]);
	return 0;
}