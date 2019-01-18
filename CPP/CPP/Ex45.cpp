#include <stdio.h>

struct ProductInfo
{
	int num;
	char name[100];
	int cost;
};

void productSale(ProductInfo *p, int percent) {
	p->cost -= p->cost * percent / 100;	//���ΰ� = ���� - ���� * ���η�/100
}

int main() {
	ProductInfo myProduct{ 4797283,"apple", 2000 };

	productSale(&myProduct, 10);

	printf("production number : %d\n", myProduct.num); 
	printf("production name : %s\n", myProduct.name);
	printf("production cost : %d\n", myProduct.cost);
}