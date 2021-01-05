# include<stdio.h>
# include<sys/types.h>
# include<unistd.h>
//ʹ��utf-8����
int main()
{ 
printf("the project was done by kuang jie long + 18040031009\n");
printf("😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️                        😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️                😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️                😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️                😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️                        😇️😇️\n");
printf("😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");

  int pid1,pid2;
  printf("I am father!\n"); //���������
  if ((pid1 = fork())<0)
  {
    printf("Child1 fail create!\n"); //���fork����ֵС��0����ʾ�����ӽ���ʧ��
    return 1;
  }
  else if (pid1 == 0)
  {
    if ((pid2 = fork())<0))//�����༶�ӽ���
    {
      printf("c fail create!\n");//���fork<0�򴴽�ʧ��
      return 1;
    }
    else if (pid2 == 0)//fork�ķ���ֵΪ1���򴴽��ɹ�
    {
      printf("c\n");
      return 0;
    }
    else
    {
      printf("I am son!\n");//�ӽ��̴����ɹ�
      return 0;
    }
  }

}
