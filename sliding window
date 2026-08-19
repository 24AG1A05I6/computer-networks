#include<stdio.h>
int main()
{
int windowsize,totalframes,i;
int  frames[windowsize];
printf("enter window size:");
scanf("%d",&windowsize);
printf("\n enter no of frames totransmit:");
scanf("%d",&totalframes);
printf("\n enter %d frames:",totalframes);
for(i=1;i<=totalframes;i++)
{
scanf("%d",&frames[i]);
}
printf("\n sliding window protocol simulation (assuming no frame loss/complex)\n");
printf("sender sends %d frames at a time and waits for acknowledgement \n\n",windowsize);
for(i=1;i<=totalframes;i++){
printf("%d",frames[i]);
if(i%windowsize==0){
printf("\n acknowledgement of above frames is received by sende\n\n");
}
}
if(totalframes % windowsize!=0){
printf("\n acknowledgement of above frames is received by sender\n");
}
return 0;
}
