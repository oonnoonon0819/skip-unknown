#include<stdio.h>
int main(void)
{
	int a, surplus;

	printf("あなたはこの3つの才能の中から1つだけ得れるとしたらどれを選びますか？番号を入力してください。あなたの人間性がわかります 1.お金持ちになれる　２．IQ200になれる　３．容姿端麗になれる　: ");
	scanf_s("%d", &a);


	if (a==1)
	{
		printf("あなたは大をしても小で流す、ケチなタイプです。家から石油が出るといいですね");
	}

	else if(a==2)
	{
		printf("あなたはスタバでマックを開いて意味のない時間を過ごすタイプです。1日26時間勉強してください");
	}
	else if (a == 3)
	{
		printf("あなたは白雪姫の暗殺をたくらむ魔女タイプです。高須クリニックに行ってください");
	}
	return 0;



}