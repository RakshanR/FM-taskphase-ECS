#include <stdio.h>
struct Product {
    int product_id;
    char product_name[50];
    int quantity;
    float price;
};

int main() {
    int n, i;
    float total_value=0;
    printf("Enter number of products: ");
    scanf("%d", &n);
    struct Product p[n];
    for (i=0;i<n;i++){
        printf("\nEnter details of product %d\n", i+1);

        printf("Product ID: ");
        scanf("%d",&p[i].product_id);

        printf("Product Name: ");
        scanf("%s",p[i].product_name);

        printf("Quantity: ");
        scanf("%d",&p[i].quantity);

        printf("Price: ");
        scanf("%f",&p[i].price);

        total_value+=p[i].quantity*p[i].price;
    }
    int max_qty_index=0;
    int max_price_index=0;

    for (i=1;i<n;i++){
        if (p[i].quantity>p[max_qty_index].quantity)
            max_qty_index=i;
        if (p[i].price>p[max_price_index].price)
            max_price_index=i;
    }
    printf("\nTotal Inventory Value: %.2f\n", total_value);
    printf("\nProduct with Highest Quantity:\n");
    printf("ID: %d\n", p[max_qty_index].product_id);
    printf("Name: %s\n", p[max_qty_index].product_name);
    printf("Quantity: %d\n", p[max_qty_index].quantity);
    printf("Price: %.2f\n", p[max_qty_index].price);
    printf("\nProduct with Highest Price:\n");
    printf("ID: %d\n", p[max_price_index].product_id);
    printf("Name: %s\n", p[max_price_index].product_name);
    printf("Quantity: %d\n", p[max_price_index].quantity);
    printf("Price: %.2f\n", p[max_price_index].price);
    return 0;
}
