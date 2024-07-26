void print_name(char *name, void (*f)(char *))
{
	  if (name == NULL || f == NULL) {

		return;
	}


	for (int i = 0; name[i] != '\0'; ++i) {
		f(name[i]);
	}
}