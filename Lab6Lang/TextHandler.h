#pragma once
										//TextHandler.h
#include "Conf.h"

template <class T>
class TextHandler
{
	vector<T> SomeVec;
public:
	int LengthVec() const { return SomeVec.size(); };
	istream& scan(istream& stream);
	ostream& print(ostream& stream);
	void split();
};

template <class T>
istream& TextHandler<T>::scan(istream& stream)
{
	while (stream)
	{
		string str;
		stream >> str;
		SomeVec.push_back(str);
	}
	SomeVec.pop_back();
	return stream;
};

template <class T>
ostream& TextHandler<T>::print(ostream& stream)
{
	for (int i = 0; i < SomeVec.size(); i++)
	{
		stream << i << " String is " << SomeVec.at(i) << endl;
	}
	return stream;
};

template <class T>
void TextHandler<T>::split()
{
	for (int i = 0; i < SomeVec.size(); i++)
	{
		string str = SomeVec.at(i);
		int j = 0;
		char k = str[j];
		while (!isdigit(k))
		{
			j++;
			k = str[j];
		}
		string temp1 = SomeVec.at(i).erase(j + 1);
		string temp2 = SomeVec.at(i).erase(j);
		reverse(temp2.begin(), temp2.end());
		SomeVec.at(i) = temp1 + temp2;
	}
}