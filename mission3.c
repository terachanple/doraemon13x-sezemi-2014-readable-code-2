#include<stdio.h>
#include<stdlib.h>
/*仕様３：レシピデータを別ファイルに分離すること*/
int main(void){
	FILE *fp;
	/*ファイルオープン*/
	if ((fp = fopen("recipe_data.txt", "w")) == NULL) {
		printf("file open error!!\n");
		exit(EXIT_FAILURE);	/* エラーの場合は異常終了する */
	}
	fprintf(fp,"オムライス\n");
	/*ファイルクローズ*/
	fclose(fp);
	return 0;
}
