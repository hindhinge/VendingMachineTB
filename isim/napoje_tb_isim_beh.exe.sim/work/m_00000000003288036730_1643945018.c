/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/PWR/sem 6/WSC/PROJEKT/Projekt/WSC/napoje_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {21, 0};
static int ng4[] = {3, 0};
static int ng5[] = {20, 0};
static int ng6[] = {2, 0};
static const char *ng7 = "output.txt";
static const char *ng8 = "w";
static const char *ng9 = "----------------------Konfiguracja rejestr\363w----------------------\n";
static int ng10[] = {4, 0};
static unsigned int ng11[] = {12U, 0U};
static int ng12[] = {5, 0};
static int ng13[] = {8, 0};
static const char *ng14 = "a+";
static const char *ng15 = "----------------------Odczyt rejestr\363w----------------------\n";
static const char *ng16 = "Zapis do rejestru: adres =%d, dane_we=%b\n";
static const char *ng17 = "Zapis do rejestru: adres =%d, dane_we=%b";
static const char *ng18 = "Odczyt z rejestru: adres =%d, dane_wy=%b\n";
static const char *ng19 = "Odczyt z rejestru: adres =%d, dane_wy=%b";
static const char *ng20 = "----------------------Rozpocz\352cie procesu----------------------\n";
static int ng21[] = {6, 0};
static int ng22[] = {7, 0};
static const char *ng23 = "Wybrany napoj: %d\n";
static const char *ng24 = "Wybrany napoj: %d";
static const char *ng25 = "Wybrana moc: %d\n";
static const char *ng26 = "Wybrana moc: %d";
static const char *ng27 = "Niewystarczaj\271ca ilo\234\346 napoju w zasobniku. Obecna ilo\234\346: %d, wymagana ilo\234\346: %d\n";
static const char *ng28 = "Niewystarczaj\271ca ilo\234\346 napoju w zasobniku. Obecna ilo\234\346: %d, wymagana ilo\234\346: %d";
static const char *ng29 = "Powr\363t do stanu wyboru 001\n";
static const char *ng30 = "Powr\363t do stanu wyboru 001";
static const char *ng31 = "\n----------------------Zako\361czenie procesu----------------------\n";
static const char *ng32 = "\n----------------------Zako\361czenie procesu----------------------";
static const char *ng33 = "Zbyt ma\263o przygotowanych monet. Potrzebne monety: %d, przygotowane monety: %d\n";
static const char *ng34 = "Zbyt ma\263o przygotowanych monet. Potrzebne monety: %d, przygotowane monety: %d";
static const char *ng35 = "Wrzucanie %d monet\n";
static const char *ng36 = "Wrzucanie %d monet";
static const char *ng37 = "Nr. podajnika %d zgodny z napojem %d\n";
static const char *ng38 = "Nr. podajnika %d zgodny z napojem %d";
static const char *ng39 = "Porcje napoju %d zgodne z wybrana moca %d\n";
static const char *ng40 = "Porcje napoju %d zgodne z wybrana moca %d";
static const char *ng41 = "Porcje napoju %d niezgodne z wybrana moca %d\n";
static const char *ng42 = "Porcje napoju %d niezgodne z wybrana moca %d";
static const char *ng43 = "Zwr\363cono reszt\352\n";
static const char *ng44 = "Zwr\363cono reszt\352";
static const char *ng45 = "Brak nale\277nej reszty\n";
static const char *ng46 = "Brak nale\277nej reszty";
static const char *ng47 = "Pozostalo porcji: (%b - %b) = %b\n";
static const char *ng48 = "Pozostalo porcji: (%b - %b) = %b ";
static const char *ng49 = "Blad obliczania pozostalych porcji. Powinno byc (%b - %b) = %b, jest %b\n";
static const char *ng50 = "Blad obliczania pozostalych porcji. Powinno byc (%b - %b) = %b, jest %b";
static const char *ng51 = "Zakonczono zakup poprawnie, powrot do stanu wyboru 001\n";
static const char *ng52 = "Zakonczono zakup poprawnie, powrot do stanu wyboru 001";



static void Initial_79_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);

LAB4:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3036);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3220);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3828);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3828);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2852);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3828);
    xsi_process_wait(t2, 1500000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3828);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2852);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Always_128_1(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 5132);
    *((int *)t2) = 1;
    t3 = (t0 + 4100);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(132, ng0);

