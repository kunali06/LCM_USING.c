void main(){
int x,y,i;

printf("enter two number\n");
scanf("%d %d",&x,&y);

for(i=1;i<=x*y;i++)
{
    if(i%x==0 && i%y==0)
    {
        printf("LCM = %d\n",i);
        break;
    }
}
getch();
}
