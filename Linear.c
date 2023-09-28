
int main(){
	int sc[10] ,i,val,occ=0;
	
	printf("enter the elements you want : \n ");//you will enter the numbers
	for(i=0;i<10;i++)
	scanf("%d",&sc[i]);//numbers will be taken 
	
	printf("enter the element you want to search : ");//you will give the input 
	scanf("%d" ,&val);
	
	for(i=0;i<10;i++){
		if(sc[i]==val){//it will search the given search element to the given list of elements
			printf("number is in %d : ",i+1);
			occ++;
			break;
		}
	}
	if(occ==0){
		printf("number not there ");}
	else{
	printf("the number of occurences are : %d",occ);
		
	}
	getch();
}