LAB5:    xsi_set_current_line(133, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng8);
    t5 = (t4 + 4);
    *((int *)t5) = 0;
    t6 = (t0 + 3404);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng9, 1, t0);
    xsi_set_current_line(135, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(137, ng0);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(147, ng0);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng13)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(157, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng15, 1, t0);
    xsi_set_current_line(159, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(161, ng0);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB18:    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng13)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3972);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB7:    xsi_set_current_line(138, ng0);

LAB9:    xsi_set_current_line(139, ng0);
    t14 = (t0 + 2208);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 7U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 7U);
    t25 = (t0 + 1656);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 3);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3972);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2024);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3972);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2024);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 2208);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB6;

LAB13:    xsi_set_current_line(148, ng0);

LAB15:    xsi_set_current_line(149, ng0);
    t14 = (t0 + 2208);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 7U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 7U);
    t25 = (t0 + 1656);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 3);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 15U);
    t14 = (t0 + 1748);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 3972);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2024);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3972);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2024);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 2208);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB12;

LAB19:    xsi_set_current_line(162, ng0);

LAB21:    xsi_set_current_line(163, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 2024);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 7U);
    t14 = (t0 + 1656);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 3);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 3972);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2116);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3972);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2116);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 2208);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB18;

LAB24:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1932);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB2;

}

static void Always_173_2(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 5140);
    *((int *)t2) = 1;
    t3 = (t0 + 4244);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(174, ng0);

LAB5:    xsi_set_current_line(175, ng0);
    t4 = (t0 + 2024);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(181, ng0);

LAB10:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(175, ng0);

LAB9:    xsi_set_current_line(176, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 1564);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    *((int *)t15) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t15 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t15, 0, 0, 32);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 1748);
    t14 = (t13 + 36U);
    t16 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng16, 3, t0, (char)118, t7, 3, (char)118, t16, 8);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1748);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t4, 3, (char)118, t7, 8);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB8;

LAB11:    xsi_set_current_line(182, ng0);

LAB14:    xsi_set_current_line(183, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    *((int *)t15) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t15 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t15, 0, 0, 32);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng18, 3, t0, (char)118, t7, 3, (char)118, t14, 8);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 600U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng19, 3, t0, (char)118, t4, 3, (char)118, t6, 8);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB13;

}

static void Always_192_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 4360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 5148);
    *((int *)t2) = 1;
    t3 = (t0 + 4388);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(193, ng0);

LAB5:    xsi_set_current_line(194, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2300);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3036);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t6) = 1;

LAB23:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB35;

LAB32:    if (t18 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t6) = 1;

LAB35:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;

LAB49:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3220);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(199, ng0);

