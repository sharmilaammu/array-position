
// GETTING INPUT


#include <stdio.h>
 
void main()
{
    int arr[100] = { 0 };
    int i, x, pos, n = 10;

    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
 
    for (i = 0; i < n; i++)
        printf("%d\n ", arr[i]);
	
    printf("Enter the possition:");
    scanf("%d", & pos);
    
    printf("Enter the insert value:");
    scanf("%d", & x);

    n++;
    
    for (i = n-1; i >= pos; i--)
    arr[i] = arr[i - 1];

    arr[pos - 1] = x;
 
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);

}


/*

#include <stdio.h>
 
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n = 10;

    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
 
    for (i = 0; i < n; i++)
        printf("%d\n ", arr[i]);

    x = 50;
 
    pos = 5;
 
    n++;
 
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = x;
 
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}

*/
