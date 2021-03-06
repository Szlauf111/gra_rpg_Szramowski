#include<iostream>
#include <Windows.h>

using namespace std;


// ============================================================================================== skille herosow ===============================================================================================
struct overall_wiesniaka
{
	int hp;
	int sila;
	int inteligencja;
	int level;
	double armor;

	void skill1(string nazwa) {
		nazwa = "kamien";
		int wies_dmg1 = (sila * 2) * level;
	}
	void skill2(string nazwa) {
		nazwa = "patyk";
		int wies_dmg2 = (inteligencja * 5) * level;
	}
	void skill3(string nazwa) {
		nazwa = "furia";
		int wies_dmg3 = hp;
	}
};

struct overall_zolnierza
{
	int hp;
	int sila;
	int inteligencja;
	int level;
	double armor;

	void skill1(string nazwa) {
		nazwa = "miecz";
		int zoln_dmg1 = (inteligencja + sila) * level;
	}
	void skill2(string nazwa) {
		nazwa = "dash";
		double zoln_dmg2 = (armor + level) * sila;
	}
	void skill3(string nazwa) {
		nazwa = "blogoslawienstwo";
		int zoln_dmg3 = sila + (inteligencja * 2);
	}
};

struct overall_lucznika
{
	int hp;
	int sila;
	int inteligencja;
	int level;
	double armor;

	void skill1(string nazwa) {
		nazwa = "luk";
		int lucz_dmg1 = sila * 5;
	}
	void skill2(string nazwa) {
		nazwa = "mieczyk";
		int lucz_dmg2 = sila * level;
	}
	void skill3(string nazwa) {
		nazwa = "zatruta strzala";
		double lucz_dmg3 = (sila + inteligencja) * 1.5;
	}
};

struct overall_maga
{
	int hp;
	int sila;
	int inteligencja;
	int level;
	double armor;

	void skill1(string nazwa) {
		nazwa = "magic ball";
		int mag_dmg1 = sila + inteligencja;
	}
	void skill2(string nazwa) {
		nazwa = "wall of fire";
		int mag_dmg2 = inteligencja * level;
	}
	void skill3(string nazwa) {
		nazwa = "power of sun";
		int mag_dmg3 = (hp * inteligencja) - sila;
	}
};

struct overall_orka
{
	int hp;
	int sila;
	int inteligencja;
	int level;
	double armor;

	void skill1(string nazwa) {
		nazwa = "maczuga";
		int ork_dmg1 = sila;
	}
	void skill2(string nazwa) {
		nazwa = "uderzenie z glowki";
		int ork_dmg2 = sila + hp;
	}
	void skill3(string nazwa) {
		nazwa = "rzut glazem";
		int ork_dmg3 = sila * level;
	}
};

struct overall_tanka
{
	int hp;
	int sila;
	int inteligencja;
	int level;
	double armor;

	void skill1(string nazwa) {
		nazwa = "uderzenie z brzucha";
		int tank_dmg1 = hp + sila;
	}
	void skill2(string nazwa) {
		nazwa = "przygniecenie";
		double tank_dmg2 = hp * armor;
	}
	void skill3(string nazwa) {
		nazwa = "atak z glowki";
		double tank_dmg3 = (inteligencja * armor) + (hp / sila);
	}
};

struct overall_cienka
{
	int hp;
	int sila;
	int inteligencja;
	int level;
	double armor;

	void skill1(string nazwa) {
		nazwa = "g?upota";
		int cien_dmg1 = inteligencja * sila;
	}
	void skill2(string nazwa) {
		nazwa = "siostra";
		double cien_dmg2 = (hp * armor) * level;
	}
	void skill3(string nazwa) {
		nazwa = "997";
		int cien_dmg3 = inteligencja * hp + level;
	}
};

struct overall_assasina
{
	int hp;
	int sila;
	int inteligencja;
	int level;
	double armor;

	void skill1(string nazwa) {
		nazwa = "atak z zaskoczenia";
		int assa_dmg1 = (inteligencja + sila) * level;
	}
	void skill2(string nazwa) {
		nazwa = "rzut mieczem";
		int assa_dmg2 = hp * sila;
	}
	void skill3(string nazwa) {
		nazwa = "dym w oczy";
		int assa_dmg3 = (inteligencja * level) + sila;
	}
};

struct overall_ninja
{
	int hp;
	int sila;
	int inteligencja;
	int level;
	double armor;