LAB13:    xsi_set_current_line(200, ng0);
    t28 = (t0 + 4260);
    xsi_process_wait(t28, 20000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(200, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 1288);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(201, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(202, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(205, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB12;

LAB22:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(207, ng0);

LAB27:    xsi_set_current_line(208, ng0);
    t28 = (t0 + 4260);
    xsi_process_wait(t28, 20000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(208, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 1288);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(209, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(210, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(211, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB26;

LAB34:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(214, ng0);

LAB39:    xsi_set_current_line(215, ng0);
    t28 = (t0 + 4260);
    xsi_process_wait(t28, 20000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(215, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 1288);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(217, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    xsi_set_current_line(220, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB38;

LAB48:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(222, ng0);

LAB53:    xsi_set_current_line(223, ng0);
    t28 = (t0 + 4260);
    xsi_process_wait(t28, 20000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(223, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 1288);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(224, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB56:    xsi_set_current_line(225, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 4260);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB57:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB52;

}

static void Always_237_4(char *t0)
{
    char t6[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 5156);
    *((int *)t2) = 1;
    t3 = (t0 + 4532);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(238, ng0);

LAB5:    xsi_set_current_line(239, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1564);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(240, ng0);
    *((int *)t6) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(241, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng20, 1, t0);
    xsi_set_current_line(242, ng0);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB15:    xsi_set_current_line(250, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB7:    xsi_set_current_line(245, ng0);
    t8 = ((char*)((ng12)));
    t9 = (t0 + 1656);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB15;

LAB9:    xsi_set_current_line(246, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1656);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB15;

LAB11:    xsi_set_current_line(247, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1656);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB15;

LAB16:    xsi_set_current_line(250, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 2944);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 3);
    xsi_set_current_line(252, ng0);
    t2 = (t0 + 2944);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t8 = (t0 + 2760);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 5, t5, 3, t10, 2);
    t11 = (t0 + 3036);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 5);
    xsi_set_current_line(254, ng0);
    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);

LAB17:    t8 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t8, 32);
    if (t7 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t7 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t7 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB26:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB18:    xsi_set_current_line(255, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 1656);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);
    goto LAB26;

LAB20:    xsi_set_current_line(256, ng0);
    t3 = ((char*)((ng6)));
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 3);
    goto LAB26;

LAB22:    xsi_set_current_line(257, ng0);
    t3 = ((char*)((ng4)));
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 3);
    goto LAB26;

LAB27:    xsi_set_current_line(260, ng0);
    t3 = (t0 + 600U);
    t8 = *((char **)t3);
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t8, 0, 0, 8);
    xsi_set_current_line(262, ng0);
    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB28:    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 2668);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    t12 = (t8 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB30;

LAB29:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB30;

LAB33:    if (*((unsigned int *)t8) < *((unsigned int *)t11))
        goto LAB31;

LAB32:    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(268, ng0);
    *((int *)t6) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(269, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 2668);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng23, 2, t0, (char)118, t11, 2);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)118, t8, 2);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(273, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB30:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB31:    *((unsigned int *)t6) = 1;
    goto LAB32;

LAB34:    xsi_set_current_line(264, ng0);

LAB36:    xsi_set_current_line(265, ng0);
    t21 = (t0 + 4404);
    xsi_process_wait(t21, 20000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(265, ng0);
    t22 = ((char*)((ng2)));
    t23 = (t0 + 1288);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 1);
    xsi_set_current_line(266, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(266, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(262, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 2208);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 32);
    goto LAB28;

LAB39:    xsi_set_current_line(273, ng0);
    t3 = ((char*)((ng2)));
    t8 = (t0 + 1104);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(274, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 1104);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(276, ng0);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB41:    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 2760);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    t12 = (t8 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB43;

LAB42:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t8) < *((unsigned int *)t11))
        goto LAB44;

LAB45:    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(282, ng0);
    *((int *)t6) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(283, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 2760);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng25, 2, t0, (char)118, t11, 2);
    xsi_set_current_line(284, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng26, 2, t0, (char)118, t8, 2);
    xsi_set_current_line(285, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(289, ng0);
    t2 = (t0 + 2576);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 2760);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    t12 = (t8 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB53;

LAB52:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t8) < *((unsigned int *)t11))
        goto LAB54;

LAB55:    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(303, ng0);

LAB63:    xsi_set_current_line(305, ng0);
    t2 = (t0 + 2852);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 3036);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    t12 = (t8 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB65;

LAB64:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t8) < *((unsigned int *)t11))
        goto LAB66;

LAB67:    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(318, ng0);

