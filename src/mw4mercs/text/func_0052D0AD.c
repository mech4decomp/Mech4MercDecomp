/*
 * FUN_0052D0AD (1239 B) — __thiscall. Loads a settings object (FUN_004d33e0,
 * FUN_0040ecc0), then registers a large set of named fields (this+0x20..0x370)
 * via FUN_00411cb0 / FUN_00411e10 with clamping of several values, and finally
 * iterates 8 sub-objects (this+0xec, step 0x50) calling FUN_0040dd50 /
 * FUN_00412390 / FUN_0040de20 / FUN_0052b9d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d33e0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411e10(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_0052b9d0(void);
extern void __cdecl FUN_0040de20(void);

extern int g_76b420;   /* function pointer @ 0x76b420 */

extern char g_7727b4[];
extern char g_77acac[];
extern char g_77ac94[];
extern char g_77ac78[];
extern char g_77ac70[];
extern char g_77ac64[];
extern char g_77ac54[];
extern char g_77ac44[];
extern char g_77ac30[];
extern char g_77ac1c[];
extern char g_77ac0c[];
extern char g_77ac00[];
extern char g_77abec[];
extern char g_77abdc[];
extern char g_77abc4[];
extern char g_77abb8[];
extern char g_77aba8[];
extern char g_77acd0[];
extern char g_77ab98[];
extern char g_77acbc[];
extern char g_77ab90[];
extern char g_77ab88[];
extern char g_77ab7c[];
extern char g_77ab70[];
extern char g_77ab60[];
extern char g_77a4b0[];
extern char g_77a4c0[];
extern char g_77a9e4[];
extern char g_77ab54[];
extern char g_77ab44[];
extern char g_77ab34[];
extern char g_77ab20[];
extern char g_77ab10[];
extern char g_77aaf4[];
extern char g_77aae8[];
extern char g_77aadc[];
extern char g_77aad0[];
extern char g_77aabc[];
extern char g_77aab0[];
extern char g_77aaa4[];
extern char g_77aa9c[];
extern char g_77a9ac[];
extern char g_77a99c[];
extern char g_77a98c[];
extern char g_77a97c[];
extern char g_77a96c[];
extern char g_77a95c[];
extern char g_77a948[];
extern char g_77a934[];
extern char g_77a920[];
extern char g_77a90c[];
extern char g_77aa48[];

__declspec(naked) void __cdecl FUN_0052D0AD(void)
{
    __asm {
        nop
        nop
        nop
        sub     esp, 0x84
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x90]
        mov     esi, ecx
        push    edi
        call    FUN_004d33e0
        push    offset g_7727b4
        mov     ecx, edi
        call    FUN_0040ecc0
        mov     edi, eax
        test    edi, edi
        je      L_d579
        push    ebx
        push    ebp
        push    0
        lea     eax, [esi + 0x20]
        push    eax
        push    offset g_77acac
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ecx, [esi + 0x24]
        push    ecx
        push    offset g_77ac94
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esi + 0x28]
        push    edx
        push    offset g_77ac78
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     eax, [esi + 0x2c]
        push    eax
        push    offset g_77ac70
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ecx, [esi + 0x30]
        push    ecx
        push    offset g_77ac64
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esi + 0x34]
        push    edx
        push    offset g_77ac54
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     eax, [esi + 0x38]
        push    eax
        push    offset g_77ac44
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ecx, [esi + 0x3c]
        push    ecx
        push    offset g_77ac30
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ebx, [esi + 0x40]
        push    ebx
        push    offset g_77ac1c
        mov     ecx, edi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jge     L_d18f
        mov     dword ptr [ebx], 0
        jmp     L_d19a
L_d18f:
        cmp     eax, 9
        jle     L_d19a
        mov     dword ptr [ebx], 9
L_d19a:
        push    0
        lea     edx, [esi + 0x44]
        push    edx
        push    offset g_77ac0c
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     eax, [esi + 0x48]
        push    eax
        push    offset g_77ac00
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ecx, [esi + 0x4c]
        push    ecx
        push    offset g_77abec
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esi + 0x50]
        push    edx
        push    offset g_77abdc
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     eax, [esi + 0x54]
        push    eax
        push    offset g_77abc4
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ecx, [esi + 0x58]
        push    ecx
        push    offset g_77abb8
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esi + 0x5c]
        push    edx
        push    offset g_77aba8
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     eax, [esi + 0x60]
        push    eax
        push    offset g_77acd0
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ecx, [esi + 0x64]
        push    ecx
        push    offset g_77ab98
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esi + 0x68]
        push    edx
        push    offset g_77acbc
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     eax, [esi + 0x6c]
        push    eax
        push    offset g_77ab90
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ecx, [esi + 0x70]
        push    ecx
        push    offset g_77ab88
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esi + 0x80]
        push    edx
        push    offset g_77ab7c
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     eax, [esi + 0x74]
        push    eax
        push    offset g_77ab70
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ecx, [esi + 0x84]
        push    ecx
        push    offset g_77ab60
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esi + 0x88]
        push    edx
        push    offset g_77a4b0
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ebx, [esi + 0x8c]
        push    ebx
        push    offset g_77a4c0
        mov     ecx, edi
        call    FUN_00411cb0
        cmp     dword ptr [ebx], 0x64
        jle     L_d2e3
        mov     dword ptr [ebx], 0x64
