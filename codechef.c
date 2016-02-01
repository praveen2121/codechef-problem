#include<conio.h>
#include<stdio.h>
int main(){
	int t,i,s,d,e=0;
	printf("Enter no. of test cases");
	scanf("%d",&t);
		for(i=0;i<t;i++){	
printf("\nEnter value of source and destination\n");
scanf("%d %d",&s ,&d);		
				while(s!=d){
						if(s%2!=0){
				if(s==2||s==1)
			{
				while(s!=d){
					s=s*2;	
				e++;
					}
			break;
		}
			else{
							s=(s-1)/2;
				e++;
			}
			
			}			
			else{
				
			if(s==2||s==1||(d%s)==0)
			{
			
			while(s!=d){
				
				
				s=s*2;
				
		e++;
			}
			
			
			break;
			
			}
			
			else{
				
				
				
				s=s/2;
				
				e++;
			}
			
			
		}
		
		
		
	
		
	}
	
	printf(" no. of steps is %d",e);	
	e=0;
}
		
	getch();
	return 0;
}
