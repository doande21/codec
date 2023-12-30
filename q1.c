#include <stdio.h>
int main(){
int num1,num2,tong,hieu,tich,chia;
char op;
printf("nhap phep tinh tai day:");
scanf("%d%c%d",&num1,&op,&num2);
tong =num1+num2;
hieu =num1-num2;
tich =num1*num2;
chia =num1/num2;
switch(op){
	case '+':{
		printf("result:%d",tong);
		break;
	}
	case '-':{
		printf("result:%d",hieu);
		break;
	}
	case '*':{
		printf("result:%d",tich);
		break;
	}
	case '/':{
	if(num2!=0){	
		printf("result:%d",chia);
		}else if(num2==0){
		printf("result: invalid");
		}
		break;
	}
	
}
return 0;
}
