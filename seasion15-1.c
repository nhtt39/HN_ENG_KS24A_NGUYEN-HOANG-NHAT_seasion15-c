	#include <stdio.h>
	#include <string.h>
	int main(){

	char str[100]="abcd23#@";
	int size=strlen(str);
	int chu=0;
	int so=0;
	int kyTu=0;
	for (int i=0;i<size;i++){
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
			chu++;
		}else if(str[i]>='0' && str[i]<='9'){
			so++;
		}else{
			kyTu++;
		}
		}printf("chu co trong chuoi la %d\n",chu);
		printf("so co trong chuoi la %d\n",so);
		printf("ky tu dac biet co trong chuoi la %d\n",kyTu);
	
	return 0;
}
