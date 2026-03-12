#ifndef DATA_H
#define DATA_H

typedef struct Restaurant {
    char *name;
    char *cuisine;
    char *type;
    char *price_range;
    Food *menu;
    int menu_size;
} Restaurant;

typedef struct Food {
    char *name;
    char *additions;
    char *subtractions;
    double price;
} Food;

#endif // DATA_H