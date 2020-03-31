
#include<stdio.h>
int main()
{
int i, p[10],arrival_time[10],Burst_time[10],No_of_process,priority[10];	//declare neccesary varaible
printf("\nEnter Total Number of Processes in CPU:"); //asking the user to enter number of process
      
	  scanf("%d", &No_of_process); 
      
	  
      for(i = 0; i<No_of_process; i++) 
      {
	    p[i]=i+1;		//process ID
	   
	    priority[i]=0;
            printf("\nEnter total Details of Process[%d]\n", i + 1);
            printf("Arrival Time:\t");
            scanf("%d", &arrival_time[i]);
            printf("Burst Time:\t");
            scanf("%d", &Burst_time[i]); 
            
      }
      for(i=0;i<No_of_process;i++)
      {
      	printf("\nProcess[%d]\t\t%d\t\t %d\t\t %d", p[i], Burst_time[i],arrival_time[i] ,priority[i]); //printing table of above entered data
	  }
}
