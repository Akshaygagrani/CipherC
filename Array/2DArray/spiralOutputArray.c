// Print the given matrix in a spiral form

// Input :
// {
//     {1, 2, 3, 4},
//     {5, 6, 7, 8},
//     {9, 10, 11, 12},
//     {13, 14, 15, 16}
// }

// Explanation:
//     1 -> 2 -> 3 -> 4

// Output:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10


// Steps to solve the problem:
// - Initialising the required variables.
// - Run a loop unitl all the spirals(squares) are printed
// - For each outer loop print the elements of the square formed in the CW manner
//     - Print the top row: i.e Print the kth row from collumn l to n; and increase the count of k
//     - Print the last column: i.e Print the last column or n-1th column from row index(k to m) and 
//         decrease the count of n
//     - Print the bottom row: 
    
#include <stdio.h>

int main()
{
    
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int R =4;
    int C = 4;
    
    int i, k=0, l=0, m=R, n=C ;
    /*
        k - Starting row index
        m - Ending row index
        
        l - Starting column index
        n - ending column index
    */
    
    while(k<m && l<n){
        // Print the first row, from the remainging matrix
        for(i=l; i<n; i++){
            printf(" %d ", arr[k][i]);
        }
        
        k++;
        
        // Print the last column, from the remaning matrix
        for(i=k; i<m; i++){
            printf(" %d ", arr[i][n-1]);
        }
        n--;
        
        if(k<m){
            // Print the last row, from the remaining matrix
            for(i = n-1; i>= l; i--){
                printf(" %d ", arr[m-1][i] );
            }
            m--;
        }
        
        
        
        if(l<n){
            // Print the first column, from the remaining matrix
            for(i = m-1; i>=k; i--){
                printf( " %d ", arr[i][l]);
                
            }
            
            l++;
        }
        
        
    }

    return 0;
}













