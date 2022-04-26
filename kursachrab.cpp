#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h> 
#include <Windows.h> 
#include <iomanip>
#include <fstream> 
#include <stdlib.h> 
#include <cstring> 
#include <string> 
#include <conio.h>
#include <shellapi.h>
#include <map>
#include <vector>
using namespace std;





template <typename T>
void check(T& i) {
	while (true) {
		cin >> i;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите корректное значение: ";
		}

		else break;
		system("cls");
	}
}


namespace Vacations {

	template <typename T>
	class Hotel
	{
	private:
		T name[100];
		static int size;
		int set_star(int star)
		{
			return star;
		}

		int set_star()
		{
			int answ;
			cout << "Сколько звезд у отеля?" << endl;
			cin >> answ;
			return answ;
		}
		static int get_size() { return size; }
		void set_name(T name)
		{
			this->name = name;
		}

		T get_name() { return name; }
	};
	void countryinfo()
	{
		cout << "Египет – удивительная восточная страна с универсальными курортами, которые можно посещать круглый год. Каждый турист сможет насладиться теплой погодой, подводной жизнью красного моря, бирюзовыми волнами и насыщенной исторической программой (пирамиды и Луксор ежедневно посещают тысячи туристов).\n Конечно, не стоит забывать, что отдых в Египте – это еще отличная возможность для дайверов потренироваться и увидеть красоту подводного мира.\nРекомендуемый отдых:Пляжный." << endl;
		cout << endl;
		cout << "Турция.Главное преимущество отдыха в Турции – соотношение цены и качества предоставляемых услуг, их разнообразие, безвизовый режим.Отдых в Турции удовлетворит запросы любых туристов - семей с детьми, людей, предпочитающих спокойный респектабельный отдых.\nМолодых людей вдохновит бурная ночная жизнь с массой всевозможных развлечений.Здесь повсеместно развита система «все включено», когда платишь один раз при покупке путевки и на месте ни в чем себе не отказываешь.\nРекомендуемый отдых:Пляжный." << endl;
		cout << endl;
		cout << "Польша - cтрана, которая всегда пленила своей богатой историей, памятниками старины, культурными достижениями, живописными ландшафтами, и прежде всего гостеприимством и дружелюбием жителей.\n Это крупнейшая страна в Восточной Европе, занимающая по размерам своей территории 9-е место в Европе.\nРекомендуемый отдых:Походный" << endl;
		cout << endl;
		cout << "Беларусь.Сколько смысла в одном слове - Родина… Мы вспоминаем всю её непревзойденную красоту, думаем о своей великой, прекрасной стране и гордимся.\n У каждого из нас, страна где мы родились, вызывает самые теплые и светлые чувства.\nРекомендуемый отдых:Походный." << endl;
		cout << endl;
		cout << "Украина имеет значительные возможности для динамичного развития туристской и рекреационной отрасли, расширение международного сотрудничества в этой сфере.\n Туристическое движение в Украине имеет давние исторические традиции.\nРекомендуемый отдых:Горнолыжный,Пляжный." << endl;
		cout << endl;
		cout << "Россия. Россия является крупнейшей страной в мире, и тянется на тысячи километров с севера на юг и с запада на восток. Территория России составляет 17 миллионов квадратных километров.\n Население России составляет более 150 миллионов человек и это люди многих национальностей проживающих в России. Этнические русские составляют большинство населения.\n Есть также национальные меньшинства численностью только несколько сотен человек.\nРекомендуемый отдых:Пляжный,Горнолыжный,Походный." << endl;
		cout << endl;
		cout << "Швейцария - отличное место проведения отпуска, где на малом пространстве сосредоточены уникальные красоты природы и выдающиеся творения человеческих рук. Эта страна говорит на многих языках и вмещает в своих границах несколько культур. Недаром эту страну называют Европой в миниатюре.\nРекомендуемый отдых:Горнолыжный" << endl;
		cout << endl;
		cout << "Латвия.Эта прибалтийская страна славится красивыми и высокими женщинами, горами, заповедниками, быстрым интернетом и другими приятными особенностями. 1. Латвийцы любят свою столицу. Практически 1/3 из 2 млн жителей Латвии живут в Риге, которую иногда называют Северным Парижем.\nРекомендуемый отдых:Походный." << endl;
		cout << endl;
		cout << "Греция – настоящий туристический рай с отличной инфраструктурой и широкими возможностями для всех типов отдыха. Это страна, наделенная мягким климатом, удивительной красотой природы, восхитительными ландшафтами, включающими кристально чистые моря, зеленые горы и прекрасные пляжи, а также уникальные древние памятники.\nРекомендуемый отдых:Пляжный." << endl;
		cout << endl;
		cout << "Болгария – это удивительная страна, отдых в которой имеет ряд преимуществ. Во-первых, Болгария сочетает в себе все виды отдыха – здесь есть и летний отдых, который представлен большим разнообразием курортов на любой вкус и бюджет, и зимние горнолыжные курорты с трассами различной сложности. Во-вторых, страна занимает второе место в мире по количеству минеральных источников. В-третьих, она занимает третье место в Европе по количеству архитектурных достопримечательностей и культурных наследий.\nРекомендуемый отдых:Пляжный." << endl;
		cout << endl;
		cout << "Германия – страна разнообразных пейзажей и интересных городов. Ее экономика является крупнейшей в Европе и пятой по величине в мире. Именно в Германии были сделаны многие революционные научные открытия: наука и исследования имеют здесь давние традиции.\nРекомендуемый отдых:Походный." << endl;
		cout << endl;
		cout << " Италия славится комфортным средиземноморским климатом, живописными горами и озёрами, античными памятниками, а также зимними горнолыжными курортами. Неслучайно она входит в пятёрку самых популярных в мире туристических направлений.Вся территория Италии кишит историческими памятниками – их здесь более ста тысяч.\nРекомендуемый отдых:Горнолыжный,Пляжный." << endl;
		system("pause");
		system("cls");

	}
	class Location {
	protected:
		string place;
	public:
		string places[12] = { "Египет", "Турция", "Польша", "Беларусь", "Украина", "Россия", "Швейцария", "Латвия", "Греция", "Болгария", "Германия", "Италия" };
		void setPlace() {
			system("cls");
			cout << "Выберите страну из списка:" << endl;
			cout << "Египет \n Турция\n Польша\n Беларусь\n Украина\n Россия\n Швейцария\n Латвия\n Греция\n Болгария\n Германия\n Италия\n";
			//cout << "Введите страну : ";
			int k = 0;
			while (true) {
				check<string>(place);
				bool temp = true;
				for (int i = 0; i < 12; i++)
				{
					if (place == places[i])
					{
						temp = false;
						k++;
					}

				}
				if (k == 0) {
					cout << "Такой страны нет,попробуйте еще раз" << endl;
				}
				else break;

			}
		}
	};
	class TypeOfVacation {
	protected:
		double costt;// costt -> cost
		string typeofvacation;
	public:
		TypeOfVacation() {
			this->costt = 0; // costt -> cost
		}
		virtual void setCostt() = 0;
		friend class Vacation;
	};
	class Ski : public virtual TypeOfVacation {


