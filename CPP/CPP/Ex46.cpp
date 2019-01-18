#include <stdio.h>

struct ProductInfo
{
	int num;
	char name[100];
	int cost;
};

void productSwap(ProductInfo *a, ProductInfo *b) {
	
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;

}

int main() {
	ProductInfo myProduct{ 4797283,"apple", 2000 };
	ProductInfo otherProduct{ 4797284,"samsung", 1000 };

	productSwap(&myProduct, &otherProduct);


	printf("production number : %d\n", myProduct.num);
	printf("production name : %s\n", myProduct.name);
	printf("production cost : %d\n", myProduct.cost);
}