L_d2e3:
        push    0
        lea     ebx, [esi + 0x90]
        push    ebx
        push    offset g_77a9e4
        mov     ecx, edi
        call    FUN_00411cb0
        cmp     dword ptr [ebx], 0x2160ec0
        jle     L_d306
        mov     dword ptr [ebx], 0x2160ec0
L_d306:
        push    0
        lea     eax, [esi + 0x94]
        push    eax
        push    offset g_77ab54
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ebx, [esi + 0x98]
        push    ebx
        push    offset g_77ab44
        mov     ecx, edi
        call    FUN_00411cb0
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jne     L_d33d
        mov     dword ptr [ebx], 0
L_d33d:
        push    0
        lea     ecx, [esi + 0x9c]
        push    ecx
        push    offset g_77ab34
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esi + 0xa0]
        push    edx
        push    offset g_77ab20
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     eax, [esi + 0xa8]
        push    eax
        push    offset g_77ab10
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ecx, [esi + 0xac]
        push    ecx
        push    offset g_77aaf4
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esi + 0xa4]
        push    edx
        push    offset g_77aae8
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     eax, [esi + 0xe4]
        push    eax
        push    offset g_77aadc
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ebx, [esi + 0xe8]
        push    ebx
        push    offset g_77aad0
        mov     ecx, edi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebx]
        cmp     eax, 2
        jge     L_d3df
        mov     dword ptr [ebx], 2
        jmp     L_d3ea
L_d3df:
        cmp     eax, 8
        jle     L_d3ea
        mov     dword ptr [ebx], 8
L_d3ea:
        push    0
        lea     ecx, [esi + 0xb0]
        push    ecx
        push    offset g_77aabc
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esi + 0xb4]
        push    edx
        push    offset g_77aab0
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ebp, [esi + 0x36c]
        push    ebp
        push    offset g_77aaa4
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     ebx, [esi + 0x370]
        push    ebx
        push    offset g_77aa9c
        mov     ecx, edi
        call    FUN_00411cb0
        mov     ebp, dword ptr [ebp]
        cmp     dword ptr [ebx], ebp
        jle     L_d447
        mov     dword ptr [ebx], ebp
L_d447:
        push    0
        lea     eax, [esi + 0xbc]
        push    eax
        push    offset g_77a9ac
        mov     ecx, edi
        call    FUN_00411e10
        push    0
        lea     ecx, [esi + 0xc0]
        push    ecx
        push    offset g_77a99c
        mov     ecx, edi
        call    FUN_00411e10
        push    0
        lea     edx, [esi + 0xc4]
        push    edx
        push    offset g_77a98c
        mov     ecx, edi
        call    FUN_00411e10
        push    0
        lea     eax, [esi + 0xc8]
        push    eax
        push    offset g_77a97c
        mov     ecx, edi
        call    FUN_00411e10
        push    0
        lea     ecx, [esi + 0xcc]
        push    ecx
        push    offset g_77a96c
        mov     ecx, edi
        call    FUN_00411e10
        push    0
        lea     edx, [esi + 0xd0]
        push    edx
        push    offset g_77a95c
        mov     ecx, edi
        call    FUN_00411e10
        push    0
        lea     eax, [esi + 0xd4]
        push    eax
        push    offset g_77a948
        mov     ecx, edi
        call    FUN_00411e10
        push    0
        lea     ecx, [esi + 0xd8]
        push    ecx
        push    offset g_77a934
        mov     ecx, edi
        call    FUN_00411e10
        push    0
        lea     edx, [esi + 0xdc]
        push    edx
        push    offset g_77a920
        mov     ecx, edi
        call    FUN_00411e10
        push    0
        lea     eax, [esi + 0xe0]
        push    eax
        push    offset g_77a90c
        mov     ecx, edi
        call    FUN_00411e10
        mov     ebp, dword ptr [g_76b420]
        xor     ebx, ebx
        add     esi, 0xec
L_d527:
        push    0
        lea     ecx, [esp + 0x14]
        call    FUN_0040dd50
        push    ebx
        lea     ecx, [esp + 0x64]
        push    offset g_77aa48
        push    ecx
        call    ebp
        add     esp, 0xc
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x68]
        push    eax
        mov     ecx, edi
        call    FUN_00412390
        test    al, al
        je      L_d565
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    FUN_0052b9d0
L_d565:
        lea     ecx, [esp + 0x10]
        call    FUN_0040de20
        inc     ebx
        add     esi, 0x50
        cmp     ebx, 8
        jl      L_d527
        pop     ebp
        pop     ebx
L_d579:
        pop     edi
        pop     esi
        add     esp, 0x84
        ret     4
    }
}
