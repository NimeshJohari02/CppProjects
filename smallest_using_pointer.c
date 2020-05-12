 #include<stdio.h>
main()
{
        int i,n;
        printf("\nHow many elements?: ");
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {       printf("Element %d: ",i+1);
                scanf("%d",&a[i]);
        }
        printf("\nCreating pointer now...");
        int *p,small;
        p = a;
        small=*p;
        i=1;
        while(i<n)
        {
                if(small > *p)
                        small=*p;
                i++;
                p++;
        }
        printf("\nSmallest number: %d \n",small);
}



