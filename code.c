// #include <stdio.h>
// int main()
// {
//     int num = 25;
//     printf("value of variable n: %d\n", num);
//     printf("memory address of variable n: %p\n", &num);
// }

// #include <stdio.h>
// int main()
// {
//   int *ptr = NULL; //null pointer
//   printf("The value inside variable ptr is: %i",(int) ptr);
//   return 0;
// }

// #include<stdlib.h>
// #include <stdio.h>

// int main()
// {
//     int x = 4;
//     float y = 5.5;

//     //A void pointer
//     void *ptr;

//     ptr = &x;

//     /* (int*)ptr : type casting of void to integer, in order to deference the
//     value */
//     printf("Integer variable is = %d", *((int*) ptr));

//     ptr = &y;

//     /*(float*)ptr : type casting of void to float, in order to deference the */


//     printf("\nFloat variable is= %f", *((float*) ptr));

//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//   int *p = NULL;  /* wild pointer */

//  /* Some unknown memory location is being corrupted.
//  This should never be done. */

//   *p = 12;
// }


// #include <stdio.h>
// int main()
// {
//   int  *p;       /* wild pointer */
//   int a = 10;

//   p = &a;      /* p is not a wild pointer now*/
//   *p = 12;    /* This is fine. Value of a is changed */
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int *p = (int *)malloc(sizeof(int));
//   *p = 12; /* This is fine (assuming malloc doesn't return NULL) */
// }

// // De-allocating a memory pointed by ptr cause dangling pointer
// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
//     int *ptr = (int *)malloc(sizeof(int));

//     // After below free call, ptr becomes a dangling pointer
//     free(ptr);

//     // Now it’s no more a dangling pointer
//     ptr = NULL;
// }

// #include <stdio.h>
// int main()
// {
//     int num = 25;
//     printf("value of variable n: %d\n", num);
//     printf("memory address of variable n: %p\n", &num);
// }

// #include <stdio.h>
// int main()
// {
//   int *ptr = NULL; //null pointer
//   printf("The value inside variable ptr is: %i",(int) ptr);
//   return 0;
// }

// #include<stdlib.h>
// #include <stdio.h>

// int main()
// {
//     int x = 4;
//     float y = 5.5;

//     //A void pointer
//     void *ptr;

//     ptr = &x;

//     /* (int*)ptr : type casting of void to integer, in order to deference the
//     value */
//     printf("Integer variable is = %d", *((int*) ptr));

//     ptr = &y;

//     /*(float*)ptr : type casting of void to float, in order to deference the */


//     printf("\nFloat variable is= %f", *((float*) ptr));

//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//   int *p = NULL;  /* wild pointer */

//  /* Some unknown memory location is being corrupted.
//  This should never be done. */

//   *p = 12;
// }


// #include <stdio.h>
// int main()
// {
//   int  *p;       /* wild pointer */
//   int a = 10;

//   p = &a;      /* p is not a wild pointer now*/
//   *p = 12;    /* This is fine. Value of a is changed */
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int *p = (int *)malloc(sizeof(int));
//   *p = 12; /* This is fine (assuming malloc doesn't return NULL) */
// }

// // De-allocating a memory pointed by ptr cause dangling pointer
// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
//     int *ptr = (int *)malloc(sizeof(int));

//     // After below free call, ptr becomes a dangling pointer
//     free(ptr);

//     // Now it’s no more a dangling pointer
//     ptr = NULL;
// }

/* The pointer pointing to local variable becomes dangling when local variable is not static.*/

// #include<stdio.h>
// int *fun()
// {
//     /* x is local variable and goes out of  scope after
//     an execution of fun() is over. */
//     int x = 5;

//     return &x;
// }

// int main()
// {
//     int *p = fun();
//     /* to clear (or flush) the output buffer and move the buffered data to
//     console or disk */
//     fflush(stdin);

//     /* p points to something which is not valid anymore */
//     printf("%d", *p);
//     return 0;
// }

/* The pointer to local variable doesn't become dangling when local variable is static. */

// #include<stdio.h>

// int *test()
// {
//     /* x now has scope throughout the program */
//     static int x = 5;

//     return &x;
// }

// int main()
// {
//     int *p = test();

//     fflush(stdin);

//     /* Not a dangling pointer as it points to static variable. */
//     printf("%d\n",*p);
// }


#include <stdio.h>

void swap(int *n1, int *n2);

int main()
{
    int num1 = 5, num2 = 10;

    // address of num1 and num2 is passed

    swap(&num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);
    return 0;
}

void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
