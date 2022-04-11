#ifndef DOG_H
#define DOG_H
/**
* struct dog - declares the elements below
* @name: - First member
* @age: - Second member
* @owner: - Third member
**/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
