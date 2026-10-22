/*
 * FUN_00404d60 (4474 B) -- multiplayer console script-callback registration.
 * Registers ~170 script callbacks/variables via FUN_006b46b0 / FUN_006b45a0,
 * guarded by the DAT_007ddd21 flag. Returns 1 (AL), __stdcall RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004010a0(void);
extern void __cdecl FUN_004010b0(void);
extern void __cdecl FUN_00401140(void);
extern void __cdecl FUN_00401370(void);
extern void __cdecl FUN_004014a0(void);
extern void __cdecl FUN_004015b0(void);
extern void __cdecl FUN_00401a10(void);
extern void __cdecl FUN_00401e40(void);
extern void __cdecl FUN_00401e50(void);
extern void __cdecl FUN_00402170(void);
extern void __cdecl FUN_00402230(void);
extern void __cdecl FUN_00402250(void);
extern void __cdecl FUN_00402280(void);
extern void __cdecl FUN_004022a0(void);
extern void __cdecl FUN_004022d0(void);
extern void __cdecl FUN_004024d0(void);
extern void __cdecl FUN_00402660(void);
extern void __cdecl FUN_004028d0(void);
extern void __cdecl FUN_004028e0(void);
extern void __cdecl FUN_004028f0(void);
extern void __cdecl FUN_00402900(void);
extern void __cdecl FUN_00402a00(void);
extern void __cdecl FUN_00402d10(void);
extern void __cdecl FUN_00402d30(void);
extern void __cdecl FUN_00402d70(void);
extern void __cdecl FUN_00402e60(void);
extern void __cdecl FUN_00403790(void);
extern void __cdecl FUN_00403880(void);
extern void __cdecl FUN_00403a00(void);
extern void __cdecl FUN_00403a30(void);
extern void __cdecl FUN_00403a40(void);
extern void __cdecl FUN_00403ad0(void);
extern void __cdecl FUN_00403eb0(void);
extern void __cdecl FUN_004043f0(void);
extern void __cdecl FUN_00404480(void);
extern void __cdecl FUN_004044e0(void);
extern void __cdecl FUN_00404580(void);
extern void __cdecl FUN_004045a0(void);
extern void __cdecl FUN_004045c0(void);
extern void __cdecl FUN_00404620(void);
extern void __cdecl FUN_00404840(void);
extern void __cdecl FUN_00404870(void);
extern void __cdecl FUN_00404910(void);
extern void __cdecl FUN_00404920(void);
extern void __cdecl FUN_00404a40(void);
extern void __cdecl FUN_00404ab0(void);
extern void __cdecl FUN_00404ac0(void);
extern void __cdecl FUN_00404ad0(void);
extern void __cdecl FUN_00404ae0(void);
extern void __cdecl FUN_00404af0(void);
extern void __cdecl FUN_00404b30(void);
extern void __cdecl FUN_00404b40(void);
extern void __cdecl FUN_00404b50(void);
extern void __cdecl FUN_00404b60(void);
extern void __cdecl FUN_00404b70(void);
extern void __cdecl FUN_00404b80(void);
extern void __cdecl FUN_00404b90(void);
extern void __cdecl FUN_00404cf0(void);
extern void __cdecl FUN_004060d0(void);
extern void __cdecl FUN_00406270(void);
extern void __cdecl FUN_00406480(void);
extern void __cdecl FUN_004065d0(void);
extern void __cdecl FUN_00406700(void);
extern void __cdecl FUN_00406760(void);
extern void __cdecl FUN_00406770(void);
extern void __cdecl FUN_00406780(void);
extern void __cdecl FUN_004067a0(void);
extern void __cdecl FUN_004067b0(void);
extern void __cdecl FUN_004067d0(void);
extern void __cdecl FUN_004067f0(void);
extern void __cdecl FUN_00406810(void);
extern void __cdecl FUN_00406820(void);
extern void __cdecl FUN_00406840(void);
extern void __cdecl FUN_00406860(void);
extern void __cdecl FUN_00406870(void);
extern void __cdecl FUN_00406880(void);
extern void __cdecl FUN_00406890(void);
extern void __cdecl FUN_004068e0(void);
extern void __cdecl FUN_00406900(void);
extern void __cdecl FUN_00406910(void);
extern void __cdecl FUN_00406920(void);
extern void __cdecl FUN_00406930(void);
extern void __cdecl FUN_00406940(void);
extern void __cdecl FUN_00406950(void);
extern void __cdecl FUN_00406a40(void);
extern void __cdecl FUN_00406aa0(void);
extern void __cdecl FUN_004cbf20(void);
extern void __cdecl FUN_006b45a0(void);
extern void __cdecl FUN_006b46b0(void);
extern void __cdecl FUN_006bbc00(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00701da0(void);
extern int g_007b21b0;
extern int g_007b21b4;
extern int g_007b21b8;
extern int g_007b21bc;
extern int g_007b21c0;
extern int g_007b21c4;
extern int g_007b21c8;
extern int g_007b21cc;
extern int g_007b21d0;
extern int g_007b7b68;
extern int g_007b7b6c;
extern int g_007b7c70;
extern int g_007b7c74;
extern int g_007b7c78;
extern int g_007b7c7c;
extern int g_007b7c80;
extern int g_007b7c84;
extern int g_007b7c88;
extern int g_007b7c8c;
extern int g_007b7c90;
extern int g_007b7c98;
extern int g_007b7ca0;
extern int g_007b7ca4;
extern int g_007b7ca8;
extern int g_007b7cac;
extern int g_007b7cb0;
extern int g_007b7cb4;
extern int g_007b7cb8;
extern int g_007b7cbc;
extern int g_007b7dc0;
extern int g_007b7dc4;
extern int g_007b7dcc;
extern int g_007b7dd0;
extern int g_007b7dd8;
extern int g_007b7ddc;
extern int g_007b7de0;
extern int g_007b7de4;
extern int g_007b7df0;
extern int g_007b7df4;
extern int g_007b7df8;
extern int g_007b7dfc;
extern int g_007b7e00;
extern int g_007b7e04;
extern int g_007b7e08;
extern int g_007b7e0c;
extern int g_007b7e10;
extern int g_007b7e14;
extern int g_007b7e18;
extern int g_007b7e1c;
extern int g_007b7e20;
extern int g_007b7e24;
extern int g_007b7e28;
extern int g_007b7e2c;
extern int g_007b7e30;
extern int g_007b7e34;
extern int g_007b7e38;
extern int g_007b7e3c;
extern int g_007b7e40;
extern int g_007b7e44;
extern int g_007b7e48;
extern int g_007b7e4c;
extern int g_007b7e50;
extern int g_007b7e54;
extern int g_007b7e58;
extern int g_007b7e5c;
extern int g_007b7e60;
extern int g_007b7e64;
extern int g_007b7e68;
extern int g_007b7e6c;
extern int g_007b7e70;
extern int g_007b7e74;
extern int g_007b7e78;
extern int g_007b7e7c;
extern int g_007b7e80;
extern int g_007b7e84;
extern int g_007b7e88;
extern int g_007b7e8c;
extern int g_007b7e90;
extern int g_007b7e94;
extern int g_007b7e98;
extern int g_007b7e9c;
extern int g_007b7ea0;
extern int g_007b7ea4;
extern int g_007b7ea8;
extern int g_007b7eac;
extern int g_00858924;
extern int g_008589b4;
extern int g_008589cc;
extern char g_007ddd21;
extern char g_0076bafc[];
extern char g_0076bb24[];
extern char g_0076bb64[];
extern char g_0076bb74[];
extern char g_0076bb88[];
extern char g_0076bb9c[];
extern char g_0076bbb0[];
extern char g_0076bbc4[];
extern char g_0076bbdc[];
extern char g_0076bbf4[];
extern char g_0076bc08[];
extern char g_0076bc1c[];
extern char g_0076bc30[];
extern char g_0076bc40[];
extern char g_0076bc50[];
extern char g_0076bc5c[];
extern char g_0076bc6c[];
extern char g_0076bc7c[];
extern char g_0076bc8c[];
extern char g_0076bca0[];
extern char g_0076bcb8[];
extern char g_0076bcd4[];
extern char g_0076bce4[];
extern char g_0076bcf4[];
extern char g_0076bd08[];
extern char g_0076bd18[];
extern char g_0076bd30[];
extern char g_0076bd44[];
extern char g_0076bd50[];
extern char g_0076bd60[];
extern char g_0076bd74[];
extern char g_0076bd88[];
extern char g_0076bd98[];
extern char g_0076bdb0[];
extern char g_0076bdc4[];
extern char g_0076bdd4[];
extern char g_0076bde0[];
extern char g_0076bdf0[];
extern char g_0076be00[];
extern char g_0076be10[];
extern char g_0076be20[];
extern char g_0076be2c[];
extern char g_0076be38[];
extern char g_0076be48[];
extern char g_0076be54[];
extern char g_0076be64[];
extern char g_0076be70[];
extern char g_0076be7c[];
extern char g_0076be84[];
extern char g_0076be8c[];
extern char g_0076be94[];
extern char g_0076be9c[];
extern char g_0076bea4[];
extern char g_0076beb8[];
extern char g_0076bec8[];
extern char g_0076bed8[];
extern char g_0076bee8[];
extern char g_0076bef0[];
extern char g_0076bef8[];
extern char g_0076bf00[];
extern char g_0076bf08[];
extern char g_0076bf10[];
extern char g_0076bf18[];
extern char g_0076bf24[];
extern char g_0076bf34[];
extern char g_0076bf40[];
extern char g_0076bf50[];
extern char g_0076bf60[];
extern char g_0076bf6c[];
extern char g_0076bf7c[];
extern char g_0076bf8c[];
extern char g_0076bf9c[];
extern char g_0076bfa4[];
extern char g_0076bfac[];
extern char g_0076bfb4[];
extern char g_0076bfbc[];
extern char g_0076bfcc[];
extern char g_0076bfe4[];
extern char g_0076bff8[];
extern char g_0076c010[];
extern char g_0076c01c[];
extern char g_0076c028[];
extern char g_0076c034[];
extern char g_0076c040[];
extern char g_0076c048[];
extern char g_0076c050[];
extern char g_0076c05c[];
extern char g_0076c06c[];
extern char g_0076c080[];
extern char g_0076c094[];
extern char g_0076c0a0[];
extern char g_0076c0b0[];
extern char g_0076c0c4[];
extern char g_0076c0d0[];
extern char g_0076c0dc[];
extern char g_0076c0ec[];
extern char g_0076c100[];
extern char g_0076c110[];
extern char g_0076c120[];
extern char g_0076c130[];
extern char g_0076c14c[];
extern char g_0076c158[];
extern char g_0076c168[];
extern char g_0076c174[];
extern char g_0076c17c[];
extern char g_0076c18c[];
extern char g_0076c194[];
extern char g_0076c1a0[];
extern char g_0076c1b0[];
extern char g_0076c1bc[];
extern char g_0076c1cc[];
extern char g_0076c1d8[];
extern char g_0076c1e4[];
extern char g_0076c1ec[];
extern char g_0076c1fc[];
extern char g_0076c208[];
extern char g_0076c218[];
extern char g_0076c224[];
extern char g_0076c22c[];
extern char g_0076c238[];
extern char g_0076c244[];
extern char g_0076c254[];
extern char g_0076c260[];
extern char g_0076c274[];
extern char g_0076c288[];
extern char g_0076c298[];
extern char g_0076c2ac[];
extern char g_0076c2b8[];
extern char g_0076c2c4[];
extern char g_0076c2d4[];
extern char g_0076c2e4[];
extern char g_0076c2f4[];
extern char g_0076c304[];
extern char g_0076c310[];
extern char g_0076c320[];
extern char g_0076c330[];
extern char g_0076c340[];
extern char g_0076c350[];
extern char g_0076c360[];
extern char g_0076c36c[];
extern char g_0076c37c[];
extern char g_0076c394[];
extern char g_0076c3a8[];
extern char g_0076c3bc[];
extern char g_0076c3cc[];
extern char g_0076c3e0[];
extern char g_0076c3ec[];
extern char g_0076c404[];
extern char g_0076c414[];
extern char g_0076c420[];
extern char g_0076c43c[];
extern char g_0076c44c[];
extern char g_0076c464[];
extern char g_0076c47c[];
extern char g_0076c494[];
extern char g_0076c4a8[];
extern char g_0076c4b0[];
extern char g_0076c4c0[];
extern char g_0076c4d0[];
extern char g_0076c4e0[];
extern char g_0076c4f4[];
extern char g_0076c500[];
extern char g_0076c510[];
extern char g_0076c518[];
extern char g_0076c528[];
extern char g_0076c534[];
extern char g_0076c540[];
extern char g_0076c550[];
extern char g_0076c564[];
extern char g_0076c574[];
extern char g_0076c588[];
extern char g_0076c598[];

__declspec(naked) void FUN_00404d60(void)
{
    __asm {
        call    FUN_004cbf20
        mov     eax, dword ptr [esp+0x8]
        and     eax, 0xff
        mov     dword ptr [g_007b7dc0], eax
        call    FUN_00701da0
        call    FUN_00403eb0
        call    FUN_00403ad0
        push    0
        push    0x100
        call    FUN_006f3c80
        mov     dword ptr [g_007b7e40], eax
        mov     byte ptr [eax], 0
        mov     al, byte ptr [g_007ddd21]
        test    al, al
        /* __emit: MSVC miscomputes the forward jnz rel32 by +5 when call-relocs
           sit between the branch and its target; hardcode 0F 85 32 11 00 00 */
        __emit  0x0F
        __emit  0x85
        __emit  0x32
        __emit  0x11
        __emit  0x00
        __emit  0x00
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00403a30
        push    offset g_0076c598
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00402a00
        push    offset g_0076c588
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00402d30
        push    offset g_0076c574
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00403880
        push    offset g_0076c564
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00402d10
        push    offset g_0076c550
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00403790
        push    offset g_0076c540
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00403a00
        push    offset g_0076c534
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00401e50
        push    offset g_0076c528
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00401140
        push    offset g_0076c518
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00401370
        push    offset g_0076c510
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_004014a0
        push    offset g_0076c500
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_004010a0
        push    offset g_0076c4f4
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_004010b0
        push    offset g_0076c4e0
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_004028d0
        push    offset g_0076c4d0
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_004028e0
        push    offset g_0076c4c0
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_004028f0
        push    offset g_0076c4b0
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00402900
        push    offset g_0076c4a8
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00402d70
        push    offset g_0076c494
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00402e60
        push    offset g_0076c47c
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_004015b0
        push    offset g_0076c464
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00401a10
        push    offset g_0076c44c
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00401e40
        push    offset g_0076c43c
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00404840
        push    offset g_0076c420
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00404870
        push    offset g_0076c414
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00404910
        push    offset g_0076c404
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00404a40
        push    offset g_0076c3ec
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_004044e0
        push    offset g_0076c3e0
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_004045c0
        push    offset g_0076c3cc
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00404480
        push    offset g_0076c3bc
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_004043f0
        push    offset g_0076c3a8
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00404580
        push    offset g_0076c394
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_004045a0
        push    offset g_0076c37c
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_004022d0
        push    offset g_0076c36c
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00402280
        push    offset g_0076c360
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_004022a0
        push    offset g_0076c350
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00402250
        push    offset g_0076c340
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00402660
        push    offset g_0076c330
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_004024d0
        push    offset g_0076c320
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00402230
        push    offset g_0076c310
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00402170
        push    offset g_0076c304
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00404cf0
        push    offset g_0076c2f4
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b21b4
        push    offset g_0076c2e4
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b7dd8
        push    offset g_0076c2d4
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7de4
        push    offset g_0076c2c4
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b7dc4
        push    offset g_0076c2b8
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x2
        push    offset g_007b7c78
        push    offset g_0076c2ac
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b21c4
        push    offset g_0076c298
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7e40
        push    offset g_0076c288
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x2
        push    offset g_00858924
        push    offset g_0076c274
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x2
        push    offset g_007b7e44
        push    offset g_0076c260
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7dd0
        push    offset g_0076c254
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x2
        push    offset g_007b7dcc
        push    offset g_0076c244
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x2
        push    offset g_007b7c80
        push    offset g_0076c238
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7c84
        push    offset g_0076c22c
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x2
        push    offset g_007b7e58
        push    offset g_0076c224
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x2
        push    offset g_007b7c70
        push    offset g_0076c218
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7c74
        push    offset g_0076c208
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x2
        push    offset g_007b7c7c
        push    offset g_0076c1fc
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x2
        push    offset g_007b7c88
        push    offset g_0076c1ec
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7c8c
        push    offset g_0076c1e4
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x2
        push    offset g_007b7c90
        push    offset g_0076c1d8
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7c98
        push    offset g_0076c1cc
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b7ca0
        push    offset g_0076c1bc
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b7ca4
        push    offset g_0076c1b0
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7ca8
        push    offset g_0076c1a0
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b7cac
        push    offset g_0076c194
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b7cb0
        push    offset g_0076c18c
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x2
        push    offset g_007b7cb4
        push    offset g_0076c17c
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7cb8
        push    offset g_0076c174
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x2
        push    offset g_007b7cbc
        push    offset g_0076c168
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0x14
        push    0x2
        push    offset g_007b7ddc
        push    offset g_0076c158
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0x14
        push    0x2
        push    offset g_007b7de0
        push    offset g_0076c14c
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00404620
        push    offset g_0076c130
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00403a40
        push    offset g_0076c120
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b7df0
        push    offset g_0076c110
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b7df4
        push    offset g_0076c100
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7df8
        push    offset g_0076c0ec
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b7dfc
        push    offset g_0076c0dc
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b7e00
        push    offset g_0076c0d0
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7e04
        push    offset g_0076c0c4
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b7e08
        push    offset g_0076c0b0
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b7e0c
        push    offset g_0076c0a0
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7e10
        push    offset g_0076c094
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0x14
        push    0x2
        push    offset g_007b7e14
        push    offset g_0076c080
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x14
        push    0x2
        push    offset g_007b7e18
        push    offset g_0076c06c
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0x14
        push    0x2
        push    offset g_007b7e1c
        push    offset g_0076c05c
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0x14
        push    0x2
        push    offset g_007b7e20
        push    offset g_0076c050
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b7e24
        push    offset g_0076c048
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7e28
        push    offset g_0076c040
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0x14
        push    0x2
        push    offset g_007b7e2c
        push    offset g_0076c034
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b7e30
        push    offset g_0076c028
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x2
        push    offset g_007b7e34
        push    offset g_0076c01c
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7e38
        push    offset g_0076c010
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x2
        push    offset g_007b7e3c
        push    offset g_0076bff8
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x2
        push    offset g_008589cc
        push    offset g_0076bfe4
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7e78
        push    offset g_0076bfcc
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_008589b4
        push    offset g_0076bfbc
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7e48
        push    offset g_0076bfb4
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b7e4c
        push    offset g_0076bfac
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b7e50
        push    offset g_0076bfa4
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7e54
        push    offset g_0076bf9c
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b21b8
        push    offset g_0076bf8c
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b21bc
        push    offset g_0076bf7c
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x2
        push    offset g_007b7e5c
        push    offset g_0076bf6c
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7e60
        push    offset g_0076bf60
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b21c0
        push    offset g_0076bf50
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x2
        push    offset g_007b7e64
        push    offset g_0076bf40
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7e68
        push    offset g_0076bf34
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x2
        push    offset g_007b7e6c
        push    offset g_0076bf24
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x2
        push    offset g_007b7e70
        push    offset g_0076bf18
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x2
        push    offset g_007b7e74
        push    offset g_0076bf10
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x14
        push    0x2
        push    offset g_007b7e7c
        push    offset g_0076bf08
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00404920
        push    offset g_0076bf00
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00404ab0
        push    offset g_0076bef8
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00404ac0
        push    offset g_0076bef0
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00404ad0
        push    offset g_0076bee8
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00404ae0
        push    offset g_0076bed8
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00404af0
        push    offset g_0076bec8
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00404b30
        push    offset g_0076beb8
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00404b40
        push    offset g_0076bea4
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00404b50
        push    offset g_0076be9c
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00404b60
        push    offset g_0076be94
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00404b70
        push    offset g_0076be8c
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00404b80
        push    offset g_0076be84
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00404b90
        push    offset g_0076be7c
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b7b68
        push    offset g_0076be70
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset g_007b7b6c
        push    offset g_0076be64
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00406480
        push    offset g_0076be54
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00406270
        push    offset g_0076be48
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_004060d0
        push    offset g_0076be38
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_004065d0
        push    offset g_0076be2c
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00406700
        push    offset g_0076be20
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00406760
        push    offset g_0076be10
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00406770
        push    offset g_0076be00
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00406780
        push    offset g_0076bdf0
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_004067a0
        push    offset g_0076bde0
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_004067f0
        push    offset g_0076bdd4
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_004067b0
        push    offset g_0076bdc4
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_004067d0
        push    offset g_0076bdb0
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00406810
        push    offset g_0076bd98
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00406820
        push    offset g_0076bd88
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00406840
        push    offset g_0076bd74
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7e80
        push    offset g_0076bd60
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b21c8
        push    offset g_0076bd50
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x32
        push    0x2
        push    offset g_007b7e8c
        push    offset g_0076bd44
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0x32
        push    0x2
        push    offset g_007b7e88
        push    offset g_0076bd30
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0x32
        push    0x2
        push    offset g_007b7e84
        push    offset g_0076bd18
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x32
        push    0x2
        push    offset g_007b7e90
        push    offset g_0076bd08
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7e94
        push    offset g_0076bcf4
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b21cc
        push    offset g_0076bce4
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x64
        push    0x2
        push    offset g_007b7e98
        push    offset g_0076bcd4
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7e9c
        push    offset g_0076bcb8
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b21d0
        push    offset g_0076bca0
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x64
        push    0x2
        push    offset g_007b7ea0
        push    offset g_0076bc8c
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset g_007b7ea4
        push    offset g_0076bc7c
        call    FUN_006b45a0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset g_007b7ea8
        push    offset g_0076bc6c
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x64
        push    0x2
        push    offset g_007b7eac
        push    offset g_0076bc5c
        call    FUN_006b45a0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00406860
        push    offset g_0076bc50
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00406870
        push    offset g_0076bc40
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00406880
        push    offset g_0076bc30
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00406890
        push    offset g_0076bc1c
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_004068e0
        push    offset g_0076bc08
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00406900
        push    offset g_0076bbf4
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00406910
        push    offset g_0076bbdc
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00406920
        push    offset g_0076bbc4
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00406930
        push    offset g_0076bbb0
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00406940
        push    offset g_0076bb9c
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    0x1
        push    offset FUN_00406950
        push    offset g_0076bb88
        call    FUN_006b46b0
        mov     ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    0x1
        push    offset FUN_00406a40
        push    offset g_0076bb74
        call    FUN_006b46b0
        mov     edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    0x1
        push    offset FUN_00406aa0
        push    offset g_0076bb64
        call    FUN_006b46b0
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        push    0x1200
        push    offset g_0076bb24
        call    FUN_006bbc00
        push    0
        push    0x1700
        push    offset g_0076bafc
        call    FUN_006bbc00
        mov     al, 1
        ret     0x8

end_label:
        /* reference has 5 NOP padding bytes after the single epilogue */
        nop
        nop
        nop
        nop
        nop
    }
}
