#include <iostream>
#include <string>
using namespace std;

//мюякеднбюмхе лмнфеярбеммне

/////мюякеднбюмхе цде меяйнкэйн йкюяянб нр ндмнцн окъыср ашк б опедшдсыел опнейре (я VIRTUAL - OVERRIDE)

////////////////////////////////       мюякеднбюмхе йкюяянл меяйнкэйху пндхрекэяйху йкюяянб 
/*class Pen
{
public:
	Pen();
	void Write()
	{
		cout << "Write the text!" << endl;
	}

	string GetWritting()
	{
		return Writting;
	}

private:
	string Writting = "Writting";
};
Pen::Pen()
{

}

class Pencil
{
public:
	Pencil();

	void Drafting()
	{
		cout << "Drafting the figures!" << endl;
	}

	string GetDrafting()
	{
		return Draft;
	}

private:
	string Draft = "Drafting ";
};
Pencil::Pencil()
{

}


class PenPencil : public Pen, public Pencil
{
public:
	void painting()
	{
		cout <<"I'm " + GetDrafting() + "and " + GetWritting() << endl;
	}
};*/

//////////////////////////////// мюякеднбюмхе йкюяянл нр меяйнкэйху пндхрекэяйху йкюяянб лернднб йнрнпше ндхмюйнцн мюгшбючряъ
class Pen
{
public:
	Pen();
	void Use()
	{
		cout << "Write the text!" << endl;
	}

	string GetWritting()
	{
		return Writting;
	}

private:
	string Writting = "Writting";
};
Pen::Pen()
{

}

class Pencil
{
public:
	Pencil();

	void Use()
	{
		cout << "Drafting the figures!" << endl;
	}

	string GetDrafting()
	{
		return Draft;
	}

private:
	string Draft = "Drafting ";
};
Pencil::Pencil()
{

}


class PenPencil : public Pen, public Pencil
{
public:
	void painting()
	{
		cout << "I'm " + GetDrafting() + "and " + GetWritting() << endl;
	}
};



int main()
{
	setlocale(LC_ALL, "Rus");

	PenPencil PP;	

	/*PP.Drafting();			//щРН Й ОЕПБНЛС ГЮЙНЛЕМРХПНБЮММНЛС ЙНДС	!
	Pen* ref = &PP;            ////сЙЮГЮРЕКЭ ЛНФЕР ФЕ УПЮМХРЭ ЯЯШКЙС МЮ АЮГНБШИ ЙКЮЯЯ. рН ЕЯРЭ ОПХ ЛМНФЕЯРБ. МЮЯКЕДНБ. ЛНФМН БШГБЮРЭ
	PP.Write();                ////ЛЕРНД ДПСЦНЦН ЙКЮЯЯЮ!
	PP.painting();*/
							
	((Pen)PP).Use();//рср вепег опхбедемхе рхонб(рнкэйн пп рнфе б яйнайх аеп╗л), он ясрх опнярн сйюгшбюел мю дпсцни йкюяя (онкэгнбюрекэяйхи рхо дюммшу)
	((Pencil)PP).Use();//рср сфе мюгмювюел дпсцни лернд дпсцнцн йкюяяю, мн рнцн фе мюгбюмхъ


	return 0;
}