	public:
		void setCostt()
		{
			system("cls");
			cout << "Введите стоимость горнолыжной путевки(до 10000 р): ";
			while (true) {
				cin >> costt;
				if ((!cin) || (costt < 0) || (costt > 10000)) {
					cin.clear();
					while (cin.get() != '\n');
					cout << "Введите корректное значение(от 0 до 10000 р): ";
				}
				else break;
			}
		}

	};
	class Beach : public virtual TypeOfVacation {
	public:
		void setCostt()
		{
			system("cls");
			cout << "Введите стоимость пляжного путёвки(до 10000): ";
			while (true) {
				cin >> costt;
				if ((!cin) || (costt < 0) || (costt > 10000)) {
					cin.clear();
					while (cin.get() != '\n');
					cout << "Введите корректное значение(от 0 до 10000): ";
				}
				else break;
			}
		}
	};
	class Hike : public virtual TypeOfVacation {
	public:
		void setCostt()
		{
			system("cls");
			cout << "Введите стоимость походной путевки(до 5000): ";
			while (true) {
				cin >> costt;
				if ((!cin) || (costt < 0) || (costt > 5000)) {
					cin.clear();
					while (cin.get() != '\n');
					cout << "Введите корректное значение(от 0 до 5000): ";
				}
				else break;
			}
		}
	};
	class Date {
	protected:
		int d, m, y;
	public:
		void setDate() {
			system("cls");
			cout << "Введите дату" << endl;
			while (true) {
				cout << "Введите год(2021-2025): ";
				cin >> y;
				if ((!cin) || (y < 2020) || (y > 2025)) {
					cin.clear();
					while (cin.get() != '\n');
				}
				else break;
			}
			while (true) {
				cout << "Введите месяц: ";
				cin >> m;
				if ((!cin) || (m > 12) || (m < 1)) {
					cin.clear();
					while (cin.get() != '\n');
				}
				else break;
			}
			while (true) {
				cout << "Введите день: ";
				cin >> d;
				if ((!cin) || (d < 1) || (((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) && (d > 31))) {
					cin.clear();
					while (cin.get() != '\n');
				}
				else if ((!cin) || (d < 1) || (((m == 4) || (m == 6) || (m == 9) || (m == 11)) && (d > 30))) {
					cin.clear();
					while (cin.get() != '\n');
				}
				else if ((!cin) || (d < 1) || ((m == 2) && (y % 4 != 0) && (d > 28))) {
					cin.clear();
					while (cin.get() != '\n');
				}
				else if ((!cin) || (d < 1) || ((m == 2) && (y % 4 == 0) && (d > 29))) {
					cin.clear();
					while (cin.get() != '\n');
				}
				else break;
			}
		}
	};
	class Vacation : public Ski, public Beach, public Hike, public Date, public Location {
	private:
		int id;
		string status;
		friend void countryinfo();
	public:
		void setCostt() {
			cout << "Нельзя изменить стоимость." << endl;
		}

		bool operator > (Vacation time)
		{
			if (this->y > time.y)
				return true;
			else if ((this->y == time.y) && (this->m > time.m))
				return true;
			else if ((this->y == time.y) && (this->m == time.m) && (this->d > time.d))
				return true;
			return false;
		}
		bool operator<(Vacation cost)
		{
			if (this->costt < cost.costt)
				return true;
			return false;
		}

