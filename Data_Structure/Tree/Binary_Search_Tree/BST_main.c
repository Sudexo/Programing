#include "BST_Utility.h"

int main ()
{
    Tree * root = NULL;
    int arr[] = {8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15, 17, 0};

    
    root = Create_Tree ( arr, 15 );

    printf ("\n");
    InOrder_Recursive ( root );
    printf ("\n");

    root = Delete_Node ( root, 12 );

    printf ("\n");
    InOrder_Recursive ( root );
    printf ("\n");
    printf ("\nHeight_Tree = [%d]\n", Height_Tree (root) );
    printf ("\n");
    printf ("\n");
    printf ("\n");
    Print_Tree ( root );

    return 0;

}
