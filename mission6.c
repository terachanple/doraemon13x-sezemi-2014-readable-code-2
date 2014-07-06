#include<stdio.h>
#include<stdlib.h>

int main(void){
	int	 num_id;	/*num_idはレシピの識別子*/
	char	 filename[20];
	FILE	*fp;


	/*説明文*/
	printf("レシピ名を登録します。出力先を入力してください\n");
	printf("出力先:");
	scanf("%s",filename);
	printf("レシピ名を入力してください。\n");

	/*ファイルオープン
	  ファイル名を入力する前にオープンするとファイル名が意味不明な文字列になる
	 */
	if ((fp = fopen(filename, "w")) == NULL) {
		printf("file open error!!\n");
		exit(EXIT_FAILURE);	/* エラーの場合は異常終了する */
	}

	/*レシピ名を受け付け、そのままファイルに書き込む*/
	for(num_id=1;num_id<4;num_id++){
		printf("Recipe%d:",num_id);
		scanf("%s",filename);
		fprintf(fp,"%d:%s\n",num_id,filename);
	}

	/*ファイルクローズ*/
	fclose(fp);
	return 0;
}
