void bubble_sort(int a[], int n)
{
    int i,j,k,temp;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void main()
{
    int a[20],n,i;
    clrscr();
    printf("How many elements you want to enter\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    bubble_sort(a,n);
    printf("After sorting elements are\n");
    for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