LAB75:    xsi_set_current_line(319, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB43:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(278, ng0);

LAB49:    xsi_set_current_line(279, ng0);
    t21 = (t0 + 4404);
    xsi_process_wait(t21, 20000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(279, ng0);
    t22 = ((char*)((ng2)));
    t23 = (t0 + 1288);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 1);
    xsi_set_current_line(280, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(280, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(276, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 2208);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 32);
    goto LAB41;

LAB53:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB55;

LAB54:    *((unsigned int *)t6) = 1;
    goto LAB55;

LAB57:    xsi_set_current_line(289, ng0);

LAB60:    xsi_set_current_line(291, ng0);
    *((int *)t24) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t21 = (t24 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 3404);
    xsi_vlogvar_assign_value(t22, t24, 0, 0, 32);
    xsi_set_current_line(292, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 2576);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 2760);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng27, 3, t0, (char)118, t11, 8, (char)118, t14, 2);
    xsi_set_current_line(293, ng0);
    t2 = (t0 + 2576);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 2760);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 0, ng28, 3, t0, (char)118, t8, 8, (char)118, t11, 2);
    xsi_set_current_line(294, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng29, 1, t0);
    xsi_set_current_line(295, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(296, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng31, 1, t0);
    xsi_set_current_line(297, ng0);
    xsi_vlogfile_write(1, 0, 0, ng32, 1, t0);
    xsi_set_current_line(298, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(299, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB59:    goto LAB2;

LAB61:    xsi_set_current_line(299, ng0);
    t3 = ((char*)((ng2)));
    t8 = (t0 + 1196);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(300, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(300, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 1196);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(301, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB59;

LAB65:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t6) = 1;
    goto LAB67;

LAB69:    xsi_set_current_line(305, ng0);

LAB72:    xsi_set_current_line(307, ng0);
    *((int *)t24) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t21 = (t24 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 3404);
    xsi_vlogvar_assign_value(t22, t24, 0, 0, 32);
    xsi_set_current_line(308, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 3036);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 2852);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng33, 3, t0, (char)118, t11, 5, (char)118, t14, 5);
    xsi_set_current_line(309, ng0);
    t2 = (t0 + 3036);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 2852);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 0, ng34, 3, t0, (char)118, t8, 5, (char)118, t11, 5);
    xsi_set_current_line(310, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng29, 1, t0);
    xsi_set_current_line(311, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(312, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng31, 1, t0);
    xsi_set_current_line(313, ng0);
    xsi_vlogfile_write(1, 0, 0, ng32, 1, t0);
    xsi_set_current_line(314, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(315, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB71:    goto LAB59;

LAB73:    xsi_set_current_line(315, ng0);
    t3 = ((char*)((ng2)));
    t8 = (t0 + 1196);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(316, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB74:    xsi_set_current_line(316, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 1196);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB71;

LAB76:    xsi_set_current_line(319, ng0);
    t3 = ((char*)((ng2)));
    t8 = (t0 + 1104);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(320, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB77:    xsi_set_current_line(320, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 1104);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(322, ng0);
    xsi_set_current_line(322, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB78:    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 2852);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    t12 = (t8 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB80;

LAB79:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB80;

LAB83:    if (*((unsigned int *)t8) < *((unsigned int *)t11))
        goto LAB81;

LAB82:    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(327, ng0);
    *((int *)t6) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(328, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = (t0 + 2852);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng35, 2, t0, (char)118, t11, 5);
    xsi_set_current_line(329, ng0);
    t2 = (t0 + 2852);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng36, 2, t0, (char)118, t8, 5);
    xsi_set_current_line(330, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(332, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(333, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB80:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB82;

LAB81:    *((unsigned int *)t6) = 1;
    goto LAB82;

LAB84:    xsi_set_current_line(323, ng0);

LAB86:    xsi_set_current_line(324, ng0);
    t21 = (t0 + 4404);
    xsi_process_wait(t21, 20000LL);
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    xsi_set_current_line(324, ng0);
    t22 = ((char*)((ng2)));
    t23 = (t0 + 1840);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 1);
    xsi_set_current_line(325, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB88:    xsi_set_current_line(325, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 1840);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(322, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 2208);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 32);
    goto LAB78;

LAB89:    xsi_set_current_line(333, ng0);
    t3 = ((char*)((ng2)));
    t8 = (t0 + 1104);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(334, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB90:    xsi_set_current_line(334, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 1104);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(335, ng0);
    t2 = (t0 + 4404);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    xsi_set_current_line(337, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng21)));
    memset(t6, 0, 8);
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t9);
    t25 = (t19 ^ t20);
    t26 = (t18 | t25);
    t27 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t9);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB95;

LAB92:    if (t29 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t6) = 1;

LAB95:    t11 = (t6 + 4);
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    t34 = *((unsigned int *)t6);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB96;

LAB97:
LAB98:    goto LAB71;

LAB94:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(337, ng0);

LAB99:    xsi_set_current_line(338, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2392);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    goto LAB98;

}

static void Always_346_5(char *t0)
{
    char t24[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(346, ng0);
    t2 = (t0 + 5164);
    *((int *)t2) = 1;
    t3 = (t0 + 4676);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(347, ng0);

LAB5:    xsi_set_current_line(348, ng0);
    t4 = (t0 + 2392);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(348, ng0);

LAB9:    xsi_set_current_line(350, ng0);
    t13 = (t0 + 692U);
    t14 = *((char **)t13);
    t13 = (t14 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(354, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t24, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t15 = (t11 ^ t12);
    t16 = (t10 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t26 = (~(t19));
    t27 = (t16 & t26);
    if (t27 != 0)
        goto LAB17;

LAB14:    if (t19 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t24) = 1;

LAB17:    t7 = (t24 + 4);
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t24);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB8;

LAB10:    xsi_set_current_line(350, ng0);

LAB13:    xsi_set_current_line(351, ng0);
    t20 = (t0 + 3128);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 32, t22, 3, t23, 32);
    t25 = (t0 + 3128);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 3);
    goto LAB12;

LAB16:    t6 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(354, ng0);

LAB21:    xsi_set_current_line(356, ng0);
    t13 = (t0 + 2668);
    t14 = (t13 + 36U);
    t20 = *((char **)t14);

LAB22:    t21 = ((char*)((ng2)));
    t33 = xsi_vlog_unsigned_case_compare(t20, 2, t21, 32);
    if (t33 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng6)));
    t33 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 32);
    if (t33 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng4)));
    t33 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 32);
    if (t33 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(360, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB31:    xsi_set_current_line(365, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 2668);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t24, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t15 = (t11 ^ t12);
    t16 = (t10 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t26 = (~(t19));
    t27 = (t16 & t26);
    if (t27 != 0)
        goto LAB35;

LAB32:    if (t19 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t24) = 1;

LAB35:    t14 = (t24 + 4);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t24);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(370, ng0);

LAB40:    xsi_set_current_line(371, ng0);
    *((int *)t24) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t24 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t24, 0, 0, 32);
    xsi_set_current_line(372, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 784U);
    t6 = *((char **)t5);
    t5 = (t0 + 2668);
    t7 = (t5 + 36U);
    t13 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng37, 3, t0, (char)118, t6, 2, (char)118, t13, 2);
    xsi_set_current_line(373, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 2668);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng38, 3, t0, (char)118, t3, 2, (char)118, t5, 2);
    xsi_set_current_line(374, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));

