int main()
{
    int a[10];
    input(a,10);

}
void input(int b[],int n)
{
    int i;
    printf("Enter %d numbers",n);
    for(i=0;i<n;i++)
        scan("%d",&b[i]);
}  in this program "int b[]" is receiving "a" but what actually it is receiving from a? what is happening inside actually!!