void print_name(char *name, void (*f)(char *))
{
<<<<<<< HEAD
	int i;

	for (i = 0; name[i] != '\0'; ++i)
=======
	for (int i = 0; name[i] != '\0'; ++i)
>>>>>>> ea99ba63c4444897449f2e37c54071f260f0124a
	{
		   if (name && f)
		   {
		f(name);
	}
	}
<<<<<<< HEAD
}
=======
}
>>>>>>> ea99ba63c4444897449f2e37c54071f260f0124a
