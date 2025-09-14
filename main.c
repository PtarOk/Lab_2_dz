#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	printf("В магазине продаётся костюмная ткань. Её цена B рублей за кв. метр.\n");
	printf("Напишите программу, которая подсчитает и выведет на экран стоимость\n");
	printf("куска этой ткани длиной X м и шириной 80 см.\n\n");

	int price, length, width, sum;
	price = 480;
	length = 3;
	width = 80;
	sum = length * (width * 0.01) * price;
	printf("Дано:\nЦена ткани - 480 руб/кв.м.\nДлина тк. - 3 м\nЩирина тк. - 80 см (0.8 м)\n- - - - -\n");
	printf("Решение:\nСтоимость = (%1.0f * %2.1f) * %2.0f = %2.0f (руб.)\n", length * 1., width * 0.01, price * 1., sum);
	printf("- - - - -\nОтвет: %2.0f рублей.\n\n\n", sum);

}