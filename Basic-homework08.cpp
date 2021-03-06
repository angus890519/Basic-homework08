/* 計算機概論實務-基本練習作業-作業8*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/08 10:00*/  
#include <stdio.h> //函示庫
#include <stdlib.h> //函示庫
int main(void){
	int factor=2;  //從2開始除，判斷是否為質數，factor為因數 
	int number;    //1-n個質數 
	printf("請輸入1-n的質數，n:");//顯示至螢幕 
	scanf("%d、",&number);           //key in 
	for(int i=2;i<=number;i++){      //執行2-n的循環 
		if(i==2){               //2是質數 
		    printf("1-%d範圍的質數有：",number); 
			printf("%d",i);
			printf(" ");
			continue;
		}
		while(i%factor!=0&&factor<=i){  //當i%factor!=0及factor<=0都成立時循環 
			factor+=1;    //factor+1			
			if(factor/i==1){  //因數只有本身為質數 
				printf("%d",i);
				printf(" ");
				factor=2;
				break;
			} 
			if(i%factor==0){ //因數有其他數字不為質數 
				factor=2;
				break;
			}	
		}
	}
	system("pause");//暫停視窗 
	return 0;  //回傳值為0 
}
