/*
 * FUN_0052e160 (3832 B) — network configuration table initializer.
 * Registers a large set of "Libraries\Network\..." menu entries via
 * FUN_0070f090, then initializes a big table of global dwords (connection
 * type / speed / debug / bandwidth settings) to 1/0/2 defaults.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc114;
extern int g_007ddd30;
extern int g_007dd6a8;
extern int g_007dd6ac;
extern int g_007dd6b0;
extern int g_007dd6b4;
extern int g_007dd6b8;
extern int g_007dd6bc;
extern int g_007dd6c0;
extern int g_007dd6c4;
extern int g_007dd510;
extern int g_007dd514;
extern int g_007dd6c8;
extern int g_007dd6cc;
extern int g_007dd6d0;
extern int g_007dd6d4;
extern int g_007dd6d8;
extern int g_007dd6dc;
extern int g_007dd6e0;
extern int g_007dd6e4;
extern int g_007dd518;
extern int g_007dd51c;
extern int g_007dd6e8;
extern int g_007dd6ec;
extern int g_007dd6f0;
extern int g_007dd6f4;
extern int g_007dd6f8;
extern int g_007dd6fc;
extern int g_007dd700;
extern int g_007dd704;
extern int g_007dd520;
extern int g_007dd524;
extern int g_007dd708;
extern int g_007dd70c;
extern int g_007dd710;
extern int g_007dd714;
extern int g_007dd718;
extern int g_007dd71c;
extern int g_007dd720;
extern int g_007dd724;
extern int g_007dd528;
extern int g_007dd52c;
extern int g_007dd728;
extern int g_007dd72c;
extern int g_007dd730;
extern int g_007dd734;
extern int g_007dd738;
extern int g_007dd73c;
extern int g_007dd740;
extern int g_007dd744;
extern int g_007dd530;
extern int g_007dd534;
extern int g_007dd748;
extern int g_007dd74c;
extern int g_007dd750;
extern int g_007dd754;
extern int g_007dd758;
extern int g_007dd75c;
extern int g_007dd760;
extern int g_007dd764;
extern int g_007dd538;
extern int g_007dd53c;
extern int g_007dd768;
extern int g_007dd76c;
extern int g_007dd770;
extern int g_007dd774;
extern int g_007dd778;
extern int g_007dd77c;
extern int g_007dd780;
extern int g_007dd784;
extern int g_007dd540;
extern int g_007dd544;
extern int g_007dd788;
extern int g_007dd78c;
extern int g_007dd790;
extern int g_007dd794;
extern int g_007dd798;
extern int g_007dd79c;
extern int g_007dd7a0;
extern int g_007dd7a4;
extern int g_007dd548;
extern int g_007dd54c;
extern int g_007dd7a8;
extern int g_007dd7ac;
extern int g_007dd7b0;
extern int g_007dd7b4;
extern int g_007dd7b8;
extern int g_007dd7bc;
extern int g_007dd7c0;
extern int g_007dd7c4;
extern int g_007dd550;
extern int g_007dd554;
extern int g_007dd7c8;
extern int g_007dd7cc;
extern int g_007dd7d0;
extern int g_007dd7d4;
extern int g_007dd7d8;
extern int g_007dd7dc;
extern int g_007dd7e0;
extern int g_007dd7e4;
extern int g_007dd558;
extern int g_007dd55c;
extern int g_007dd7e8;
extern int g_007dd7ec;
extern int g_007dd7f0;
extern int g_007dd7f4;
extern int g_007dd7f8;
extern int g_007dd7fc;
extern int g_007dd800;
extern int g_007dd804;
extern int g_007dd560;
extern int g_007dd564;
extern int g_007dd808;
extern int g_007dd80c;
extern int g_007dd810;
extern int g_007dd814;
extern int g_007dd818;
extern int g_007dd81c;
extern int g_007dd820;
extern int g_007dd824;
extern int g_007dd568;
extern int g_007dd56c;
extern int g_007dd828;
extern int g_007dd82c;
extern int g_007dd830;
extern int g_007dd834;
extern int g_007dd838;
extern int g_007dd83c;
extern int g_007dd840;
extern int g_007dd844;
extern int g_007dd570;
extern int g_007dd574;
extern int g_007dd848;
extern int g_007dd84c;
extern int g_007dd850;
extern int g_007dd854;
extern int g_007dd858;
extern int g_007dd85c;
extern int g_007dd860;
extern int g_007dd864;
extern int g_007dd578;
extern int g_007dd57c;
extern int g_007dd868;
extern int g_007dd86c;
extern int g_007dd870;
extern int g_007dd874;
extern int g_007dd878;
extern int g_007dd87c;
extern int g_007dd880;
extern int g_007dd884;
extern int g_007dd580;
extern int g_007dd584;
extern int g_007dd888;
extern int g_007dd88c;
extern int g_007dd890;
extern int g_007dd894;
extern int g_007dd898;
extern int g_007dd89c;
extern int g_007dd8a0;
extern int g_007dd8a4;
extern int g_007dd588;
extern int g_007dd58c;
extern int g_007dd8a8;
extern int g_007dd8ac;
extern int g_007dd8b0;
extern int g_007dd8b4;
extern int g_007dd8b8;
extern int g_007dd8bc;
extern int g_007dd8c0;
extern int g_007dd8c4;
extern int g_007dd590;
extern int g_007dd594;
extern int g_007dd8c8;
extern int g_007dd8cc;
extern int g_007dd8d0;
extern int g_007dd8d4;
extern int g_007dd8d8;
extern int g_007dd8dc;
extern int g_007dd8e0;
extern int g_007dd8e4;
extern int g_007dd598;
extern int g_007dd59c;
extern int g_007dd8e8;
extern int g_007dd8ec;
extern int g_007dd8f0;
extern int g_007dd8f4;
extern int g_007dd8f8;
extern int g_007dd8fc;
extern int g_007dd900;
extern int g_007dd904;
extern int g_007dd5a0;
extern int g_007dd5a4;
extern int g_007dd908;
extern int g_007dd90c;
extern int g_007dd910;
extern int g_007dd914;
extern int g_007dd918;
extern int g_007dd91c;
extern int g_007dd920;
extern int g_007dd924;
extern int g_007dd5a8;
extern int g_007dd5ac;
extern int g_007dd928;
extern int g_007dd92c;
extern int g_007dd930;
extern int g_007dd934;
extern int g_007dd938;
extern int g_007dd93c;
extern int g_007dd940;
extern int g_007dd944;
extern int g_007dd5b0;
extern int g_007dd5b4;
extern int g_007dd948;
extern int g_007dd94c;
extern int g_007dd950;
extern int g_007dd954;
extern int g_007dd958;
extern int g_007dd95c;
extern int g_007dd960;
extern int g_007dd964;
extern int g_007dd5b8;
extern int g_007dd5bc;
extern int g_007dd968;
extern int g_007dd96c;
extern int g_007dd970;
extern int g_007dd974;
extern int g_007dd978;
extern int g_007dd97c;
extern int g_007dd980;
extern int g_007dd984;
extern int g_007dd5c0;
extern int g_007dd5c4;
extern int g_007dd988;
extern int g_007dd98c;
extern int g_007dd990;
extern int g_007dd994;
extern int g_007dd998;
extern int g_007dd99c;
extern int g_007dd9a0;
extern int g_007dd9a4;
extern int g_007dd5c8;
extern int g_007dd5cc;
extern int g_007dd9a8;
extern int g_007dd9ac;
extern int g_007dd9b0;
extern int g_007dd9b4;
extern int g_007dd9b8;
extern int g_007dd9bc;
extern int g_007dd9c0;
extern int g_007dd9c4;
extern int g_007dd5d0;
extern int g_007dd5d4;
extern int g_007dd9c8;
extern int g_007dd9cc;
extern int g_007dd9d0;
extern int g_007dd9d4;
extern int g_007dd9d8;
extern int g_007dd9dc;
extern int g_007dd9e0;
extern int g_007dd9e4;
extern int g_007dd5d8;
extern int g_007dd5dc;
extern int g_007dd9e8;
extern int g_007dd9ec;
extern int g_007dd9f0;
extern int g_007dd9f4;
extern int g_007dd9f8;
extern int g_007dd9fc;
extern int g_007dda00;
extern int g_007dda04;
extern int g_007dd5e0;
extern int g_007dd5e4;
extern int g_007dda08;
extern int g_007dda0c;
extern int g_007dda10;
extern int g_007dda14;
extern int g_007dda18;
extern int g_007dda1c;
extern int g_007dda20;
extern int g_007dda24;
extern int g_007dd5e8;
extern int g_007dd5ec;
extern int g_007dda28;
extern int g_007dda2c;
extern int g_007dda30;
extern int g_007dda34;
extern int g_007dda38;
extern int g_007dda3c;
extern int g_007dda40;
extern int g_007dda44;
extern int g_007dd5f0;
extern int g_007dd5f4;
extern int g_007dda48;
extern int g_007dda4c;
extern int g_007dda50;
extern int g_007dda54;
extern int g_007dda58;
extern int g_007dda5c;
extern int g_007dda60;
extern int g_007dda64;
extern int g_007dd5f8;
extern int g_007dd5fc;
extern int g_007dda68;
extern int g_007dda6c;
extern int g_007dda70;
extern int g_007dda74;
extern int g_007dda78;
extern int g_007dda7c;
extern int g_007dda80;
extern int g_007dda84;
extern int g_007dd600;
extern int g_007dd604;
extern int g_007dda88;
extern int g_007dda8c;
extern int g_007dda90;
extern int g_007dda94;
extern int g_007dda98;
extern int g_007dda9c;
extern int g_007ddaa0;
extern int g_007ddaa4;
extern int g_007dd608;
extern int g_007dd60c;
extern int g_007ddaa8;
extern int g_007ddaac;
extern int g_007ddab0;
extern int g_007ddab4;
extern int g_007ddab8;
extern int g_007ddabc;
extern int g_007ddac0;
extern int g_007ddac4;
extern int g_007dd610;
extern int g_007dd614;
extern int g_007ddac8;
extern int g_007ddacc;
extern int g_007ddad0;
extern int g_007ddad4;
extern int g_007ddad8;
extern int g_007ddadc;
extern int g_007ddae0;
extern int g_007ddae4;
extern int g_007dd618;
extern int g_007dd61c;
extern int g_007ddae8;
extern int g_007ddaec;
extern int g_007ddaf0;
extern int g_007ddaf4;
extern int g_007ddaf8;
extern int g_007ddafc;
extern int g_007ddb00;
extern int g_007ddb04;
extern int g_007dd620;
extern int g_007dd624;
extern int g_007ddb08;
extern int g_007ddb0c;
extern int g_007ddb10;
extern int g_007ddb14;
extern int g_007ddb18;
extern int g_007ddb1c;
extern int g_007ddb20;
extern int g_007ddb24;
extern int g_007dd628;
extern int g_007dd62c;
extern int g_007ddb28;
extern int g_007ddb2c;
extern int g_007ddb30;
extern int g_007ddb34;
extern int g_007ddb38;
extern int g_007ddb3c;
extern int g_007ddb40;
extern int g_007ddb44;
extern int g_007dd630;
extern int g_007dd634;
extern int g_007ddb48;
extern int g_007ddb4c;
extern int g_007ddb50;
extern int g_007ddb54;
extern int g_007ddb58;
extern int g_007ddb5c;
extern int g_007ddb60;
extern int g_007ddb64;
extern int g_007dd638;
extern int g_007dd63c;
extern int g_007ddb68;
extern int g_007ddb6c;
extern int g_007ddb70;
extern int g_007ddb74;
extern int g_007ddb78;
extern int g_007ddb7c;
extern int g_007ddb80;
extern int g_007ddb84;
extern int g_007dd640;
extern int g_007dd644;
extern int g_007ddb88;
extern int g_007ddb8c;
extern int g_007ddb90;
extern int g_007ddb94;
extern int g_007ddb98;
extern int g_007ddb9c;
extern int g_007ddba0;
extern int g_007ddba4;
extern int g_007dd648;
extern int g_007dd64c;
extern int g_007ddba8;
extern int g_007ddbac;
extern int g_007ddbb0;
extern int g_007ddbb4;
extern int g_007ddbb8;
extern int g_007ddbbc;
extern int g_007ddbc0;
extern int g_007ddbc4;
extern int g_007dd650;
extern int g_007dd654;
extern int g_007ddbc8;
extern int g_007ddbcc;
extern int g_007ddbd0;
extern int g_007ddbd4;
extern int g_007ddbd8;
extern int g_007ddbdc;
extern int g_007ddbe0;
extern int g_007ddbe4;
extern int g_007dd658;
extern int g_007dd65c;
extern int g_007ddbe8;
extern int g_007ddbec;
extern int g_007ddbf0;
extern int g_007ddbf4;
extern int g_007ddbf8;
extern int g_007ddbfc;
extern int g_007ddc00;
extern int g_007ddc04;
extern int g_007dd660;
extern int g_007dd664;
extern int g_007ddc08;
extern int g_007ddc0c;
extern int g_007ddc10;
extern int g_007ddc14;
extern int g_007ddc18;
extern int g_007ddc1c;
extern int g_007ddc20;
extern int g_007ddc24;
extern int g_007dd668;
extern int g_007dd66c;
extern int g_007ddc28;
extern int g_007ddc2c;
extern int g_007ddc30;
extern int g_007ddc34;
extern int g_007ddc38;
extern int g_007ddc3c;
extern int g_007ddc40;
extern int g_007ddc44;
extern int g_007dd670;
extern int g_007dd674;
extern int g_007ddc48;
extern int g_007ddc4c;
extern int g_007ddc50;
extern int g_007ddc54;
extern int g_007ddc58;
extern int g_007ddc5c;
extern int g_007ddc60;
extern int g_007ddc64;
extern int g_007dd678;
extern int g_007dd67c;
extern int g_007ddc68;
extern int g_007ddc6c;
extern int g_007ddc70;
extern int g_007ddc74;
extern int g_007ddc78;
extern int g_007ddc7c;
extern int g_007ddc80;
extern int g_007ddc84;
extern int g_007dd680;
extern int g_007dd684;
extern int g_007ddc88;
extern int g_007ddc8c;
extern int g_007ddc90;
extern int g_007ddc94;
extern int g_007ddc98;
extern int g_007ddc9c;
extern int g_007ddca0;
extern int g_007ddca4;
extern int g_007dd688;
extern int g_007dd68c;
extern int g_007ddca8;
extern int g_007ddcac;
extern int g_007ddcb0;
extern int g_007ddcb4;
extern int g_007ddcb8;
extern int g_007ddcc0;
extern int g_007ddcc4;
extern int g_007dd690;
extern int g_007dd694;
extern int g_007ddcd0;
extern int g_007ddcd4;
extern int g_007ddce0;
extern int g_007ddce4;
extern int g_007dd698;
extern int g_007dd69c;
extern int g_007ddce8;
extern int g_007ddcf0;
extern int g_007ddcf4;
extern int g_007ddd00;
extern int g_007ddd04;
extern int g_007dd6a0;
extern int g_007dd6a4;
extern int g_007ddcbc;
extern int g_007ddcc8;
extern int g_007ddccc;
extern int g_007ddcd8;
extern int g_007ddcdc;
extern int g_007ddcec;
extern int g_007ddcf8;
extern int g_007ddcfc;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_0052e160(void)
{
    __asm {
        push    esi
        push    edi
        push    0x20
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 4
        cmp     eax, edi
        mov     esi, 1
        jz      L1
        mov     ecx, dword ptr [g_007dc114]
        push    0x77a8d0
        push    esi
        push    ecx
        push    0x77b058
        push    0x47d
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007ddd30], eax
        jmp     L2
L1:
        mov     dword ptr [g_007ddd30], edi
L2:
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77b034
        call    FUN_0070f090
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77b008
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f070
        push    0x52f060
        push    0x77aff0
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f090
        push    0x52f080
        push    0x77afd8
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f0b0
        push    0x52f0a0
        push    0x77afc0
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f0d0
        push    0x52f0c0
        push    0x77afa8
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f0f0
        push    0x52f0e0
        push    0x77af90
        call    FUN_0070f090
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77af7c
        call    FUN_0070f090
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77af58
        call    FUN_0070f090
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77b008
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f110
        push    0x52f100
        push    0x77af3c
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f130
        push    0x52f120
        push    0x77af20
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f150
        push    0x52f140
        push    0x77af04
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f170
        push    0x52f160
        push    0x77aee8
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f190
        push    0x52f180
        push    0x77aecc
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f1b0
        push    0x52f1a0
        push    0x77aeb0
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f1d0
        push    0x52f1c0
        push    0x77ae94
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f1f0
        push    0x52f1e0
        push    0x77ae78
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f210
        push    0x52f200
        push    0x77ae5c
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f230
        push    0x52f220
        push    0x77ae40
        call    FUN_0070f090
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77af7c
        call    FUN_0070f090
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77ae1c
        call    FUN_0070f090
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77b008
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f250
        push    0x52f240
        push    0x77ae00
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f2b0
        push    0x52f2a0
        push    0x77add8
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f310
        push    0x52f300
        push    0x77adb0
        call    FUN_0070f090
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77af7c
        call    FUN_0070f090
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77ad88
        call    FUN_0070f090
        push    edi
        push    edi
        push    edi
        push    edi
        push    0x77b008
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f370
        push    0x52f360
        push    0x77ad60
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f3d0
        push    0x52f3c0
        push    0x77ad48
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f430
        push    0x52f420
        push    0x77ad30
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f490
        push    0x52f480
        push    0x77ad18
        call    FUN_0070f090
        push    edi
        push    edi
        push    0x52f4f0
        push    0x52f4e0
        push    0x77acf0
        call    FUN_0070f090

        mov     eax, 0x7dd6ac
        or      ecx, 0xffffffff
L3:
        mov     dword ptr [eax-4], ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax+4], ecx
        mov     dword ptr [eax+8], ecx
        mov     dword ptr [eax+0xc], ecx
        mov     dword ptr [eax+0x10], ecx
        mov     dword ptr [eax+0x14], ecx
        mov     dword ptr [eax+0x18], ecx
        add     eax, 0x20
        cmp     eax, 0x7ddd0c
        jl      L3

        mov     dword ptr [g_007dd6a8], esi
        mov     dword ptr [g_007dd6ac], edi
        mov     dword ptr [g_007dd6b0], esi
        mov     dword ptr [g_007dd6b4], esi
        mov     dword ptr [g_007dd6b8], esi
        mov     dword ptr [g_007dd6bc], esi
        mov     dword ptr [g_007dd6c0], esi
        mov     dword ptr [g_007dd6c4], esi
        mov     dword ptr [g_007dd510], esi
        mov     dword ptr [g_007dd514], esi
        mov     dword ptr [g_007dd6c8], esi
        mov     dword ptr [g_007dd6cc], esi
        mov     dword ptr [g_007dd6d0], esi
        mov     dword ptr [g_007dd6d4], esi
        mov     dword ptr [g_007dd6d8], esi
        mov     dword ptr [g_007dd6dc], esi
        mov     dword ptr [g_007dd6e0], esi
        mov     dword ptr [g_007dd6e4], esi
        mov     dword ptr [g_007dd518], esi
        mov     dword ptr [g_007dd51c], esi
        mov     dword ptr [g_007dd6e8], esi
        mov     dword ptr [g_007dd6ec], esi
        mov     dword ptr [g_007dd6f0], esi
        mov     dword ptr [g_007dd6f4], esi
        mov     dword ptr [g_007dd6f8], esi
        mov     dword ptr [g_007dd6fc], esi
        mov     dword ptr [g_007dd700], esi
        mov     dword ptr [g_007dd704], esi
        mov     dword ptr [g_007dd520], esi
        mov     dword ptr [g_007dd524], esi
        mov     dword ptr [g_007dd708], esi
        mov     dword ptr [g_007dd70c], esi
        mov     dword ptr [g_007dd710], esi
        mov     dword ptr [g_007dd714], edi
        mov     dword ptr [g_007dd718], edi
        mov     dword ptr [g_007dd71c], edi
        mov     dword ptr [g_007dd720], edi
        mov     dword ptr [g_007dd724], edi
        mov     dword ptr [g_007dd528], esi
        mov     dword ptr [g_007dd52c], esi
        mov     dword ptr [g_007dd728], esi
        mov     dword ptr [g_007dd72c], esi
        mov     dword ptr [g_007dd730], edi
        mov     dword ptr [g_007dd734], esi
        mov     dword ptr [g_007dd738], edi
        mov     dword ptr [g_007dd73c], edi
        mov     dword ptr [g_007dd740], edi
        mov     dword ptr [g_007dd744], edi
        mov     dword ptr [g_007dd530], esi
        mov     dword ptr [g_007dd534], esi
        mov     dword ptr [g_007dd748], esi
        mov     dword ptr [g_007dd74c], esi
        mov     dword ptr [g_007dd750], edi
        mov     dword ptr [g_007dd754], esi
        mov     dword ptr [g_007dd758], esi
        mov     dword ptr [g_007dd75c], esi
        mov     dword ptr [g_007dd760], edi
        mov     dword ptr [g_007dd764], edi
        mov     dword ptr [g_007dd538], esi
        mov     dword ptr [g_007dd53c], edi
        mov     dword ptr [g_007dd768], esi
        mov     dword ptr [g_007dd76c], esi
        mov     dword ptr [g_007dd770], edi
        mov     dword ptr [g_007dd774], esi
        mov     dword ptr [g_007dd778], esi
        mov     dword ptr [g_007dd77c], esi
        mov     dword ptr [g_007dd780], edi
        mov     dword ptr [g_007dd784], edi
        mov     dword ptr [g_007dd540], edi
        mov     dword ptr [g_007dd544], edi
        mov     dword ptr [g_007dd788], esi
        mov     dword ptr [g_007dd78c], edi
        mov     dword ptr [g_007dd790], esi
        mov     dword ptr [g_007dd794], esi
        mov     dword ptr [g_007dd798], esi
        mov     dword ptr [g_007dd79c], esi
        mov     dword ptr [g_007dd7a0], esi
        mov     dword ptr [g_007dd7a4], esi
        mov     dword ptr [g_007dd548], esi
        mov     dword ptr [g_007dd54c], esi
        mov     dword ptr [g_007dd7a8], esi
        mov     eax, 0x2
        mov     dword ptr [g_007dd7ac], esi
        mov     dword ptr [g_007dd7b0], esi
        mov     dword ptr [g_007dd7b4], edi
        mov     dword ptr [g_007dd7b8], edi
        mov     dword ptr [g_007dd7bc], edi
        mov     dword ptr [g_007dd7c0], edi
        mov     dword ptr [g_007dd7c4], edi
        mov     dword ptr [g_007dd550], edi
        mov     dword ptr [g_007dd554], edi
        mov     dword ptr [g_007dd7c8], esi
        mov     dword ptr [g_007dd7cc], esi
        mov     dword ptr [g_007dd7d0], esi
        mov     dword ptr [g_007dd7d4], edi
        mov     dword ptr [g_007dd7d8], edi
        mov     dword ptr [g_007dd7dc], edi
        mov     dword ptr [g_007dd7e0], edi
        mov     dword ptr [g_007dd7e4], edi
        mov     dword ptr [g_007dd558], edi
        mov     dword ptr [g_007dd55c], edi
        mov     dword ptr [g_007dd7e8], esi
        mov     dword ptr [g_007dd7ec], esi
        mov     dword ptr [g_007dd7f0], esi
        mov     dword ptr [g_007dd7f4], esi
        mov     dword ptr [g_007dd7f8], edi
        mov     dword ptr [g_007dd7fc], edi
        mov     dword ptr [g_007dd800], edi
        mov     dword ptr [g_007dd804], edi
        mov     dword ptr [g_007dd560], esi
        mov     dword ptr [g_007dd564], esi
        mov     dword ptr [g_007dd808], esi
        mov     dword ptr [g_007dd80c], edi
        mov     dword ptr [g_007dd810], esi
        mov     dword ptr [g_007dd814], esi
        mov     dword ptr [g_007dd818], esi
        mov     dword ptr [g_007dd81c], esi
        mov     dword ptr [g_007dd820], esi
        mov     dword ptr [g_007dd824], esi
        mov     dword ptr [g_007dd568], esi
        mov     dword ptr [g_007dd56c], esi
        mov     dword ptr [g_007dd828], esi
        mov     dword ptr [g_007dd82c], edi
        mov     dword ptr [g_007dd830], edi
        mov     dword ptr [g_007dd834], esi
        mov     dword ptr [g_007dd838], esi
        mov     dword ptr [g_007dd83c], esi
        mov     dword ptr [g_007dd840], edi
        mov     dword ptr [g_007dd844], edi
        mov     dword ptr [g_007dd570], eax
        mov     dword ptr [g_007dd574], esi
        mov     dword ptr [g_007dd848], esi
        mov     dword ptr [g_007dd84c], esi
        mov     dword ptr [g_007dd850], edi
        mov     dword ptr [g_007dd854], edi
        mov     dword ptr [g_007dd858], esi
        mov     dword ptr [g_007dd85c], edi
        mov     dword ptr [g_007dd860], edi
        mov     dword ptr [g_007dd864], edi
        mov     dword ptr [g_007dd578], esi
        mov     dword ptr [g_007dd57c], esi
        mov     dword ptr [g_007dd868], esi
        mov     dword ptr [g_007dd86c], esi
        mov     dword ptr [g_007dd870], edi
        mov     dword ptr [g_007dd874], edi
        mov     dword ptr [g_007dd878], esi
        mov     dword ptr [g_007dd87c], esi
        mov     dword ptr [g_007dd880], edi
        mov     dword ptr [g_007dd884], edi
        mov     dword ptr [g_007dd580], esi
        mov     dword ptr [g_007dd584], edi
        mov     dword ptr [g_007dd888], esi
        mov     dword ptr [g_007dd88c], edi
        mov     dword ptr [g_007dd890], edi
        mov     dword ptr [g_007dd894], edi
        mov     dword ptr [g_007dd898], edi
        mov     dword ptr [g_007dd89c], esi
        mov     dword ptr [g_007dd8a0], edi
        mov     dword ptr [g_007dd8a4], edi
        mov     dword ptr [g_007dd588], eax
        mov     dword ptr [g_007dd58c], esi
        mov     dword ptr [g_007dd8a8], esi
        mov     dword ptr [g_007dd8ac], esi
        mov     dword ptr [g_007dd8b0], edi
        mov     dword ptr [g_007dd8b4], edi
        mov     dword ptr [g_007dd8b8], esi
        mov     dword ptr [g_007dd8bc], esi
        mov     dword ptr [g_007dd8c0], edi
        mov     dword ptr [g_007dd8c4], edi
        mov     dword ptr [g_007dd590], edi
        mov     dword ptr [g_007dd594], edi
        mov     dword ptr [g_007dd8c8], esi
        mov     dword ptr [g_007dd8cc], esi
        mov     dword ptr [g_007dd8d0], esi
        mov     dword ptr [g_007dd8d4], esi
        mov     dword ptr [g_007dd8d8], esi
        mov     dword ptr [g_007dd8dc], esi
        mov     dword ptr [g_007dd8e0], esi
        mov     dword ptr [g_007dd8e4], esi
        mov     dword ptr [g_007dd598], esi
        mov     dword ptr [g_007dd59c], esi
        mov     dword ptr [g_007dd8e8], esi
        mov     dword ptr [g_007dd8ec], esi
        mov     dword ptr [g_007dd8f0], esi
        mov     dword ptr [g_007dd8f4], esi
        mov     dword ptr [g_007dd8f8], esi
        mov     dword ptr [g_007dd8fc], esi
        mov     dword ptr [g_007dd900], esi
        mov     dword ptr [g_007dd904], esi
        mov     dword ptr [g_007dd5a0], esi
        mov     dword ptr [g_007dd5a4], esi
        mov     dword ptr [g_007dd908], esi
        mov     dword ptr [g_007dd90c], esi
        mov     dword ptr [g_007dd910], edi
        mov     dword ptr [g_007dd914], esi
        mov     dword ptr [g_007dd918], esi
        mov     dword ptr [g_007dd91c], esi
        mov     dword ptr [g_007dd920], edi
        mov     dword ptr [g_007dd924], edi
        mov     dword ptr [g_007dd5a8], edi
        mov     dword ptr [g_007dd5ac], esi
        mov     dword ptr [g_007dd928], esi
        mov     dword ptr [g_007dd92c], edi
        mov     dword ptr [g_007dd930], esi
        mov     dword ptr [g_007dd934], esi
        mov     dword ptr [g_007dd938], esi
        mov     dword ptr [g_007dd93c], esi
        mov     dword ptr [g_007dd940], esi
        mov     dword ptr [g_007dd944], esi
        mov     dword ptr [g_007dd5b0], esi
        mov     dword ptr [g_007dd5b4], esi
        mov     dword ptr [g_007dd948], esi
        mov     dword ptr [g_007dd94c], esi
        mov     dword ptr [g_007dd950], esi
        mov     dword ptr [g_007dd954], esi
        mov     dword ptr [g_007dd958], esi
        mov     dword ptr [g_007dd95c], esi
        mov     dword ptr [g_007dd960], edi
        mov     dword ptr [g_007dd964], edi
        mov     dword ptr [g_007dd5b8], edi
        mov     dword ptr [g_007dd5bc], edi
        mov     dword ptr [g_007dd968], esi
        mov     dword ptr [g_007dd96c], esi
        mov     dword ptr [g_007dd970], edi
        mov     dword ptr [g_007dd974], edi
        mov     dword ptr [g_007dd978], esi
        mov     dword ptr [g_007dd97c], esi
        mov     dword ptr [g_007dd980], edi
        mov     dword ptr [g_007dd984], edi
        mov     dword ptr [g_007dd5c0], esi
        mov     dword ptr [g_007dd5c4], edi
        mov     dword ptr [g_007dd988], esi
        mov     dword ptr [g_007dd98c], edi
        mov     dword ptr [g_007dd990], esi
        mov     dword ptr [g_007dd994], esi
        mov     dword ptr [g_007dd998], esi
        mov     dword ptr [g_007dd99c], esi
        mov     dword ptr [g_007dd9a0], esi
        mov     dword ptr [g_007dd9a4], esi
        mov     dword ptr [g_007dd5c8], esi
        mov     dword ptr [g_007dd5cc], esi
        mov     dword ptr [g_007dd9a8], esi
        mov     dword ptr [g_007dd9ac], esi
        mov     dword ptr [g_007dd9b0], esi
        mov     dword ptr [g_007dd9b4], esi
        mov     dword ptr [g_007dd9b8], esi
        mov     dword ptr [g_007dd9bc], esi
        mov     dword ptr [g_007dd9c0], esi
        mov     dword ptr [g_007dd9c4], esi
        mov     dword ptr [g_007dd5d0], esi
        mov     dword ptr [g_007dd5d4], esi
        mov     dword ptr [g_007dd9c8], esi
        mov     dword ptr [g_007dd9cc], esi
        mov     dword ptr [g_007dd9d0], edi
        mov     dword ptr [g_007dd9d4], edi
        mov     dword ptr [g_007dd9d8], edi
        mov     dword ptr [g_007dd9dc], esi
        mov     dword ptr [g_007dd9e0], edi
        mov     dword ptr [g_007dd9e4], edi
        mov     dword ptr [g_007dd5d8], esi
        mov     dword ptr [g_007dd5dc], esi
        mov     dword ptr [g_007dd9e8], esi
        mov     dword ptr [g_007dd9ec], esi
        mov     dword ptr [g_007dd9f0], esi
        mov     dword ptr [g_007dd9f4], esi
        mov     dword ptr [g_007dd9f8], esi
        mov     dword ptr [g_007dd9fc], esi
        mov     dword ptr [g_007dda00], esi
        mov     dword ptr [g_007dda04], esi
        mov     dword ptr [g_007dd5e0], esi
        mov     dword ptr [g_007dd5e4], esi
        mov     dword ptr [g_007dda08], esi
        mov     dword ptr [g_007dda0c], esi
        mov     dword ptr [g_007dda10], esi
        mov     dword ptr [g_007dda14], esi
        mov     dword ptr [g_007dda18], esi
        mov     dword ptr [g_007dda1c], esi
        mov     dword ptr [g_007dda20], esi
        mov     dword ptr [g_007dda24], esi
        mov     dword ptr [g_007dd5e8], esi
        mov     dword ptr [g_007dd5ec], esi
        mov     dword ptr [g_007dda28], esi
        mov     dword ptr [g_007dda2c], esi
        mov     dword ptr [g_007dda30], esi
        mov     dword ptr [g_007dda34], esi
        mov     dword ptr [g_007dda38], esi
        mov     dword ptr [g_007dda3c], esi
        mov     dword ptr [g_007dda40], esi
        mov     dword ptr [g_007dda44], esi
        mov     dword ptr [g_007dd5f0], esi
        mov     dword ptr [g_007dd5f4], esi
        mov     dword ptr [g_007dda48], esi
        mov     dword ptr [g_007dda4c], esi
        mov     dword ptr [g_007dda50], edi
        mov     dword ptr [g_007dda54], esi
        mov     dword ptr [g_007dda58], edi
        mov     dword ptr [g_007dda5c], edi
        mov     dword ptr [g_007dda60], edi
        mov     dword ptr [g_007dda64], edi
        mov     dword ptr [g_007dd5f8], esi
        mov     dword ptr [g_007dd5fc], esi
        mov     dword ptr [g_007dda68], esi
        mov     dword ptr [g_007dda6c], esi
        mov     dword ptr [g_007dda70], esi
        mov     dword ptr [g_007dda74], esi
        mov     dword ptr [g_007dda78], esi
        mov     dword ptr [g_007dda7c], esi
        mov     dword ptr [g_007dda80], edi
        mov     dword ptr [g_007dda84], edi
        mov     dword ptr [g_007dd600], edi
        mov     dword ptr [g_007dd604], edi
        mov     dword ptr [g_007dda88], esi
        mov     dword ptr [g_007dda8c], edi
        mov     dword ptr [g_007dda90], esi
        mov     dword ptr [g_007dda94], esi
        mov     dword ptr [g_007dda98], esi
        mov     dword ptr [g_007dda9c], esi
        mov     dword ptr [g_007ddaa0], esi
        mov     dword ptr [g_007ddaa4], esi
        mov     dword ptr [g_007dd608], esi
        mov     dword ptr [g_007dd60c], esi
        mov     dword ptr [g_007ddaa8], esi
        mov     dword ptr [g_007ddaac], edi
        mov     dword ptr [g_007ddab0], edi
        mov     dword ptr [g_007ddab4], esi
        mov     dword ptr [g_007ddab8], esi
        mov     dword ptr [g_007ddabc], esi
        mov     dword ptr [g_007ddac0], edi
        mov     dword ptr [g_007ddac4], edi
        mov     dword ptr [g_007dd610], eax
        mov     dword ptr [g_007dd614], esi
        mov     dword ptr [g_007ddac8], esi
        mov     dword ptr [g_007ddacc], esi
        mov     dword ptr [g_007ddad0], edi
        mov     dword ptr [g_007ddad4], esi
        mov     dword ptr [g_007ddad8], edi
        mov     dword ptr [g_007ddadc], edi
        mov     dword ptr [g_007ddae0], edi
        mov     dword ptr [g_007ddae4], edi
        mov     dword ptr [g_007dd618], esi
        mov     dword ptr [g_007dd61c], esi
        mov     dword ptr [g_007ddae8], esi
        mov     dword ptr [g_007ddaec], esi
        mov     dword ptr [g_007ddaf0], esi
        mov     dword ptr [g_007ddaf4], esi
        mov     dword ptr [g_007ddaf8], esi
        mov     dword ptr [g_007ddafc], esi
        mov     dword ptr [g_007ddb00], esi
        mov     dword ptr [g_007ddb04], esi
        mov     dword ptr [g_007dd620], esi
        mov     dword ptr [g_007dd624], esi
        mov     dword ptr [g_007ddb08], esi
        mov     dword ptr [g_007ddb0c], edi
        mov     dword ptr [g_007ddb10], esi
        mov     dword ptr [g_007ddb14], esi
        mov     dword ptr [g_007ddb18], esi
        mov     dword ptr [g_007ddb1c], esi
        mov     dword ptr [g_007ddb20], esi
        mov     dword ptr [g_007ddb24], esi
        mov     dword ptr [g_007dd628], esi
        mov     dword ptr [g_007dd62c], esi
        mov     dword ptr [g_007ddb28], esi
        mov     dword ptr [g_007ddb2c], edi
        mov     dword ptr [g_007ddb30], esi
        mov     dword ptr [g_007ddb34], esi
        mov     dword ptr [g_007ddb38], esi
        mov     dword ptr [g_007ddb3c], esi
        mov     dword ptr [g_007ddb40], esi
        mov     dword ptr [g_007ddb44], esi
        mov     dword ptr [g_007dd630], esi
        mov     dword ptr [g_007dd634], esi
        mov     dword ptr [g_007ddb48], esi
        mov     dword ptr [g_007ddb4c], esi
        mov     dword ptr [g_007ddb50], esi
        mov     dword ptr [g_007ddb54], esi
        mov     dword ptr [g_007ddb58], esi
        mov     dword ptr [g_007ddb5c], esi
        mov     dword ptr [g_007ddb60], esi
        mov     dword ptr [g_007ddb64], esi
        mov     dword ptr [g_007dd638], esi
        mov     dword ptr [g_007dd63c], esi
        mov     dword ptr [g_007ddb68], esi
        mov     dword ptr [g_007ddb6c], esi
        mov     dword ptr [g_007ddb70], edi
        mov     dword ptr [g_007ddb74], edi
        mov     dword ptr [g_007ddb78], esi
        mov     dword ptr [g_007ddb7c], esi
        mov     dword ptr [g_007ddb80], edi
        mov     dword ptr [g_007ddb84], edi
        mov     dword ptr [g_007dd640], esi
        mov     dword ptr [g_007dd644], edi
        mov     dword ptr [g_007ddb88], esi
        mov     dword ptr [g_007ddb8c], esi
        mov     dword ptr [g_007ddb90], esi
        mov     dword ptr [g_007ddb94], esi
        mov     dword ptr [g_007ddb98], esi
        mov     dword ptr [g_007ddb9c], esi
        mov     dword ptr [g_007ddba0], edi
        mov     dword ptr [g_007ddba4], edi
        mov     dword ptr [g_007dd648], esi
        mov     dword ptr [g_007dd64c], esi
        mov     dword ptr [g_007ddba8], esi
        mov     dword ptr [g_007ddbac], esi
        mov     dword ptr [g_007ddbb0], edi
        mov     dword ptr [g_007ddbb4], edi
        mov     dword ptr [g_007ddbb8], esi
        mov     dword ptr [g_007ddbbc], esi
        mov     dword ptr [g_007ddbc0], edi
        mov     dword ptr [g_007ddbc4], edi
        mov     dword ptr [g_007dd650], esi
        mov     dword ptr [g_007dd654], esi
        mov     dword ptr [g_007ddbc8], esi
        mov     dword ptr [g_007ddbcc], edi
        mov     dword ptr [g_007ddbd0], esi
        mov     dword ptr [g_007ddbd4], esi
        mov     dword ptr [g_007ddbd8], esi
        mov     dword ptr [g_007ddbdc], esi
        mov     dword ptr [g_007ddbe0], esi
        mov     dword ptr [g_007ddbe4], esi
        mov     dword ptr [g_007dd658], esi
        mov     dword ptr [g_007dd65c], esi
        mov     dword ptr [g_007ddbe8], esi
        mov     dword ptr [g_007ddbec], esi
        mov     dword ptr [g_007ddbf0], esi
        mov     dword ptr [g_007ddbf4], esi
        mov     dword ptr [g_007ddbf8], esi
        mov     dword ptr [g_007ddbfc], esi
        mov     dword ptr [g_007ddc00], esi
        mov     dword ptr [g_007ddc04], esi
        mov     dword ptr [g_007dd660], esi
        mov     dword ptr [g_007dd664], esi
        mov     dword ptr [g_007ddc08], esi
        mov     dword ptr [g_007ddc0c], esi
        mov     dword ptr [g_007ddc10], esi
        mov     dword ptr [g_007ddc14], esi
        mov     dword ptr [g_007ddc18], esi
        mov     dword ptr [g_007ddc1c], esi
        mov     dword ptr [g_007ddc20], esi
        mov     dword ptr [g_007ddc24], esi
        mov     dword ptr [g_007dd668], edi
        mov     dword ptr [g_007dd66c], edi
        mov     dword ptr [g_007ddc28], esi
        mov     dword ptr [g_007ddc2c], esi
        mov     dword ptr [g_007ddc30], esi
        mov     dword ptr [g_007ddc34], esi
        mov     dword ptr [g_007ddc38], esi
        mov     dword ptr [g_007ddc3c], esi
        mov     dword ptr [g_007ddc40], esi
        mov     dword ptr [g_007ddc44], esi
        mov     dword ptr [g_007dd670], edi
        mov     dword ptr [g_007dd674], edi
        mov     dword ptr [g_007ddc48], esi
        mov     dword ptr [g_007ddc4c], esi
        mov     dword ptr [g_007ddc50], edi
        mov     dword ptr [g_007ddc54], edi
        mov     dword ptr [g_007ddc58], esi
        mov     dword ptr [g_007ddc5c], esi
        mov     dword ptr [g_007ddc60], edi
        mov     dword ptr [g_007ddc64], edi
        mov     dword ptr [g_007dd678], edi
        mov     dword ptr [g_007dd67c], edi
        mov     dword ptr [g_007ddc68], esi
        mov     dword ptr [g_007ddc6c], esi
        mov     dword ptr [g_007ddc70], edi
        mov     dword ptr [g_007ddc74], edi
        mov     dword ptr [g_007ddc78], esi
        mov     dword ptr [g_007ddc7c], esi
        mov     dword ptr [g_007ddc80], edi
        mov     dword ptr [g_007ddc84], edi
        mov     dword ptr [g_007dd680], edi
        mov     dword ptr [g_007dd684], edi
        mov     dword ptr [g_007ddc88], esi
        mov     dword ptr [g_007ddc8c], esi
        mov     dword ptr [g_007ddc90], edi
        mov     dword ptr [g_007ddc94], edi
        mov     dword ptr [g_007ddc98], esi
        mov     dword ptr [g_007ddc9c], esi
        mov     dword ptr [g_007ddca0], edi
        mov     dword ptr [g_007ddca4], edi
        mov     dword ptr [g_007dd688], edi
        mov     dword ptr [g_007dd68c], edi
        mov     dword ptr [g_007ddca8], esi
        mov     dword ptr [g_007ddcac], esi
        mov     dword ptr [g_007ddcb0], edi
        mov     dword ptr [g_007ddcb4], edi
        mov     dword ptr [g_007ddcb8], esi
        mov     dword ptr [g_007ddcc0], edi
        mov     dword ptr [g_007ddcc4], edi
        mov     dword ptr [g_007dd690], edi
        mov     dword ptr [g_007dd694], edi
        mov     dword ptr [g_007ddcd0], edi
        mov     dword ptr [g_007ddcd4], edi
        mov     dword ptr [g_007ddce0], edi
        mov     dword ptr [g_007ddce4], edi
        mov     dword ptr [g_007dd698], edi
        mov     dword ptr [g_007dd69c], edi
        mov     dword ptr [g_007ddce8], edi
        mov     dword ptr [g_007ddcf0], edi
        mov     dword ptr [g_007ddcf4], edi
        mov     dword ptr [g_007ddd00], edi
        mov     dword ptr [g_007ddd04], edi
        mov     dword ptr [g_007dd6a0], edi
        mov     dword ptr [g_007dd6a4], edi
        pop     edi
        mov     dword ptr [g_007ddcbc], esi
        mov     dword ptr [g_007ddcc8], esi
        mov     dword ptr [g_007ddccc], esi
        mov     dword ptr [g_007ddcd8], esi
        mov     dword ptr [g_007ddcdc], esi
        mov     dword ptr [g_007ddcec], esi
        mov     dword ptr [g_007ddcf8], esi
        mov     dword ptr [g_007ddcfc], esi
        pop     esi
        ret
    }
}
