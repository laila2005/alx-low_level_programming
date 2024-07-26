void print_name(char *name, void (*f)(char *))
{
	int i;

	for (i = 0; name[i] != '\0'; ++i)
	{
		   if (name && f)
		   {
		f(name);
	}
	}
}