		void add(int p)
		{
			system("cls");
			setPlace();
			ifstream in_new("D:\\tabl.txt", ios_base::app);
			if (!in_new) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			string places[100], typeofVacation[100];
			double t_cost[100];
			int   count = 0, f = 1;
			while (in_new >> places[f] >> t_cost[f] >> typeofVacation[f]) {
				count++;
				f++;
			}
			in_new.close();
			ifstream in_new2("D:\\tabl.txt", ios_base::app);
			for (int f = 1; f <= count; f++) {
				in_new >> places[f] >> t_cost[f] >> typeofVacation[f];
			}
			in_new2.close();
			double temp;
			for (int i = 1; i <= count; i++)
			{
				if (place == places[i])
				{
					temp = t_cost[i];

				}
			}
			TypeOfVacation* point = 0;
			Ski ski;
			Beach beach;
			Hike hike;
			cout << "Выберите тип отдыха " << endl;
			cout << "1.Горнолыжный\n";
			cout << "2.Пляжный\n";
			cout << "3.Походный\n";
			cout << "Введите нужный элемент: ";
			char ch_key;
			cin >> ch_key;
			switch (ch_key) {
			case '1': {
				point = &ski;
				break;
			}
			case '2': {
				point = &beach;
				break;
			}
			case '3': {
				point = &hike;
				break;
			}
			default:
				cout << "Ввод ошибочен. Повторите ввод.\n";
				break;
			}
			point->setCostt();
			setDate();
			ofstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			int k;
			cout << "Цена ";
			if (point == &ski) {
				cout << "на горнолыжный отдых";
			}
			else if (point == &beach) {
				cout << "на пляжный отдых";
			}
			else if (point == &hike) {
				cout << "на походный отдых ";
			}
			cout << " составит " << point->costt << "$. Чтобы подтвердить введите 1: ";
			cin >> k;
			cout << endl;
			if (k == 1) {
				in << place << " ";
				if (point == &ski) {
					in << "Горнолыжный ";
				}
				else if (point == &beach) {
					in << "Пляжный ";
				}
				else if (point == &hike) {
					in << "Походный ";
				}
				in << point->costt << " ";
				in << d << " " << m << " " << y << " ";
				in << "оплачено";
				in << " " << p << endl;
				in.close();
			}
			else
			{
				in << place << " ";
				if (point == &ski) {
					in << "Горнолыжный ";
				}
				else if (point == &beach) {
					in << "Пляжный ";
				}
				else if (point == &hike) {
					in << "Походный ";
				}
				in << point->costt << " ";
				in << d << " " << m << " " << y << " ";
				in << "запланировано";
				in << " " << p << endl;
				in.close();
			}
		}
		void filtr() {
			ifstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			Vacation div[100], temp;
			int count = 0, f = 1;
			while (in >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id) {
				count++;
				f++;
			}
			in.close();
			ifstream in_new("D:\\tablica.txt.", ios_base::app);
			for (int f = 1; f <= count; f++) {
				in_new >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id;
			}
			in_new.close();
			cout << "Выберите фильтрацию" << endl;
			cout << "1.Фильтрация по дате путевки\n";
			cout << "2.Фильтрация по цене путевки\n";
			char ch_key;
			cin >> ch_key;
			cout << endl;
			switch (ch_key) {
			case '1': {
				int MaxDate;
				cout << "Введите максимальный год поездки" << endl;
				cin >> MaxDate;
				cout << "*-------------------------------------------------------------------------------------------------*" << endl;
				cout << setw(3) << left << "|№" << setw(17) << left << "|Страна" << setw(15) << left << "| Тип отдыха" << setw(15) << left << "| Стоимость" << setw(15) << left << "|Дата " << setw(15) << left << "| Статус" << setw(15) << left << "|id пользователя  |" << endl;
				for (int i = 1; i < count + 1; i++) {
					if (div[i].y <= MaxDate)
					{
						cout << "|--|----------------|--------------|--------------|--------------|--------------|-----------------|" << endl;
						cout << "|" << setw(2) << i << setw(17) << "| " + div[i].place << setw(15) << "| " + div[i].typeofvacation << "| " << setw(13) << div[i].costt << "| ";
						if (div[i].d < 10)
							cout << "0" << div[i].d;
						else cout << div[i].d;
						cout << ".";
						if (div[i].m < 10)
							cout << "0" << div[i].m;
						else cout << div[i].m;
						cout << "." << div[i].y << "   | " << setw(13) << div[i].status << "| " << setw(15) << div[i].id << " |" << endl;

					}

				}
				cout << "*-------------------------------------------------------------------------------------------------*" << endl << endl;
				break;
			}
			case '2':
			{
				int MaxPrice;
				cout << "Введите максимальную цену путевки" << endl;
				cin >> MaxPrice;
				cout << "*-------------------------------------------------------------------------------------------------*" << endl;
				cout << setw(3) << left << "|№" << setw(17) << left << "|Страна" << setw(15) << left << "| Тип отдыха" << setw(15) << left << "| Стоимость" << setw(15) << left << "|Дата " << setw(15) << left << "| Статус" << setw(15) << left << "|id пользователя  |" << endl;
				for (int i = 1; i < count + 1; i++) {
					if (div[i].costt < MaxPrice)
					{
						cout << "|--|----------------|--------------|--------------|--------------|--------------|-----------------|" << endl;
						cout << "|" << setw(2) << i << setw(17) << "| " + div[i].place << setw(15) << "| " + div[i].typeofvacation << "| " << setw(13) << div[i].costt << "| ";
						if (div[i].d < 10)
							cout << "0" << div[i].d;
						else cout << div[i].d;
						cout << ".";
						if (div[i].m < 10)
							cout << "0" << div[i].m;
						else cout << div[i].m;
						cout << "." << div[i].y << "   | " << setw(13) << div[i].status << "| " << setw(15) << div[i].id << " |" << endl;

					}

				}
				cout << "*-------------------------------------------------------------------------------------------------*" << endl << endl;
				break;

			}
			default: {
				system("cls");
				cout << "Ввод ошибочен. Повторите ввод.\n";
				break;
			}


			}
		}


