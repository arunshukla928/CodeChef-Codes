/*
Xenny and Yana were very keen to celebrate Valentine's Day at their home. To make preparations for the celebration, they listed down N tasks that they had to complete.
To complete the ith task, Xenny takes Xi seconds and Yana takes Yi seconds. In order to minimize the disparity in tasks performed, they decide to do the tasks alternatingly. If Xenny did the 1st task, then Yana would just wait and watch him until he completes the task. After that, Yana would start the 2nd task, and while she does her task, Xenny would just watch her. He would start the 3rd task only after her completion, and they would keep doing tasks alternatingly uptil the Nth task. They could also do tasks in the other order - that is, Yana could do the 1st task, after that Xenny could do the 2nd task, and so on. Their eventual goal was to minimize the total time taken by them to complete all N tasks.
Please help them find the minimum total time they would take to complete all N tasks.
Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each testcase contains a positive integer N - the number of tasks to be completed.
The second line contains N space-separated positive integers representing the time taken in seconds by Xenny to complete the ith task.
The third line contains N space-separated positive integers representing the time taken in seconds by Yana to complete the ith task.
Output
For each testcase, print a single line containing the minimum total time in seconds Xenny and Yana would take to complete the tasks.
Constraints
Subtask 1: 40 points
    1 ≤ T ≤ 10
    1 ≤ N ≤ 3
    1 ≤ Xi, Yi ≤ 105
Subtask 2: 60 points
    1 ≤ T ≤ 10
    1 ≤ N ≤ 2*104
    1 ≤ Xi, Yi ≤ 105
Sample Testcase
Input:
1
3
2 1 2
3 2 1
Output:
5
Explanation
Let's say Xenny does the 1st task. Then Yana would do the 2nd task and Xenny would do the 3rd task. Hence, the total time taken would be: 2 + 2 + 2 = 6 seconds.
Another possibility is that Yana does the 1st task, Xenny does the 2nd task and then Yana does the 3rd task. The total time taken in this case would be 5 seconds.
Hence, the minimum total time taken would be 5 seconds. 
*
*/
#include<stdio.h>
int main(){
   long long test,N,i,j,a[100000],b[100000],sum1=0,sum2=0,sum3=0,sum4=0; 
   scanf("%lld",&test);
   while(test--){
       sum1=0;
       sum2=0;
       sum3=0;
       sum4=0;
       scanf("%lld",&N);
       for(i=0;i<N;i++){
                  scanf("%lld",&a[i]);
               if(i%2==0){
                          sum1=sum1+a[i];
                }
              else{ 
                            sum2=sum2+a[i];
                   }
       }
        for(i=0;i<N;i++){
                  scanf("%lld",&b[i]);
               if(i%2==0){
                          sum3=sum3+b[i];
                }
              else{ 
                            sum4=sum4+b[i];
                   }
       }
// Sum of Sum1 + Sum4 && Sum2+Sum3
           if(sum1+sum4 < sum2+sum3){
                   printf("%lld\n",sum1+sum4);
       }
          else{
                        printf("%lld\n",sum2+sum3);
             }
   }  
}
