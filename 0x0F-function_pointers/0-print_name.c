void print_name(char *name, void (*f)(char *))
{
	for (int i = 0; name[i] != '\0'; ++i)
	{
		   if (name && f)
		   {
		f(name);
	}
	}
}