#include <stdio.h>

struct ProductInfo
{
	int num;
	char name[100];
	int cost;
};

int main() {
	ProductInfo myProduct{4797283,"apple", 2000};
	
	ProductInfo *ptr_product = &myProduct;

	printf("production number : %d\n" , ptr_product->num); //(*ptr_product).num
	printf("production name : %s\n", ptr_product->name);
	printf("production cost : %d\n", ptr_product->cost);
}