	void skill1(string nazwa) {
		nazwa = "rzut shurikenami";
		int ninj_dmg1 = (sila + inteligencja) * level;
	}
	void skill2(string nazwa) {
		nazwa = "bomba dymna";
		int ninj_dmg2 = inteligencja + hp;
	}
	void skill3(string nazwa) {
		nazwa = "atak sai";
		int ninj_dmg3 = sila * level;
	}
};

struct overall_tajnyagent
{
	int hp;
	int sila;
	int inteligencja;
	int level;
	double armor;

	void skill1(string nazwa) {
		nazwa = "strza? z USP";
		int tajn_dmg1 = sila + inteligencja;
	}
	void skill2(string nazwa) {
		nazwa = "fast atak";
		double tajn_dmg2 = (inteligencja * level) * armor;
	}
	void skill3(string nazwa) {
		nazwa = "as z renkawa";
		double tajn_dmg3 = sila * armor;
	}
};

// ======================================================================================== koniec skilli herosow =============================================================================================== 

struct potwory {
	string nazwa;
	int hp;
	int sila;
	int inteligencja;
	int ilosc;
	int level;
	double armor;
	int dmg;
};
// =========================================================================================== koniec enemy ================================================================================================= 


int main()
{
	srand(time(NULL));

	int wybor_postaci;
	cout << "Witaj w prostej grze rpg, oto zasady:" << endl << endl;
	cout << "- po kazdej wygranej rundzie zyskujesz +200 hp" << endl;
	cout << "- po kazdej wygranej rundzie zyskujesz +1 level" << endl;
	cout << "- twoj przeciwnik i ty atakujecie w tym samym momencie" << endl;
	cout << "- grasz do 6 rundy, jezeli przezyjesz wszystkie rundy wygrasz gre :O" << endl;
	cout << endl << endl;
	Sleep(1500);

	cout << "Wybierz kim chcesz zagrac. Pamietaj nie bedziesz mogl go zmienic podczas gry, wiec wybierz madrze ;)" << endl << endl;
	cout << "Oto dostepne postacie: " << endl;
	cout << "1. Wiesniak" << endl;
	cout << "2. Zolniez" << endl;
	cout << "3. Lucznik" << endl;
	cout << "4. Mag" << endl;
	cout << "5. Ork" << endl;
	cout << "6. Tank" << endl;
	cout << "7. Cienk" << endl;
	cout << "8. Assasin" << endl;
	cout << "9. Ninja" << endl;
	cout << "10.Tajny agent" << endl << endl;
	cout << "Wybierz postac ktora chcesz grac:" << endl;

	cin >> wybor_postaci;
	cout << endl << endl;

	system("cls");

	switch (wybor_postaci)
	{
	case 1:
		cout << "wybrales wiesniaka" << endl << endl;
		overall_wiesniaka wiesniak;
		wiesniak.hp = 100;
		wiesniak.sila = 10;
		wiesniak.inteligencja = 1;
		wiesniak.level = 1;
		wiesniak.armor = 1.05;
		cout << "statystyki wiesniaka" << endl;
		cout << "hp: ";
		cout << wiesniak.hp << endl;
		cout << "sila: ";
		cout << wiesniak.sila << endl;
		cout << "inteligencja: ";
		cout << wiesniak.inteligencja << endl;
		cout << "level: ";
		cout << wiesniak.level << endl;
		cout << "armor: ";
		cout << wiesniak.armor << endl << endl;
		cout << "damage skilla 1 = (sila* 2) * level" << endl;
		cout << "damage skilla 2 = (inteligencja * 5) * level" << endl;
		cout << "damage skilla 3 = hp" << endl;
		break;

	case 2:
		cout << "wybrales zolnieza" << endl << endl;
		overall_zolnierza zolnierz;
		zolnierz.hp = 150;
		zolnierz.sila = 20;
		zolnierz.inteligencja = 10;
		zolnierz.level = 1;
		zolnierz.armor = 2;
		cout << "statystyki zolnierza" << endl;
		cout << "hp: ";
		cout << zolnierz.hp << endl;
		cout << "sila: ";
		cout << zolnierz.sila << endl;
		cout << "inteligencja: ";
		cout << zolnierz.inteligencja << endl;
		cout << "level: ";
		cout << zolnierz.level << endl;
		cout << "armor: ";
		cout << zolnierz.armor << endl << endl;
		cout << "damage skilla 1 = (inteligencja + sila) * level" << endl;
		cout << "damage skilla 2 = (hp + level) * sila" << endl;
		cout << "damage skilla 3 = (inteligencja + sila) * level" << endl;
		break;

	case 3:
		cout << "wybrales lucznika" << endl << endl;
		overall_lucznika lucznik;
		lucznik.hp = 50;
		lucznik.sila = 100;
		lucznik.inteligencja = 50;
		lucznik.level = 1;
		lucznik.armor = 1.1;
		cout << "statystyki lucznika" << endl;
		cout << "hp: ";
		cout << lucznik.hp << endl;
		cout << "sila: ";
		cout << lucznik.sila << endl;
		cout << "inteligencja: ";
		cout << lucznik.inteligencja << endl;
		cout << "level: ";
		cout << lucznik.level << endl;
		cout << "armor: ";
		cout << lucznik.armor << endl << endl;
		cout << "damage skilla 1 = sila * 5" << endl;
		cout << "damage skilla 2 = sila * level" << endl;
		cout << "damage skilla 3 = (sila + inteligencja) * 2" << endl;
		break;

	case 4:
		cout << "wybrales maga" << endl << endl;
		overall_maga mag;
		mag.hp = 80;
		mag.sila = 400;
		mag.inteligencja = 100;
		mag.level = 1;
		mag.armor = 1.1;
		cout << "statystyki maga" << endl;
		cout << "hp: ";
		cout << mag.hp << endl;
		cout << "sila: ";
		cout << mag.sila << endl;
		cout << "inteligencja: ";
		cout << mag.inteligencja << endl;
		cout << "level: ";
		cout << mag.level << endl;
		cout << "armor: ";
		cout << mag.armor << endl << endl;
		cout << "damage skilla 1 = sila + inteligencja" << endl;
		cout << "damage skilla 2 = inteligencja * level" << endl;
		cout << "damage skilla 3 = (hp * inteligencja) - sila" << endl;
		break;

	case 5:
		cout << "wybrales orka" << endl << endl;
		overall_orka ork;
		ork.hp = 250;
		ork.sila = 150;
		ork.inteligencja = 1;
		ork.level = 1;
		ork.armor = 1.25;
		cout << "statystyki orka" << endl;
		cout << "hp: ";
		cout << ork.hp << endl;
		cout << "sila: ";
		cout << ork.sila << endl;
		cout << "inteligencja: ";
		cout << ork.inteligencja << endl;
		cout << "level: ";
		cout << ork.level << endl;
		cout << "armor: ";
		cout << ork.armor << endl << endl;
		cout << "damage skilla 1 = sila" << endl;
		cout << "damage skilla 2 = sila + hp" << endl;
		cout << "damage skilla 3 = sila * level" << endl;
		break;

	case 6:
		cout << "wybrales tanka" << endl << endl;
		overall_tanka tank;
		tank.hp = 500;
		tank.sila = 20;
		tank.inteligencja = 10;
		tank.level = 1;
		tank.armor = 2.1;
		cout << "statystyki tanka" << endl;
		cout << "hp: ";
		cout << tank.hp << endl;
		cout << "sila: ";
		cout << tank.sila << endl;
		cout << "inteligencja: ";
		cout << tank.inteligencja << endl;
		cout << "level: ";
		cout << tank.level << endl;
		cout << "armor: ";
		cout << tank.armor << endl << endl;
		cout << "damage skilla 1 = hp + sila" << endl;
		cout << "damage skilla 2 = (hp * level) / 2" << endl;
		cout << "damage skilla 3 = inteligencja + (hp / sila)" << endl;
		break;

	case 7:
		cout << "wybrales cienka" << endl << endl;
		overall_cienka cienk;
		cienk.hp = 1;
		cienk.sila = 1;
		cienk.inteligencja = 1;
		cienk.level = 1;
		cienk.armor = 1.0;
		cout << "statystyki cienka" << endl;
		cout << "hp: ";
		cout << cienk.hp << endl;
		cout << "sila: ";
		cout << cienk.sila << endl;
		cout << "inteligencja: ";
		cout << cienk.inteligencja << endl;
		cout << "level: ";
		cout << cienk.level << endl;
		cout << "armor: ";
		cout << cienk.armor << endl << endl;
		cout << "damage skilla 1 = inteligencja * sila" << endl;
		cout << "damage skilla 2 = hp * level" << endl;
		cout << "damage skilla 3 = inteligencja * hp + level" << endl;
		break;

	case 8:
		cout << "wybrales assasina" << endl << endl;
		overall_assasina assasin;
		assasin.hp = 125;
		assasin.sila = 200;
		assasin.inteligencja = 80;
		assasin.level = 1;
		assasin.armor = 1.2;
		cout << "statystyki assasina" << endl;
		cout << "hp: ";
		cout << assasin.hp << endl;
		cout << "sila: ";
		cout << assasin.sila << endl;
		cout << "inteligencja: ";
		cout << assasin.inteligencja << endl;
		cout << "level: ";
		cout << assasin.level << endl;
		cout << "armor: ";
		cout << assasin.armor << endl << endl;
		cout << "damage skilla 1 = (inteligencja + sila) * level" << endl;
		cout << "damage skilla 2 = hp_gracza * sila_gracza" << endl;
		cout << "damage skilla 3 = (inteligencja * level) + sila" << endl;
		break;

	case 9:
		cout << "wybrales ninja" << endl << endl;
		overall_ninja ninja;
		ninja.hp = 150;
		ninja.sila = 150;
		ninja.inteligencja = 80;
		ninja.level = 1;
		ninja.armor = 1.25;
		cout << "statystyki ninja" << endl;
		cout << "hp: ";
		cout << ninja.hp << endl;
		cout << "sila: ";
		cout << ninja.sila << endl;
		cout << "inteligencja: ";
		cout << ninja.inteligencja << endl;
		cout << "level: ";
		cout << ninja.level << endl;
		cout << "armor: ";
		cout << ninja.armor << endl << endl;
		cout << "damage skilla 1 = (sila + inteligencja) * level" << endl;
		cout << "damage skilla 2 = inteligencja + hp" << endl;
		cout << "damage skilla 3 = (sila + inteligencja) * level" << endl;
		break;

	case 10:
		cout << "wybrales tajnego agenta" << endl << endl;
		overall_tajnyagent tajny_agent;
		tajny_agent.hp = 80;
		tajny_agent.sila = 300;
		tajny_agent.inteligencja = 85;
		tajny_agent.level = 1;
		tajny_agent.armor = 1.0;
		cout << "statystyki tajnego agenta" << endl;
		cout << "hp: ";
		cout << tajny_agent.hp << endl;
		cout << "sila: ";
		cout << tajny_agent.sila << endl;
		cout << "inteligencja: ";
		cout << tajny_agent.inteligencja << endl;
		cout << "level: ";
		cout << tajny_agent.level << endl;
		cout << "armor: ";
		cout << tajny_agent.armor << endl << endl;
		cout << "damage skilla 1 = sila + inteligencja;" << endl;
		cout << "damage skilla 2 = inteligencja * level;" << endl;
		cout << "damage skilla 3 = sila + hp;" << endl;
		break;

	default:
		cout << "niestety wybrales zle, musze wylaczyc program" << endl << endl;
		cout << "Never gonna give you up" << endl;
		cout << "Never gonna let you down" << endl;
		return 0;
		break;
	}






	potwory enemy[10];

	enemy[0].nazwa = "czerwony stwor";
	enemy[0].hp = 500;
	enemy[0].sila = 10;
	enemy[0].inteligencja = 5;
	enemy[0].ilosc = 1;
	enemy[0].level = 1;
	enemy[0].armor = 1.0;

	enemy[0].dmg = enemy[0].sila * enemy[0].inteligencja;


	enemy[1].nazwa = "niebieski stwor";
	enemy[1].hp = 250;
	enemy[1].sila = 50;
	enemy[1].inteligencja = 5;
	enemy[1].ilosc = 1;
	enemy[1].level = 1;
	enemy[1].armor = 1.5;

	enemy[1].dmg = enemy[1].sila + enemy[1].inteligencja;


	enemy[2].nazwa = "ropuch";
	enemy[2].hp = 200;
	enemy[2].sila = 25;
	enemy[2].inteligencja = 10;
	enemy[2].ilosc = 1;
	enemy[2].level = 1;
	enemy[2].armor = 1.1;

	enemy[2].dmg = enemy[2].sila + enemy[2].inteligencja;


	enemy[3].nazwa = "wilki";
	enemy[3].hp = 300;
	enemy[3].sila = 20;
	enemy[3].inteligencja = 20;
	enemy[3].ilosc = 3;
	enemy[3].level = 1;
	enemy[3].armor = 1.0;

	enemy[3].dmg = enemy[3].sila * enemy[3].ilosc;


	enemy[4].nazwa = "krwiozercze kurczaki";
	enemy[4].hp = 150;
	enemy[4].sila = 15;
	enemy[4].inteligencja = 1;
	enemy[4].ilosc = 8;
	enemy[4].level = 1;
	enemy[4].armor = 1.0;

	enemy[4].dmg = enemy[4].sila * enemy[4].ilosc;


	enemy[5].nazwa = "golumy";
	enemy[5].hp = 1000;
	enemy[5].sila = 5;
	enemy[5].inteligencja = 2;
	enemy[5].ilosc = 2;
	enemy[5].level = 1;
	enemy[5].armor = 1.25;

	enemy[5].dmg = enemy[4].sila * enemy[4].ilosc;


	enemy[6].nazwa = "miniony farmerzy";
	enemy[6].hp = 200;
	enemy[6].sila = 15;
	enemy[6].inteligencja = 10;
	enemy[6].ilosc = 1;
	enemy[6].level = 1;
	enemy[6].armor = 1.5;

	enemy[6].dmg = enemy[6].sila + enemy[6].inteligencja;


	enemy[7].nazwa = "minion mag";
	enemy[7].hp = 150;
	enemy[7].sila = 100;
	enemy[7].inteligencja = 50;
	enemy[7].ilosc = 1;
	enemy[7].level = 1;
	enemy[7].armor = 1.0;

	enemy[7].dmg = enemy[7].sila;


	enemy[8].nazwa = "miniony z dzialem";
	enemy[8].hp = 250;
	enemy[8].sila = 200;
	enemy[8].inteligencja = 5;
	enemy[8].ilosc = 1;
	enemy[8].level = 1;
	enemy[8].armor = 2.0;

	enemy[8].dmg = enemy[8].hp * enemy[8].level;


	enemy[9].nazwa = "inhab";
	enemy[9].hp = 600;
	enemy[9].sila = 50;
	enemy[9].inteligencja = 100;
	enemy[9].ilosc = 1;
	enemy[9].level = 1;
	enemy[9].armor = 1.25;

	enemy[9].dmg = enemy[9].hp - enemy[9].sila;





	int hpgracza;
	int silagracza;
	int inteligencjagracza;
	int levelgracza;
	double armorgracza;
	int dmgskillgracza;

	int skill1;
	int skill2;
	int skill3;
	int skill4;

	if (wybor_postaci == 1) {
		hpgracza = 100;
		silagracza = 10;
		inteligencjagracza = 1;
		levelgracza = 1;
		armorgracza = 1.05;

		skill1 = (silagracza * 2) * levelgracza;
		skill2 = (inteligencjagracza * 5) * levelgracza;
		skill3 = hpgracza;
		skill4 = (silagracza * 2) * levelgracza;
	}
	else if (wybor_postaci == 2) {
		hpgracza = 150;
		silagracza = 20;
		inteligencjagracza = 10;
		levelgracza = 1;
		armorgracza = 2;

		skill1 = (inteligencjagracza + silagracza) * levelgracza;
		skill2 = (hpgracza + levelgracza) * silagracza;
		skill3 = silagracza + (inteligencjagracza * 2);
		skill4 = (inteligencjagracza + silagracza) * levelgracza;
	}
	else if (wybor_postaci == 3) {
		hpgracza = 50;
		silagracza = 100;
		inteligencjagracza = 50;
		levelgracza = 1;
		armorgracza = 1.1;

		skill1 = silagracza * 5;
		skill2 = silagracza * levelgracza;
		skill3 = (silagracza + inteligencjagracza) * 2;
		skill4 = silagracza * 5;
	}
	else if (wybor_postaci == 4) {
		hpgracza = 80;
		silagracza = 400;
		inteligencjagracza = 100;
		levelgracza = 1;
		armorgracza = 1.1;

		skill1 = silagracza + inteligencjagracza;
		skill2 = inteligencjagracza * levelgracza;
		skill3 = (hpgracza * inteligencjagracza) - silagracza;
		skill4 = silagracza + inteligencjagracza;
	}
	else if (wybor_postaci == 5) {
		hpgracza = 250;
		silagracza = 150;
		inteligencjagracza = 1;
		levelgracza = 1;
		armorgracza = 1.25;

		skill1 = silagracza;
		skill2 = silagracza + hpgracza;
		skill3 = silagracza * levelgracza;
		skill4 = silagracza;
	}
	else if (wybor_postaci == 6) {
		hpgracza = 500;
		silagracza = 20;
		inteligencjagracza = 10;
		levelgracza = 1;
		armorgracza = 2.1;

		skill1 = hpgracza + silagracza;
		skill2 = (hpgracza * levelgracza) / 2;
		skill3 = inteligencjagracza + (hpgracza / silagracza);
		skill4 = hpgracza + silagracza;
	}
	else if (wybor_postaci == 7) {
		hpgracza = 1;
		silagracza = 1;
		inteligencjagracza = 1;
		levelgracza = 1;
		armorgracza = 1;

		skill1 = inteligencjagracza * silagracza;
		skill2 = hpgracza * levelgracza;
		skill3 = inteligencjagracza * hpgracza + levelgracza;
		skill4 = inteligencjagracza * silagracza;
	}
	else if (wybor_postaci == 8) {
		hpgracza = 125;
		silagracza = 200;
		inteligencjagracza = 80;
		levelgracza = 1;
		armorgracza = 1.2;

		skill1 = (inteligencjagracza + silagracza) * levelgracza;
		skill2 = hpgracza * silagracza;
		skill3 = (inteligencjagracza * levelgracza) + silagracza;
		skill4 = (inteligencjagracza + silagracza) * levelgracza;
	}
	else if (wybor_postaci == 9) {
		hpgracza = 150;
		silagracza = 150;
		inteligencjagracza = 80;
		levelgracza = 1;
		armorgracza = 1.25;

		skill1 = (silagracza + inteligencjagracza) * levelgracza;
		skill2 = inteligencjagracza + hpgracza;
		skill3 = silagracza * levelgracza;
		skill4 = (silagracza + inteligencjagracza) * levelgracza;
	}
	else if (wybor_postaci == 10) {
		hpgracza = 80;
		silagracza = 300;
		inteligencjagracza = 85;
		levelgracza = 1;
		armorgracza = 1.0;

		skill1 = silagracza + inteligencjagracza;
		skill2 = inteligencjagracza * levelgracza;
		skill3 = silagracza + hpgracza;
		skill4 = silagracza + inteligencjagracza;
	}

	int wybor_skill;

	//system walki
	for (int i = 1; i <= 6; i++) {
		Sleep(2000);
		int los = rand() % 10;
		cout << endl << endl << "=============== " << i << " runda ==================";
		cout << endl << endl << "Oto twoj przeciwnik: " << enemy[los].nazwa << endl << endl;


		cout << "wybierz jakiego skilla chcesz uzyc" << endl;
		cout << "1. 2. 3." << endl << endl;
		cin >> wybor_skill;
		cout << endl;
		if (wybor_skill == 1) {
			dmgskillgracza = skill1;
		}
		else if (wybor_skill == 2) {
			dmgskillgracza = skill2;
		}
		else if (wybor_skill == 3) {
			dmgskillgracza = skill3;
		}
		else {
			cout << "wybrales zla liczbe. wybralem ci 1 skilla" << endl;
			dmgskillgracza = skill4;
		}
		cout << "start walki" << endl << endl;
		do {

			cout << "twoje hp: " << hpgracza << endl;
			cout << "hp twojego wroga: " << enemy[los].hp << endl;

			enemy[los].hp = enemy[los].hp - dmgskillgracza;
			hpgracza = hpgracza - enemy[los].dmg;

		} while (hpgracza == 0 or enemy[los].hp == 0);

		if (hpgracza <= 0) {
			cout << endl << endl << "twoje hp po walce: " << hpgracza << endl;
			cout << "twoj level po walce: " << levelgracza << endl << endl;
			cout << "hp twojego wroga po walce: " << enemy[los].hp << endl;
			cout << endl << "zostales pokonany :(";
			return 0;
		}
		else {
			hpgracza = hpgracza + 200;
			levelgracza = levelgracza + 1;
			cout << endl << endl << "twoje hp po walce: " << hpgracza << endl;
			cout << "twoj level po walce: " << levelgracza << endl << endl;
			cout << "hp twojego wroga po walce: " << enemy[los].hp << endl;
			cout << endl << "Gratulacje, pokonales " << enemy[los].nazwa;
		}
	}
	Sleep(1500);
	system("cls");

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                        |========================================================================|" << endl;
	cout << "                        | wygrales te niesamowita gre, jestes niesamowity gratulacje uzytkowniku |" << endl;
	cout << "                        |========================================================================|" << endl;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	return 0;
}