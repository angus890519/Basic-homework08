/* �p������׹��-�򥻽m�ߧ@�~-�@�~8*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/08 10:00*/  
#include <stdio.h> //��ܮw
#include <stdlib.h> //��ܮw
int main(void){
	int factor=2;  //�q2�}�l���A�P�_�O�_����ơAfactor���]�� 
	int number;    //1-n�ӽ�� 
	printf("�п�J1-n����ơAn:");//��ܦܿù� 
	scanf("%d�B",&number);           //key in 
	for(int i=2;i<=number;i++){      //����2-n���`�� 
		if(i==2){               //2�O��� 
		    printf("1-%d�d�򪺽�Ʀ��G",number); 
			printf("%d",i);
			printf(" ");
			continue;
		}
		while(i%factor!=0&&factor<=i){  //��i%factor!=0��factor<=0�����߮ɴ`�� 
			factor+=1;    //factor+1			
			if(factor/i==1){  //�]�ƥu����������� 
				printf("%d",i);
				printf(" ");
				factor=2;
				break;
			} 
			if(i%factor==0){ //�]�Ʀ���L�Ʀr������� 
				factor=2;
				break;
			}	
		}
	}
	system("pause");//�Ȱ����� 
	return 0;  //�^�ǭȬ�0 
}
