// сдесь я буду разробатовать конечную версию игры The Great War2.0.

// нужные библтотеки :
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include "minnoe.h"
#include <string.h>
#include <errno.h>

struct damage
{
  int lives[5];
}d;

struct tdamage
{
	int livet[3];
}td;

struct action
{
  int action[3];
}a;

void action(int array[], int nam)
{
  int i;
  int ter = 1;

  for(i = 0; i < nam; ++i)
  {
    array[i] = ter;
    //printf("Check : %d ", td.livet[i]);

    ++ter;
  }
}

void livet(int array[], int nam)
{
	int i;
  int ter = 1;

  for(i = 0; i < nam; ++i)
  {
    array[i] = ter;
    //printf("Check : %d ", td.livet[i]);

    ++ter;
  }
}

void lives(int array[], int nam)
{
  int i;
  int ter = 1;

  for(i = 0; i < nam; ++i)
  {
    array[i] = ter;

    ++ter;
  }
}

int main()
{
printf("\e[1;1H\e[2J");

lives(d.lives, 5);

livet(td.livet, 3);

action(a.action, 3);

const int ZIGA = 1000000; // это константа для ввода разных строк в игре.

srand(time(NULL));

printf("                                                      ВНИМАНИЕ :       \n");
printf("ИГРА 'The Great War' ЯВЛЯЕТСЯ ПРОЕКТОМ, В КОТОРОМ ВСЕ ПРОИСХОДЯЩИЕ СОБЫТИЯ ВЫМЫШЛЕНЫ.\n");
//printf("ИГРАЯ В ИГРУ КОМПАНИИ 'The Company USSR' ВЫ СОГЛАШАЕТЕСЬ С КОНФИСАЛЬНОСТЬЮ ЭТОЙ КОМПАНИИ.\n");
printf("\n");
printf("\n");

sleep(10);

int question; // выбор игрока для продолжения.

printf ("Если вы хотите начать игру, нажмите 1.\n");
printf ("Если вы хотите выйти из игры, нажмите 2.\n");

printf ("Введите цифру : "); 

scanf ("%d", &question);
printf ("                                                        \n");

if (question == 2)
{
printf ("Закрытие игры!\n");
_exit(0);
}

printf("\e[1;1H\e[2J");


// начало игры : 

printf ("                                      Создатель игры :                   \n"); 
sleep (3);
printf ("                                      The Company USSR.                 \n");
sleep (3);
printf ("                                       Название игры :                 \n");
sleep (3);
printf ("                                       'TheGreatWar.'                    \n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
sleep (5);
printf ("                                       1944 год                 \n");
sleep(2);
printf ("Кто-то : Ему удалось выполнить свой план! Мы готовы к этой войне?\n");
sleep(4);
printf ("Кто-то : Почти, но вот.....\n");
sleep(4);
printf ("Кто-то : Почему почти? Что вот? Я просил чёткого ответа!\n");
sleep(4);
printf ("Кто-то испугано говорит : Техника, люди иииииии...\n");
sleep(4);
printf ("Кто-то : Набирайте солдат! Немедленно!\n");
sleep(4);
printf ("Кто-то : Но надо их обучить.\n");
sleep(4);
printf ("Кто-то : Нет времени, нет времени! Мы слишком долго ждали!!!\n");
printf ("                                                               \n");
sleep(5);

// переменные для этого действия :
//const int name = 1000; // это константа для ввода имени игрока.

char myname[ZIGA]; // этот массив для того, чтобы ввести в него имя игрока.

// ввод имени игрока :
printf("Разработчик : Напишите своё имя : \n");
fgets(myname, ZIGA, stdin);
fscanf(stdin, "%[^\n]", myname);
printf("\n");


printf ("Разработчик : Чтобы узнать более подробную информацию \n");
printf ("вы должны проходить квесты. При прохождении квеста вам будут\n");
printf ("открываться тайные записи, которые расскажут вам запутанную историю этой войны\n");
printf ("                                                               \n");

sleep(3);

//sleep (5);

printf ("Командир : Привет ,рядовой, ты надежда страны, но пред тем как воевать нужно пройти обучение.\n");
printf ("Командир : Для того, чтобы выстрелить, введите любую цифру в пределах десяти : \n");
printf ("Разработчик : На точность стрельбы это не влияет :)\n");
printf ("                                                                       \n");

printf ("Откройте огонь :");

int y; // для выстрела.

scanf ("%d", &y);

y = 0;

printf ("                                           BOOM!!!              \n");

int gun = rand() % 9;

if (gun >= 2)
{
printf ("Вы попали в цель.\n");
printf ("                                               \n");
}
else
{
printf ("Вы не попали в цель.\n");
printf ("Командир : Нет времени возобновлять обучение, садись в танк поехали на задание.\n");
printf ("                                                                        \n");
}

fprintf (stdout,"Заряжающий : %s, проснись, командир даёт новое задание!\n", myname);

sleep (3);

printf ("Командир : Нам нужно восоединиться с группой.\n");
printf("Для этого нужно пробраться через минное поле.\n");
printf("\n");
printf("Разработчик : введите координаты, чтобы пройти минное поле : \n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");

// минное поле :

minnoe();

printf("Танк выехал из минного поля, все протёрли лоб с облегчением. Все понимали, что они были на волоске от смерти.\n");
printf("Но как вдруг слетела гусеница и танк остановился.\n");
fprintf(stdout, "Командир : %s почени гусеницу.\n", myname);
printf("Вы выберайтесь из танка и видите сломанную гусеницу.");
printf("\n");
printf("\n");
printf("\n");

printf("Разработчик : Чтобы починить гусеницу нужно найти ошибочные слова в правиле : \n");
printf("\n");
printf("\n");

printf("Давление газа или жидкости передаётся вверх.\n¨");
printf("\n");
printf("\n");
printf("\n");
printf("\n");

char text[] = "вверх";
char *error;
char faic[ZIGA];
int protecter = 1;
int sprotecter = 1;

int namber;

while(protecter != 0)
{
printf("Введите ошибочное слово : \n");
fgets(faic, ZIGA, stdin);
fscanf(stdin, "%[^\n]", faic);
perror("Waring : ");
printf("\n");


error = strstr(text, faic);
//printf("Check : %c.\n", error);

if(error == NULL)
{
   printf("Неудача! Попробуйте снова.\n");
   printf("\n");
}
else
{
  printf("Правильно! А теперь выбери верное изложение правила : \n");
   printf("\n");
   printf("\n");
  // printf("\n");
   //printf("\n");
   //printf("\n");

   while(sprotecter != 0)
   {

   printf("Номер 1 : Давление газа или жидкости передаётся по всем направлениям, без изменений.\n");
   printf("\n");

   printf("Номер 2 : Давление газа или жидкости не передаётся по всем направлениям, без изменений.\n");
   printf("\n");

   printf("Номер 3 : Давление газа или жидкости передаётся по всем направлениям, причём с изменениями.\n");
   printf("\n");

   printf("Введите номер правила : ");
   scanf("%d", &namber);
   printf("\n");

   if(namber == 1)
   {
       printf("Правильно! Вы починили гусеницу! Вы молодцы!\n");

       --sprotecter;

       --protecter;
   }
   else
   {
       printf("Неудача! Попробуйте снова.\n");
       //printf("Ярик.\n");
   }
  }
}

}


//printf("Ярик!!!\n");
printf("Вы забирайтесь в танк.\nКомандир : Молодец! Рядовой. Нам поступила новая задача! Нам нужно соединяться с группой.\n");
printf("Вы начинайте ехать как вдруг из-за холма выежает немецкий танк.\n");
fprintf(stdout,"Командир : Внимание! Заряжающий, доставляй снаряды в казённик. А %s наводи орудие.\n", myname);

printf("Разработчик : Внимание сейчас от вас зависит ход сражения. Вы должны будите решать задачи на время.\n");
printf("Если вы готовы,то введите 1.\n");

do
{
printf("Введите ваш выбор : ");
scanf("%d", &protecter);
printf("\n");
}while(protecter > 2);

if(protecter == 2)
{
  sleep(20);
}

//y = 7;

printf("Заряжающий : Заряжаю орудие!!!\n");

for(y = 0; y < 7; ++y)
{
	printf("Секунд : %d.\n", y);
	
	sleep(1);
}
printf("\n");

printf("Заряжающий : Заряжено.\n");
printf("\n");
printf("\n");

//clock_t t = clock();

int killive = 2;
int i; // для цикло for.
int arrayprotect = 4; // для вычисления жизни танка.
int result; // для ввода ответа.

printf("Жизней у противника : ");

for(i = 0; i < 3; ++i)
  {
    
    if(td.livet[i] == 0)
    {
      break;
    }
    

    printf("%d ", td.livet[i]);
  }
  printf("\n");

while(protecter != 0)
{
  printf("Жизней у тебя : ");

  for(i = 0; i < 5; ++i)
  {
    if(d.lives[i] == 0)
    {
      break;
    }

    printf("%d ", d.lives[i]);
  }
  printf("\n");
  
  printf("Задача : \n");
  printf("корень(625) / 5.\n");
  printf("Введите ответ : ");
  scanf("%d", &result);
  printf("\n");
  
  if(result != 5)
  {
    printf("Командир : Наш танк повредили!!!\n");
    printf("\n");
    printf("\n");

    d.lives[arrayprotect] = 0;

    --arrayprotect;
  }
  else
  {
    --protecter;


    td.livet[killive] = 0;

    //printf("Check : %d \n", killive);
    //printf("Check : %d \n", td.livet[killive]);
    
    --killive;
  }

  if(d.lives[0] == 0)
  {
    printf("Танк уничтожен!!!\n");
    printf("Game Over.\n");

    exit(0);
  }
  //--protecter;
}

printf("Вы : Попал!!!\n");
printf("Командир : Молодец, рядовой!!!\n");
printf("\n");

printf("Жизней у противника : ");
for(i = 0; i < 3; ++i)
{
    if(td.livet[i] == 0)
    {
	    break;
    }

    printf("%d ", td.livet[i]);
}

printf("\n");

printf("Заряжающий : Заряжаю орудие!!!\n");

for(y = 0; y < 7; ++y)
{
	printf("Секунд : %d.\n", y);
	
	sleep(1);
}
printf("\n");

printf("Заряжающий : Заряжено.\n");
printf("\n");
printf("\n");

protecter = 1;

while(protecter != 0)
{
  printf("Жизней у тебя : ");

  for(i = 0; i < 5; ++i)
  {
    if(d.lives[i] == 0)
    {
      break;
    }

    printf("%d ", d.lives[i]);
  }
  printf("\n");
  
  printf("Задача : \n");
  printf("в квадрате((8 + 4)) - в квадрате((12 - 5)).\n");
  printf("Введите ответ : ");
  scanf("%d", &result);
  printf("\n");
  
  if(result != 95)
  {
    printf("Командир : Наш танк повредили!!!\n");
    printf("\n");
    printf("\n");

    d.lives[arrayprotect] = 0;

    --arrayprotect;
  }
  else
  {
    --protecter;
    
    td.livet[killive] = 0;
    
    --killive;
  }

  if(d.lives[0] == 0)
  {
    printf("Танк уничтожен!!!\n");
    printf("Game Over.\n");

    exit(0);
  }
  //--protecter;
}

printf("Вы : Попал!!!\n");
printf("Командир : Молодец, рядовой!!!\n");
printf("\n");

printf("Жизней у противника : \n");

for(i = 0; i < 3; ++i)
  {
    if(td.livet[i] == 0)
    {
      break;
    }

    printf("%d ", td.livet[i]);
  }
  
  printf("\n");
  printf("\n");

  printf("Заряжающий : Заряжаю орудие!!!\n");

for(y = 0; y < 7; ++y)
{
  printf("Секунд : %d.\n", y);
  
  sleep(1);
}
printf("\n");

printf("Заряжающий : Заряжено.\n");
printf("\n");
printf("\n");

double result1;

protecter = 1;

while(protecter != 0)
{
  printf("Жизней у тебя : ");

  for(i = 0; i < 5; ++i)
  {
    if(d.lives[i] == 0)
    {
      break;
    }

    printf("%d ", d.lives[i]);
  }
  printf("\n");
  
  printf("Задача : \n");
  printf("4.3 * 2.8 - 3.8 * 1.2 - 2.8 * 3.1.\n");
  printf("Подсказка : легче его решить способом группировки.\n");
  printf("\n");

  printf("Введите ответ : ");
  scanf("%lf", &result1);
  printf("\n");
  
  if(result1 != -1.2)
  {
    printf("Командир : Наш танк повредили!!!\n");
    printf("\n");
    printf("\n");

    d.lives[arrayprotect] = 0;

    --arrayprotect;
  }
  else
  {
    --protecter;
    
    td.livet[killive] = 0;
    
    --killive;

    printf("Вы : Я его уничтожил!!!\n");
    printf("Командир : Так держать, боец!\n");
    printf("\n");
  }

  if(d.lives[0] == 0)
  {
    printf("Танк уничтожен!!!\n");
    printf("Game Over.\n");

    exit(0);
  }
  //--protecter;
}

printf("\n");
printf("\n");

printf("Вдруг вы слышите гул Ju 87, самолёт, горя после попаданий зенитных снарядов, падает перед вами.\n");
printf("Командир и вы выбераетесь из танка и начинаете осматривать обломки самолёта.\n");
printf("Выдруг вы увидели железный ящик с замочной скважиной в кабине пилота.\n");
printf("Вы : Я тут что-то нашёл!\n");
printf("Командир подходит к вам и наклоняется поближе к загадочному объекту, чтобы лучше его разглядеть.\n");
printf("Командир : Здесь могут быть документы.\n");
printf("Вы : Я попробую его вскрыть.\n");

printf("Чтобы вскрыть объект нужно решить геометрическую задачу.\n");
printf("У вас будет три попытки.\n");
printf("\n");

arrayprotect = 2;

protecter = 1;

while(protecter != 0)
{
  printf("Осатолось попыток : ");

  for(i = 0; i < 5; ++i)
  {
    if(a.action[i] == 0)
    {
      break;
    }

    printf("%d ", a.action[i]);
  }
  printf("\n");
  
  printf("Задача : \n");
  printf("              Дано : \n");
  printf("Прямоугольный треугольник(ABC) с основание AC.\n");
  printf("Гиапатенуза равна 10см.\n");
  printf("Угол(ACB) в два раза больше, чем угол(ABC).\n");
  printf("             Найти : \n");
  printf("           Сторону Ac.\n");
  printf("\n");
  printf("\n");

  printf("Введите ответ : ");
  scanf("%d", &result);
  printf("\n");
  
  if(result != 5)
  {
    printf("Вы : не получилось попробую ещё!!!\n");
    printf("\n");
    printf("\n");

    a.action[arrayprotect] = 0;

    --arrayprotect;

    if(a.action[0] == 0)
  {
    printf("Вы : Не получилось. Как жаль.\n");
    printf("Командир : Ладно уж, поехали.\n");
  }

  }
  else
  {
    --protecter;

       printf("Вы : Получилось! Ура!!!\n");

       printf ("                                   Начало конца :                \n");
       printf ("Гитлер давно хотел захватить СССР. Он их называет 'Дикари с востока'\n");
       printf ("В 1939 году он начал готовиться к войне. Но наподать Гитлер не спешил.\n");
       printf ("У него был зловещий план 'Вихрь' : захватить все страны, а затем со всех сторон напасть на СССР\n");
       printf ("и завоевать его.\n");
       printf ("Часть плана Гитлера по захвату стран осуществилась. Все страны были уже захвачены.\n");
       printf ("И вот настал день, когда Гитлер напал на СССР. Случилось это 22 июня 1944 года.\n");
       printf ("Со всех сторон на советскую границу налетели полчища самолётов,\n");
       printf ("лязгая своими гусиницами, наехали танки.\n");
       printf ("Эта наступление стало самым маштабным наступление в истории.\n");

       sleep(10);
  }

  if(a.action[0] == 0)
  {
    printf("Вы : Не получилось. Как жаль.\n");
    printf("Командир : Ладно уж поехали.\n");

    --protecter;

    sleep(4);
  }
}

printf("\n");
printf("\n");

printf("Вы с командиром забираетесь в танк и отправляетесь в путь.\n");

printf("                       Loging : \n");
for(i = 0; i < 40; ++i)
{
  printf("#");
}

printf("\n");

printf("\e[1;1H\e[2J");

printf("Вы подъежаете к месту сбора и видите там ожесточённый бой.\n");
printf("Мехвод : Что за!!! Это же место сбора, а не поле боя!?\n");
printf("Командир : Я не знаю,что произошло, но могу сказать одно : В БОЙ!!!!!\n");
printf("Весь экипаж разом крикнул шумнее грома : 'УРА!!!'.\n");
printf("В танк наших друзей полетели снаряды. Броня как будто сама ревела : 'Ура'!!!\n");
printf("И вдруг откуда ни возьмись налетели пекирующие бомбардировщики.\n");
printf("Всё вокруг горело,гремело,стреляло,раздавались мощные взрывы.\n");
printf("Бомба упала прямо в нескольких десятков метров от танка нашего экипажа и взорвалась.\n");
printf("В танк полетели осколки,но почти все осколки были сдержаны бронёй,кроме одного крупного.\n");
printf("Он пробил бортовую броню и влетел в двигатель.\n");
printf("Весь экипаж был контужен.\n");

printf("\n");

printf("Продолжение следует.\n");

sleep(30);

printf("\e[1;1H\e[2J");




}
//elapsed_time = clock() - t;

/*
if(elapsed_time >= 12)
{
  printf("Вы не справились с заданием. Немецкий танк выстрельнул вас и подбил.\n");
  printf("Game Over.\n");
  exit(0);
}
*/
