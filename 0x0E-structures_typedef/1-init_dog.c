/**
 * init_dog - new  dog struct
 *@x: parameter x
 *@name: junior
 *@age: 12
 *@owner: nicolas
 *Return: Alwasy 0
 */
void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x)
	{
		x->name = name;
		x->age = age;
		x->owner = owner;
	}
	else
	{
			return;
	}
}