		void sor() {

			ifstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			Vacation div[100], temp;
			int count = 0, f = 1;
			while (in >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id) {
				count++;
				f++;
			}
			in.close();
			ifstream in_new("D:\\tablica.txt.", ios_base::app);
			for (int f = 1; f <= count; f++) {
				in_new >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id;
			}
			in_new.close();
			cout << "1.Поиск по стране\n";
			cout << "2.Сортировка по дате \n";
			cout << "3.Поиск по ID\n";
			//cout << "4.Сортировка по цене\n";

			//cout << "3.Фильтрация по цене путевки\n";
			cout << "Введите нужный элемент: ";
			char ch_key;
			cin >> ch_key;
			cout << endl;
			switch (ch_key) {
			case '1': {
				cout << "Ведите страну для поиска:";
				cin >> place;
				cout << "*--------------------------------------------------------------------------------------------------*" << endl;
				cout << setw(3) << left << "|№" << setw(17) << left << "|Страна" << setw(15) << left << "| Тип отдыха" << setw(15) << left << "| Стоимость" << setw(15) << left << "|Дата " << setw(15) << left << "| Статус" << setw(15) << left << "|id пользователя  |" << endl;
				for (int i = 1; i < 12; i++) {
					if (place == div[i].place)
					{


						cout << "|--|----------------|--------------|--------------|--------------|--------------|-----------------|" << endl;
						cout << "|" << setw(2) << i << setw(17) << "| " + div[i].place << setw(15) << "| " + div[i].typeofvacation << "| " << setw(13) << div[i].costt << "| ";
						if (div[i].d < 10)
							cout << "0" << div[i].d;
						else cout << div[i].d;
						cout << ".";
						if (div[i].m < 10)
							cout << "0" << div[i].m;
						else cout << div[i].m;
						cout << "." << div[i].y << "   | " << setw(13) << div[i].status << "| " << setw(15) << div[i].id << " |" << endl;



					}


				}
				cout << "*--------------------------------------------------------------------------------------------------*" << endl << endl;
				break;
			}
			case '2': {
				for (int i = 1; i < count + 1; i++) {
					for (int j = count; j > i; j--) {
						if (div[i] > div[j]) {
							temp = div[i];
							div[i] = div[j];
							div[j] = temp;
						}

					}
				}
				cout << "*-------------------------------------------------------------------------------------------------*" << endl;
				cout << setw(3) << left << "|№" << setw(17) << left << "|Страна" << setw(15) << left << "| Тип отдыха" << setw(15) << left << "| Стоимость" << setw(15) << left << "|Дата " << setw(15) << left << "| Статус" << setw(15) << left << "|id пользователя  |" << endl;
				for (int f = 1; f <= count; f++)
				{
					cout << "|--|----------------|--------------|--------------|--------------|--------------|-----------------|" << endl;
					cout << "|" << setw(2) << f << setw(17) << "| " + div[f].place << setw(15) << "| " + div[f].typeofvacation << "| " << setw(13) << div[f].costt << "| ";
					if (div[f].d < 10)
						cout << "0" << div[f].d;
					else cout << div[f].d;
					cout << ".";
					if (div[f].m < 10)
						cout << "0" << div[f].m;
					else cout << div[f].m;
					cout << "." << div[f].y << "   | " << setw(13) << div[f].status << "| " << setw(15) << div[f].id << " |" << endl;
				}
				cout << "*-------------------------------------------------------------------------------------------------*" << endl << endl;

				break;
			}

			case '3':
			{
				int ID;
				cout << "Ведите ID для поиска:";
				cin >> ID;
				cout << "*--------------------------------------------------------------------------------------------------*" << endl;
				cout << setw(3) << left << "|№" << setw(17) << left << "|Страна" << setw(15) << left << "| Тип отдыха" << setw(15) << left << "| Стоимость" << setw(15) << left << "|Дата " << setw(15) << left << "| Статус" << setw(15) << left << "|id пользователя  |" << endl;
				for (int i = 1; i < 12; i++) {
					if (ID == div[i].id)
					{


						cout << "|--|----------------|--------------|--------------|--------------|--------------|-----------------|" << endl;
						cout << "|" << setw(2) << i << setw(17) << "| " + div[i].place << setw(15) << "| " + div[i].typeofvacation << "| " << setw(13) << div[i].costt << "| ";
						if (div[i].d < 10)
							cout << "0" << div[i].d;
						else cout << div[i].d;
						cout << ".";
						if (div[i].m < 10)
							cout << "0" << div[i].m;
						else cout << div[i].m;
						cout << "." << div[i].y << "   | " << setw(13) << div[i].status << "| " << setw(15) << div[i].id << " |" << endl;



					}


				}
				cout << "*--------------------------------------------------------------------------------------------------*" << endl << endl;
				break;

			}
			/*case '4':
			{
				void sormoney();

			}*/
			default: {
				system("cls");
				cout << "Ввод ошибочен. Повторите ввод.\n";
				break;
			}
			}
			/*cout << "*---------------------------------------------------------------------------------------------------*" << endl;
			cout << setw(3) << left << "|№" << setw(17) << left << "|Страна" << setw(15) << left << "| Тип отдыха" << setw(15) << left << "| Стоимость" << setw(15) << left << "|Дата " << setw(15) << left << "| Статус" << setw(15) << left << "|id пользователя  |" << endl;
			for (int f = 1; f <= count; f++) {
				cout << "|--|----------------|--------------|--------------|--------------|--------------|-----------------|" << endl;
				cout << "|" << setw(2) << f << setw(17) << "| " + div[f].place << setw(15) << "| " + div[f].typeofvacation << "| " << setw(13) << div[f].costt << "| ";
				if (div[f].d < 10)
					cout << "0" << div[f].d;
				else cout << div[f].d;
				cout << ".";
				if (div[f].m < 10)
					cout << "0" << div[f].m;
				else cout << div[f].m;
				cout << "." << div[f].y << "   | " << setw(13) << div[f].status << "| " << setw(15) << div[f].id << " |" << endl;
			}
			cout << "*---------------------------------------------------------------------------------------------------*" << endl << endl;*/
		}
		void red() {
			ifstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			Vacation* div = new Vacation[100];
			int count = 0, f = 1;
			while (in >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id) {
				count++;
				f++;
			}
			in.close();
			ifstream in_new("D:\\tablica.txt.", ios_base::app);
			for (int f = 1; f <= count; f++) {
				in_new >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id;
			}
			in_new.close();
			ofstream in_new1("D:\\tablica.txt.", ios_base::trunc);
			in_new1.close();
			ofstream in_new2("D:\\tablica.txt.", ios_base::app);
			int key;
			cout << "Какой запись желаете изменить?: ";
			check(key);
			cout << endl;
			for (int f = 1; f <= count; f++) {
				if (f != key) {
					in_new2 << div[f].place << " " << div[f].typeofvacation << " " << div[f].costt << " " << div[f].d << " " << div[f].m << " " << div[f].y << " " << div[f].status << " " << div[f].id << endl;
				}
				if (f == key) {
					Vacation a;
					a.add(div[f].id);
				}
			}
			in_new2.close();
			delete[] div;
		}
		void red(int p) {
			ifstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			Vacation* div = new Vacation[100];
			int count = 0, f = 1;
			while (in >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id) {
				count++;
				f++;
			}
			in.close();
			ifstream in_new("D:\\tablica.txt.", ios_base::app);
			for (int f = 1; f <= count; f++) {
				in_new >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id;
			}
			in_new.close();
			ofstream in_new1("D:\\tablica.txt.", ios_base::trunc);
			in_new1.close();
			ofstream in_new2("D:\\tablica.txt.", ios_base::app);
			int key;
			cout << "Какой заказ желаете изменить?: ";
			check(key);
			cout << endl;
			for (int f = 1, k = 1; f <= count; f++) {
				if (p == div[f].id)
				{
					if (k != key) {
						in_new2 << div[f].place << " " << div[f].typeofvacation << " " << div[f].costt << " " << div[f].d << " " << div[f].m << " " << div[f].y << " " << div[f].status << " " << div[f].id << endl;
					}
					if (k == key) {
						Vacation a;
						a.add(p);
					}
					k++;
				}
				else in_new2 << div[f].place << " " << div[f].typeofvacation << " " << div[f].costt << " " << div[f].d << " " << div[f].m << " " << div[f].y << " " << div[f].status << " " << div[f].id << endl;
			}
			in_new2.close();
			system("pause");
			delete[] div;
		}
		void del(int p)
		{
			ifstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			Vacation* div = new Vacation[100];
			int count = 0, f = 1;
			while (in >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id) {
				count++;
				f++;
			}
			in.close();
			ifstream in_new("D:\\tablica.txt.", ios_base::app);
			for (int f = 1; f <= count; f++) {
				in_new >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id;
			}
			in_new.close();
			ofstream in_new1("D:\\tablica.txt.", ios_base::trunc);
			in_new1.close();
			ofstream in_new2("D:\\tablica.txt.", ios_base::app);
			int key;
			cout << "Какую запись желаете удалить?: ";
			check(key);
			cout << endl;
			for (int f = 1, k = 1; f <= count; f++) {
				if (p == div[f].id)
				{
					if (k != key) {
						in_new2 << div[f].place << " " << div[f].typeofvacation << " " << div[f].costt << " " << div[f].d << " " << div[f].m << " " << div[f].y << " " << div[f].status << " " << div[f].id << endl;
					}
					k++;
				}
				else in_new2 << div[f].place << " " << div[f].typeofvacation << " " << div[f].costt << " " << div[f].d << " " << div[f].m << " " << div[f].y << " " << div[f].status << " " << div[f].id << endl;
			}
			in_new2.close();
			delete[] div;
		}
		void del() {
			ifstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			Vacation* div = new Vacation[100];
			int count = 0, f = 1;
			while (in >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id) {
				count++;
				f++;
			}
			in.close();
			ifstream in_new("D:\\tablica.txt.", ios_base::app);
			for (int f = 1; f <= count; f++) {
				in_new >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id;
			}
			in_new.close();
			ofstream in_new1("D:\\tablica.txt.", ios_base::trunc);
			in_new1.close();
			ofstream in_new2("D:\\tablica.txt.", ios_base::app);
			int key;
			cout << "Какой заказ желаете удалить?: ";
			check(key);
			cout << endl;
			for (int f = 1; f <= count; f++) {
				if (f != key) {
					in_new2 << div[f].place << " " << div[f].typeofvacation << " " << div[f].costt << " " << div[f].d << " " << div[f].m << " " << div[f].y << " " << div[f].status << " " << div[f].id << endl;
				}
			}
			in_new2.close();
			delete[] div;
		}
		void tab(int p) {
			system("cls");
			ifstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			Vacation* div = new Vacation[100];
			int count = 0, f = 1, sum = 0;
			while (in >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id) {
				count++;
				sum += div[f].costt;
				f++;
			}
			in.close();
			ifstream in_new("D:\\tablica.txt.", ios_base::app);

			for (int f = 1; f <= count; f++) {
				in_new >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id;
			}
			in_new.close();
			cout << "*-------------------------------------------------------------------------------*" << endl;
			cout << setw(3) << left << "|№" << setw(17) << left << "|Страна" << setw(15) << left << "| Тип отдыха" << setw(15) << left << "| Стоимость" << setw(15) << left << "|Дата " << setw(15) << left << "| Статус       |" << endl;
			int c = 1;
			for (int f = 1; f <= count; f++) {
				if (div[f].id == p)
				{
					cout << "|--|----------------|--------------|--------------|--------------|--------------|" << endl;
					cout << "|" << setw(2) << f << setw(17) << "| " + div[f].place << setw(15) << "| " + div[f].typeofvacation << "| " << setw(13) << div[f].costt << "| ";
					if (div[f].d < 10)
						cout << "0" << div[f].d;
					else cout << div[f].d;
					cout << ".";
					if (div[f].m < 10)
						cout << "0" << div[f].m;
					else cout << div[f].m;
					cout << "." << div[f].y << "   | " << setw(13) << div[f].status << "|" << endl;
					c++;
				}
			}
			cout << "*-------------------------------------------------------------------------------*" << endl;
			cout << "|Общая стоимость " << sum << " |" << endl;
			cout << "|______________________|" << endl;
			delete[] div;
		}
		void tab() {
			ifstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			Vacation* div = new Vacation[100];
			int count = 0, f = 1;
			while (in >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id) {
				count++;
				f++;
			}
			in.close();
			ifstream in_new("D:\\tablica.txt.", ios_base::app);
			for (int f = 1; f <= count; f++) {
				in_new >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id;
			}
			in_new.close();
			cout << "*-----------------------------------------------------------------------------------------------*" << endl;
			cout << setw(3) << left << "|№" << setw(17) << left << "|Страна" << setw(15) << left << "|  отдыха" << setw(15) << left << "| Стоимость" << setw(15) << left << "|Дата " << setw(15) << left << "| Статус" << setw(15) << left << "|id пользователя" << "|" << endl;
			for (int f = 1; f <= count; f++) {
				cout << "|--|----------------|--------------|--------------|--------------|--------------|---------------|" << endl;
				cout << "|" << setw(2) << f << setw(17) << "| " + div[f].place << setw(15) << "| " + div[f].typeofvacation << "| " << setw(13) << div[f].costt << "| ";
				if (div[f].d < 10)
					cout << "0" << div[f].d;
				else cout << div[f].d;
				cout << ".";
				if (div[f].m < 10)
					cout << "0" << div[f].m;
				else cout << div[f].m;
				cout << "." << div[f].y << "   | " << setw(13) << div[f].status << "| " << setw(14) << div[f].id << "|" << endl;
			}
			cout << "*-----------------------------------------------------------------------------------------------*" << endl << endl;

			delete[] div;
		}
		void red2()
		{
			ifstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			Vacation* div = new Vacation[100];
			int count = 0, f = 1;
			while (in >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id) {
				count++;
				f++;
			}
			in.close();
			ifstream in_new("D:\\tablica.txt.", ios_base::app);
			for (int f = 1; f <= count; f++) {
				in_new >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id;
			}
			in_new.close();
			ofstream in_new1("D:\\tablica.txt.", ios_base::trunc);
			in_new1.close();
			ofstream in_new2("D:\\tablica.txt.", ios_base::app);
			int key;
			system("cls");
			cout << "Статус какого заказа желаете изменить?: ";
			check(key);
			cout << endl;
			for (int f = 1; f <= count; f++) {
				if (f != key) {
					in_new2 << div[f].place << " " << div[f].typeofvacation << " " << div[f].costt << " " << div[f].d << " " << div[f].m << " " << div[f].y << " " << div[f].status << " " << div[f].id << endl;
				}
				if (f == key) {
					in_new2 << div[f].place << " " << div[f].typeofvacation << " " << div[f].costt << " " << div[f].d << " " << div[f].m << " " << div[f].y;
					cout << "Введите статус заказа" << endl;
					cout << "1.Оплачено" << endl;
					cout << "2.Запланированно" << endl;

					cout << "Введите нужный элемент: ";
					char ch_key;
					cin >> ch_key;
					cout << endl;
					switch (ch_key) {
					case '1': {
						in_new2 << " оплачен " << div[f].id << endl;
						break;
					}
					case '2': {
						in_new2 << " запланировано " << div[f].id << endl;
						break;
					}

					default: {
						system("cls");
						cout << "Ввод ошибочен. Повторите ввод.\n";
						break;
					}
					}
				}
			}
			in_new2.close();
			delete[] div;
		}
		void task()
		{
			ifstream in("D:\\tablica.txt.", ios_base::app);
			if (!in) {
				cout << "Невозможно открыть файл";
				system("pause");
			}
			Vacation* div = new Vacation[100];
			int count = 0, f = 1;
			while (in >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id) {
				count++;
				f++;
			}
			in.close();
			ifstream in_new("D:\\tablica.txt.", ios_base::app);
			for (int f = 1; f <= count; f++) {
				in_new >> div[f].place >> div[f].typeofvacation >> div[f].costt >> div[f].d >> div[f].m >> div[f].y >> div[f].status >> div[f].id;
			}
			in_new.close();
			int max = 0;
			string temp;
			int counter = 0;
			//cout << "*-------------------------------------------------------------------------------*" << endl;
			//cout << setw(3) << left << "|№" << setw(17) << left << "|Страна" << setw(15) << left << "| Тип отдыха" << setw(15) << left << "| Стоимость" << setw(15) << left << "|Дата " << setw(15) << left << "| Статус       |" << endl;
			int c = 1;
			for (int f = 1; f <= count; f++) {
				for (int j = 1; j <= count; j++)
				{
					if (div[f].place == div[j].place)
					{
						counter++;

					}
				}
				if (counter >= max)
				{
					max = counter;
					temp = div[f].place;
				}
				counter = 0;
			}



			cout << "Самая популярная страна для путешествий -  " << temp << endl;
			cout << "В нее поехали " << max << " раз" << endl;
		}

	};
}
using namespace Vacations;



string crypt(string word, string login) {
	const string KEY = login;
	for (int counter = 0; counter < word.length(); counter++) {
		word[counter] -= (KEY[counter % KEY.length()] - 33) % 159;
		if (word[counter] > 175)
			word[counter] += 49;
		if (word[counter] > 241)
			word[counter] -= 208;
	}
	return word;
}
string decrypt(string word, string login) {
	const string KEY = login;
	for (int counter = 0; counter < word.length(); counter++) {
		word[counter] += (KEY[counter % KEY.length()] - 33) % 159;
		if (word[counter] > 175)
			word[counter] -= 49;
		if (word[counter] > 241)
			word[counter] += 208;
	}
	return word;
}

void InputPassword(string& str2)
{
	int ch = 0;
	while (true)
	{
		ch = _getch();
		if (ch == 13)
		{
			break;
		}
		else if (ch == 8)
		{
			cout << (char)8 << " " << (char)8;
			if (str2.length() != 0)
			{
				str2.erase(str2.length() - 1);
			}
			else
			{
				str2 = "";
			}
		}
		else
		{
			cout << '*';
			str2 = str2 + (char)ch;
		}
	}
	cout << "\n";
	if (!str2.empty())
		return;
	else
		cout << "Введите пароль!\n" << endl;
}
void shifr_admin() {
	system("cls");
	char ch_key;
	bool MENU = true;
	while (MENU) {
		string str1[100], str2[100];
		int k = 1;
		ifstream fin;
		fin.open("D:\\admin.txt.");
		int i = 1, f = 0;
		while (!fin.eof()) {
			str1[i] = "";
			fin >> str1[i];
			i++;
		}
		cout << "Пользователи:";
		for (int f = 3; f <= i; f++) {
			if ((f + 1) % 2 == 0)
				cout << endl << str1[f];
		}
		cout << endl;
		cout << "1.Добавление пользователя\n";
		cout << "2.Удаление пользователя\n";
		cout << "0.Выход из меню управления пользователями\n";
		cout << "Введите нужный элемент: ";
		check(ch_key);
		cout << endl;
		switch (ch_key) {
		case '1': {
			ofstream file("D:\\admin.txt.", ios_base::app);
			string name, pas;
			cout << "Введите логин: ";
			cin >> name;
			cout << "Введите пароль: ";
			cin >> pas;
			cout << endl;
			pas = crypt(pas, name);
			file << " " << name << " " << pas << endl;
			break;
		}
		case '2': {
			ofstream in_new1("D:\\admin.txt.", ios_base::trunc);
			in_new1.close();
			ofstream in_new2("D:\\admin.txt.", ios_base::app);
			int key;
			cout << "Введите номер пользователя, которого желаете удалить: ";
			check(key);
			cout << endl;
			int r = 0;
			for (int f = 1; f <= i;) {
				if (r != key)
					in_new2 << " " << str1[f] << " " << str1[f + 1] << endl;
				r++;
				f += 2;
			}
			in_new2.close();
			break;
		}
		case '0': {
			MENU = false;
			cout << "Выход из программы\n";
			break;
		}
		default:
			system("cls");
			cout << "Ввод ошибочен. Повторите ввод.\n";
			break;
		}
	}
}
void administrator() {
	system("cls");
	char i;
	bool MENU2 = true;
	while (MENU2) {
		system("cls");
		cout << "Меню\n";
		cout << "1.Изменение путевок пользователя\n";
		cout << "2.Удаление путевок пользователя\n";
		cout << "3.Просмотр всех путевок пользователей\n";
		cout << "4.Поиск и сортировка путевок пользователей\n";
		cout << "5.Фильтрация путевок пользователей\n";
		//cout << "5.Просмотр цен на перевозки\n";
		cout << "6.Управление пользователями\n";
		cout << "7.Самое популярное направление\n";
		cout << "0.Выход в меню 1-го уровня\n";
		cout << "Выберите необходимый вам пункт меню: ";
		check(i);
		cout << endl;
		Vacation a;
		switch (i) {
		case '1': {
			a.tab();
			cout << "Введите статус путевки" << endl;
			cout << "1.Изменение всей информации о путевке" << endl;
			cout << "2.Изменение типа путевки" << endl;
			cout << "Введите нужный элемент: ";
			char ch_key;
			cin >> ch_key;
			cout << endl;
			switch (ch_key) {
			case '1': {
				a.red();
				break;
			}
			case '2': {
				a.red2();
				break;
			}
			default: {
				system("cls");
				cout << "Ввод ошибочен. Повторите ввод.\n";
				break;
			}
			}
			break;
		}
		case '2': {
			a.tab();
			a.del();
			break;
		}
		case '3': {
			system("cls");
			a.tab();
			system("pause");
			break;
		}
		case '4': {
			system("cls");
			a.sor();
			system("pause");
			break;
		}
		case '5':
		{
			system("cls");
			a.filtr();
			system("pause");
			break;
		}

		case '6': {
			shifr_admin();
			break;
		}
		case '7': {
			a.task();
			system("pause");
			break;
		}
		case '0': {
			MENU2 = false;
			break;
		}
		default:
			system("cls");
			cout << "Ввод ошибочен. Повторите ввод.\n";
			break;
		}
	}
}
int proverka() {
	system("cls");
	string str1[100];
	string str2[2];
	int k = 1;
	int n = 0;
	while (k == 1) {
		ifstream fin;
		fin.open("D:\\admin.txt.");
		int i = 1, f = 0;
		while (!fin.eof()) {
			fin >> str1[i];
			i++;
		}
		cout << "Введите логин: ";
		cin >> str2[0];
		cout << "Введите пароль: ";
		InputPassword(str2[1]);
		cout << endl;
		for (int p = 1; p < i; p++) {
			if (str1[p] == str2[0]) {
				str1[p + 1] = decrypt(str1[p + 1], str1[p]);
				if (str1[p + 1] == str2[1]) {
					f = 0;
					n = (p + 1) / 2;
					break;
				}
			}
			else f++;
		}
		if (f == 0) {
			k = 0;
			return n;
		}
		else {
			cout << "Логин или пароль ошибочны. Повторить ввод?(1/0): ";
			cin >> k;
			if (k == 0)
				return n;
		}
		fin.close();
		system("cls");
	}
}
void user_menu(int p)
{
	char i;
	bool MENU2 = true;
	while (MENU2) {
		cout << "Меню\n";
		cout << "1.Заказ путевки\n";
		cout << "2.Информация о странах\n";
		cout << "3.Удаление путевки\n";
		cout << "4.Просмотр добавленных записей\n";
		cout << "0.Выход в меню 1-го уровня\n";
		cout << "Выберите необходимый вам пункт меню: ";
		cin >> i;
		cout << endl;
		Vacation a;
		switch (i) {
		case '1': {
			system("cls");
			a.add(p);
			system("pause");
			break;
		}
		case '2': {
			system("cls");
			countryinfo();
			/*a.red(p);*/
			system("pause");
			break;
		}
		case '3': {
			system("cls");
			a.tab(p);
			a.del(p);
			system("pause");
			break;
		}
		case '4': {
			a.tab(p);
			break;
		}
		case '0':
			MENU2 = false;
			break;
		default:
			system("cls");
			cout << "Ввод ошибочен. Повторите ввод.\n";
			break;
		}
	}
}
bool proverka_admin() {
	system("cls");
	string str1[100];
	string str2[100];
	int k = 1;
	while (k) {
		k = 1;
		//ifstream fin;
		//fin.open("C:\\Users\\Татьяна\\Desktop\\ооп\\кп\\курсач\\admin.txt"); русификация не всегда дает отрктыть по пути файл(
		ifstream fin;
		fin.open("D:\\admin.txt.");
		if (!fin)
		{
			// то выводим следующее сообщение об ошибке и выполняем функцию exit()
			cerr << "Uh oh, SomeText.txt could not be opened for reading!" << endl;
			exit(1);
		}
		int i = 1, f = 0;
		while (!fin.eof()) {
			str1[i] = "";
			fin >> str1[i];
			i++;
		}
		str2[k] = "admin";
		cout << "Введите пароль: ";
		InputPassword(str2[k + 1]); //= invisible();
		for (int p = 1; p < i; p++) {
			if (str1[p] == str2[k]) {
				str2[p + 1] = decrypt(str2[p + 1], str2[p]);
				if (str1[p + 1] == str2[k + 1]) {
					f = 0;
					break;
				}
			}
			else f++;
		}
		if (f == 0) {
			k = 0;
			cout << endl;
			return true;
		}
		else {
			cout << "Пароль ошибочный. Повторить ввод?(1/0): ";
			cin >> k;
			if (k == 0)
				return false;
		}
		fin.close();
	}
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	char ch_key;
	bool MENU = true;
	while (MENU) {
		cout << "Меню\n";
		cout << "1.Вход под администратором\n";
		cout << "2.Вход под пользователем\n";
		cout << "0.Выход из программы\n";
		cout << "Введите нужный элемент: ";
		cin >> ch_key;
		cout << endl;
		switch (ch_key) {
		case '1': {
			cout << "Вход под администратором\n";
			if (proverka_admin() == true)
				administrator();
			break;
		}
		case '2': {
			cout << "Вход под пользователем\n";
			int p = proverka();
			if (p > 0)
				user_menu(p);
			break;
		}
		case '0': {
			MENU = false;
			cout << "Выход из программы\n";
			break;
		}
		default:
			system("cls");
			cout << "Ввод ошибочен. Повторите ввод.\n";
			break;
		}
	}
	system("pause");
	return 0;
}