LAB38:    xsi_set_current_line(377, ng0);
    t2 = (t0 + 3128);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t24, 0, 8);
    t13 = (t4 + 4);
    t14 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t13);
    t12 = *((unsigned int *)t14);
    t15 = (t11 ^ t12);
    t16 = (t10 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t26 = (~(t19));
    t27 = (t16 & t26);
    if (t27 != 0)
        goto LAB44;

LAB41:    if (t19 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t24) = 1;

LAB44:    t22 = (t24 + 4);
    t28 = *((unsigned int *)t22);
    t29 = (~(t28));
    t30 = *((unsigned int *)t24);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(382, ng0);

LAB49:    xsi_set_current_line(383, ng0);
    *((int *)t24) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t24 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t24, 0, 0, 32);
    xsi_set_current_line(384, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3128);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 2760);
    t14 = (t13 + 36U);
    t21 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng41, 3, t0, (char)118, t7, 3, (char)118, t21, 2);
    xsi_set_current_line(385, ng0);
    t2 = (t0 + 3128);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng42, 3, t0, (char)118, t4, 3, (char)118, t7, 2);
    xsi_set_current_line(386, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));

LAB47:    xsi_set_current_line(389, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(397, ng0);

LAB55:    xsi_set_current_line(398, ng0);
    *((int *)t24) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t24 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t24, 0, 0, 32);
    xsi_set_current_line(399, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng45, 1, t0);
    xsi_set_current_line(400, ng0);
    xsi_vlogfile_write(1, 0, 0, ng46, 1, t0);
    xsi_set_current_line(401, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(402, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(403, ng0);
    t2 = (t0 + 4548);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB23:    xsi_set_current_line(357, ng0);
    t22 = ((char*)((ng2)));
    t23 = (t0 + 1656);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 3);
    goto LAB31;

LAB25:    xsi_set_current_line(358, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB31;

LAB27:    xsi_set_current_line(359, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB31;

LAB34:    t13 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(365, ng0);

LAB39:    xsi_set_current_line(366, ng0);
    *((int *)t34) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t21 = (t34 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 3404);
    xsi_vlogvar_assign_value(t22, t34, 0, 0, 32);
    xsi_set_current_line(367, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 784U);
    t6 = *((char **)t5);
    t5 = (t0 + 2668);
    t7 = (t5 + 36U);
    t13 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng37, 3, t0, (char)118, t6, 2, (char)118, t13, 2);
    xsi_set_current_line(368, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 2668);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng38, 3, t0, (char)118, t3, 2, (char)118, t5, 2);
    xsi_set_current_line(369, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB38;

LAB43:    t21 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(377, ng0);

LAB48:    xsi_set_current_line(378, ng0);
    *((int *)t34) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t23 = (t34 + 4);
    *((int *)t23) = 0;
    t25 = (t0 + 3404);
    xsi_vlogvar_assign_value(t25, t34, 0, 0, 32);
    xsi_set_current_line(379, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3128);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 2760);
    t14 = (t13 + 36U);
    t21 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng39, 3, t0, (char)118, t7, 3, (char)118, t21, 2);
    xsi_set_current_line(380, ng0);
    t2 = (t0 + 3128);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng40, 3, t0, (char)118, t4, 3, (char)118, t7, 2);
    xsi_set_current_line(381, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB47;

LAB50:    xsi_set_current_line(389, ng0);

LAB53:    xsi_set_current_line(390, ng0);
    *((int *)t24) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t4 = (t24 + 4);
    *((int *)t4) = 0;
    t5 = (t0 + 3404);
    xsi_vlogvar_assign_value(t5, t24, 0, 0, 32);
    xsi_set_current_line(391, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng43, 1, t0);
    xsi_set_current_line(392, ng0);
    xsi_vlogfile_write(1, 0, 0, ng44, 1, t0);
    xsi_set_current_line(393, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(394, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(395, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(396, ng0);
    t2 = (t0 + 4548);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB52:    goto LAB20;

LAB54:    xsi_set_current_line(396, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB52;

LAB56:    xsi_set_current_line(403, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB52;

}

static void Always_410_6(char *t0)
{
    char t20[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 4792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(410, ng0);
    t2 = (t0 + 5172);
    *((int *)t2) = 1;
    t3 = (t0 + 4820);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(411, ng0);

LAB5:    xsi_set_current_line(412, ng0);
    t4 = (t0 + 3220);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(412, ng0);

LAB9:    xsi_set_current_line(413, ng0);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    t13 = (t0 + 2576);
    t15 = (t13 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 2760);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 8, t16, 8, t19, 2);
    memset(t21, 0, 8);
    t22 = (t14 + 4);
    t23 = (t20 + 4);
    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = (t26 | t29);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB13;

LAB10:    if (t33 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t21) = 1;

LAB13:    t37 = (t21 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t21);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(419, ng0);

LAB18:    xsi_set_current_line(420, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(421, ng0);
    *((int *)t20) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t20 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t20, 0, 0, 32);
    xsi_set_current_line(422, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2576);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 2760);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 2576);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t19 = (t0 + 2760);
    t22 = (t19 + 36U);
    t23 = *((char **)t22);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 8, t18, 8, t23, 2);
    t36 = (t0 + 600U);
    t37 = *((char **)t36);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng49, 5, t0, (char)118, t7, 8, (char)118, t15, 2, (char)118, t20, 8, (char)118, t37, 8);
    xsi_set_current_line(423, ng0);
    t2 = (t0 + 2576);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 2576);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 2760);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 8, t15, 8, t18, 2);
    t19 = (t0 + 600U);
    t22 = *((char **)t19);
    xsi_vlogfile_write(1, 0, 0, ng50, 5, t0, (char)118, t4, 8, (char)118, t7, 2, (char)118, t20, 8, (char)118, t22, 8);
    xsi_set_current_line(424, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));

