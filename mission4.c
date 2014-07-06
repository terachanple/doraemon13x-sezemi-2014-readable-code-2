#include<stdio.h>
#include<stdlib.h>
/*仕様３：データファイルに3つのデータを保存できること*/
int main(void){
	int i;
	char name_recipe[20];
	FILE *fp;

	/*ファイルオープン*/
	if ((fp = fopen("recipe_data.txt", "w")) == NULL) {
		printf("file open error!!\n");
		exit(EXIT_FAILURE);	/* エラーの場合は異常終了する */
	}

	/*レシピ名を受け付け、そのままファイルに書き込む*/
	printf("レシピ名を入力してください。\n");

	for(i=0;i<3;i++){
		printf("Recipe%d:",i+1);
		scanf("%s",name_recipe);
		fprintf(fp,"%s\n",name_recipe);
	}

	/*ファイルクローズ*/
	fclose(fp);
	return 0;
}
