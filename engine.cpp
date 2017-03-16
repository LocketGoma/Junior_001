#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#pragma warning(disable:4996) // use VS

typedef struct student {
	char name[11] = {};
	int pot;

}student;

int main() {
	int input_loop = 1;
	int inner_loop = 1;
	FILE *fp;

	student temp;
	strcpy(temp.name,"james");
	temp.pot = 19;


	fp = fopen("answer.txt","w+");
	//assert(fp != NULL);
	if (fp == NULL) {
		printf("STOP");
		assert(true);
	}
	else {
		printf("Loop 회수 지정 : ");
		scanf("%d\n", &input_loop);
		if (input_loop < 1) input_loop = 1;
		fseek(fp, 0, SEEK_SET);
		while (inner_loop <= input_loop) {
			// 파일 쓰기 반복
			fprintf(fp, "%s,%d\n",temp.name,temp.pot);			
			//fprintf(fp, "hello\n");
			inner_loop++;
		}

	}
	fflush(fp);
	fclose(fp);

	int a;
	printf("hello");
	scanf("%d", &a);
}
student random_select() { // 랜덤 조~립
	student temp;
	int sel_num;

	switch (rand() % 4) {
	case 0: {

		break;
	}
	case 1: {

		break;
	}
	case 2: {

		break;
	}
	case 3: {

		break;
	}
	default: {

		}
	}
	return temp;
}