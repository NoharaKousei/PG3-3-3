#include "Enemy.h"
#include <stdio.h>

int main()
{

	Enemy* enemy = new Enemy();

	int input;

	while (true)
	{

		printf("0:�I��� 1:����");

		scanf_s("%d", &input);

		if (input == 0)break;

		enemy->Update();

		enemy->Draw();

	}

	delete enemy;

	return 0;

}