LAB16:    xsi_set_current_line(426, ng0);
    *((int *)t20) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t20 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t20, 0, 0, 32);
    xsi_set_current_line(427, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng51, 1, t0);
    xsi_set_current_line(428, ng0);
    xsi_vlogfile_write(1, 0, 0, ng52, 1, t0);
    xsi_set_current_line(429, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng31, 1, t0);
    xsi_set_current_line(430, ng0);
    xsi_vlogfile_write(1, 0, 0, ng32, 1, t0);
    xsi_set_current_line(431, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(432, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(433, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3220);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB12:    t36 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(413, ng0);

LAB17:    xsi_set_current_line(414, ng0);
    t43 = ((char*)((ng1)));
    t44 = (t0 + 2484);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 1);
    xsi_set_current_line(415, ng0);
    *((int *)t20) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng14);
    t2 = (t20 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t20, 0, 0, 32);
    xsi_set_current_line(416, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2576);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 2760);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 600U);
    t17 = *((char **)t16);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng47, 4, t0, (char)118, t7, 8, (char)118, t15, 2, (char)118, t17, 8);
    xsi_set_current_line(417, ng0);
    t2 = (t0 + 2576);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng48, 4, t0, (char)118, t4, 8, (char)118, t7, 2, (char)118, t14, 8);
    xsi_set_current_line(418, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB16;

}

static void Always_437_7(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(438, ng0);

LAB4:    xsi_set_current_line(439, ng0);
    t2 = (t0 + 4836);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(439, ng0);
    t4 = (t0 + 1380);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1380);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}


extern void work_m_00000000003288036730_1643945018_init()
{
	static char *pe[] = {(void *)Initial_79_0,(void *)Always_128_1,(void *)Always_173_2,(void *)Always_192_3,(void *)Always_237_4,(void *)Always_346_5,(void *)Always_410_6,(void *)Always_437_7};
	xsi_register_didat("work_m_00000000003288036730_1643945018", "isim/napoje_tb_isim_beh.exe.sim/work/m_00000000003288036730_1643945018.didat");
	xsi_register_executes(pe);
}
