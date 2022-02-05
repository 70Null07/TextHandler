#include "TextHandler.h"
										//Source.cpp
int main ()
{
	TextHandler<string> SomeText;

	int us_chose;
	while (1)
	{
		cout << "\n\t\t\t1. Заполнение текста из файла";
		cout << "\n\t\t\t2. Вывод текста на экран";
		cout << "\n\t\t\t3. Модификация слов содержащих цифру";
		cout << "\n\t\t\t4. Вывод текст в файл";
		cout << "\n\t\t\t5. Выход";
		cout << "\n\n\n\tВведите номер пункта меню: ";
		cin >> us_chose;
		switch (us_chose)
		{
		case 1:
		{
			ifstream in_text;
			in_text.open(input);
			SomeText.scan(in_text);
		}
			cout << "\n\n\n\tТекст успешно введен";
			break;
		case 2: 
			SomeText.print(cout);
			break;
		case 3:
			SomeText.split();
			cout << "\n\n\n\tТекст успешно модифицирован";
			break;
		case 4:
		{
			ofstream out_text;
			out_text.open(output);
			SomeText.print(out_text);
		}
			break;
		case 5: exit(1);

		default: break;
		}
	}
	return 0;
}