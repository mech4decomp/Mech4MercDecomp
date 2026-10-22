/* MW4Stats.dll — gap region 0x10005528..0x10005810 (744 B)
 * One large __thiscall function 0x10005530 (ret 8) plus 8 leading + 12 trailing NOPs.
 */

extern unsigned short g_10024edc;
extern unsigned short g_10024eec;
extern unsigned short g_10024f0c;
extern unsigned short g_10024f24;
extern unsigned short g_10024f54;
extern unsigned short g_10024f84;
extern unsigned short g_10024fbc;
extern unsigned short g_10024fec;
extern unsigned short g_1002500c;
extern unsigned short g_1002502c;
extern unsigned short g_10025050;
extern unsigned short g_1002506c;
extern unsigned short g_10025080;
extern unsigned short g_1002509c;
extern unsigned short g_100250b0;
extern unsigned short g_100250c0;
extern unsigned short g_100250e4;
extern unsigned short g_100250f8;
extern unsigned short g_10025118;
extern unsigned short g_10025138;
extern unsigned short g_10025150;
extern unsigned short g_10025160;
extern unsigned short g_1002517c;
extern unsigned short g_10025198;
extern unsigned short g_100251c0;
extern unsigned short g_100251f0;
extern unsigned short g_10025208;
extern unsigned short g_10025218;
extern unsigned short g_10025230;
extern unsigned short g_10025248;
extern unsigned short g_1002527c;
extern unsigned short g_10025294;
extern void __cdecl FUN_10005d80(void);
extern void __cdecl FUN_10006190(void);
extern void __cdecl FUN_10004140(void);
extern void __cdecl FUN_10004e30(void);
extern void __cdecl FUN_10005850(void);
extern void __cdecl FUN_100048e0(void);
extern void __cdecl FUN_10005810(void);
extern void __cdecl FUN_10005830(void);

__declspec(naked) void FUN_10005528(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn 0x10005530 ---- */
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+0x18]
        mov edx, dword ptr [ecx+0x18]
        push edi
        lea eax, [esp+0x1c]
        push eax
        push edx
        lea ecx, [esp+0x14]
        call FUN_10005d80
        lea eax, [esp+0xc]
        lea ebx, [esi+8]
        push eax
        mov ecx, ebx
        call FUN_10006190
        lea ecx, [esi+0xc]
        call FUN_10004140
        cmp eax, 4
        mov edi, dword ptr [esp+0x18]
        jne L1
        lea ecx, [esi+0x1c]
        push ecx
        push offset g_10024edc
        push edi
        call FUN_10004e30
        add esp, 0xc
L1:
        lea edx, [esi+0xb4]
        push edx
        push offset g_10024eec
        push edi
        call FUN_10005850
        lea eax, [esi+0x17c]
        push eax
        push offset g_10024f0c
        push edi
        call FUN_10004e30
        lea ecx, [esi+0x214]
        push ecx
        push offset g_10024f24
        push edi
        call FUN_100048e0
        lea edx, [esi+0x218]
        push edx
        push offset g_10024f54
        push edi
        call FUN_10005810
        lea eax, [esi+0x220]
        push eax
        push offset g_10024f84
        push edi
        call FUN_100048e0
        lea ecx, [esi+0x224]
        push ecx
        push offset g_10024fbc
        push edi
        call FUN_100048e0
        add esp, 0x48
        lea edx, [esi+0x228]
        push edx
        push offset g_10024fec
        push edi
        call FUN_100048e0
        lea eax, [esi+0x22c]
        push eax
        push offset g_1002500c
        push edi
        call FUN_10005810
        lea ecx, [esi+0x234]
        push ecx
        push offset g_1002502c
        push edi
        call FUN_100048e0
        lea edx, [esi+0x238]
        push edx
        push offset g_10025050
        push edi
        call FUN_100048e0
        lea eax, [esi+0x23c]
        push eax
        push offset g_1002506c
        push edi
        call FUN_100048e0
        lea ecx, [esi+0x240]
        push ecx
        push offset g_10025080
        push edi
        call FUN_100048e0
        add esp, 0x48
        lea edx, [esi+0x244]
        push edx
        push offset g_1002509c
        push edi
        call FUN_100048e0
        lea eax, [esi+0x248]
        push eax
        push offset g_100250b0
        push edi
        call FUN_100048e0
        lea ecx, [esi+0x24c]
        push ecx
        push offset g_100250c0
        push edi
        call FUN_10005810
        lea edx, [esi+0x254]
        push edx
        push offset g_100250e4
        push edi
        call FUN_100048e0
        lea eax, [esi+0x258]
        push eax
        push offset g_100250f8
        push edi
        call FUN_100048e0
        lea ecx, [esi+0x25c]
        push ecx
        push offset g_10025118
        push edi
        call FUN_10005830
        add esp, 0x48
        lea edx, [esi+0x28c]
        push edx
        push offset g_10025138
        push edi
        call FUN_100048e0
        lea eax, [esi+0x290]
        push eax
        push offset g_10025150
        push edi
        call FUN_10004e30
        lea ecx, [esi+0x328]
        push ecx
        push offset g_10025160
        push edi
        call FUN_100048e0
        lea edx, [esi+0x32c]
        push edx
        push offset g_1002517c
        push edi
        call FUN_100048e0
        lea eax, [esi+0x330]
        push eax
        push offset g_10025198
        push edi
        call FUN_10005830
        lea ecx, [esi+0x360]
        push ecx
        push offset g_100251c0
        push edi
        call FUN_100048e0
        add esp, 0x48
        lea edx, [esi+0x364]
        push edx
        push offset g_100251f0
        push edi
        call FUN_10004e30
        lea eax, [esi+0x3fc]
        push eax
        push offset g_10025208
        push edi
        call FUN_100048e0
        add esp, 0x18
        mov ecx, ebx
        call FUN_10004140
        test eax, eax
        jne L2
        add esi, 0x400
        push esi
        push offset g_10025218
        push edi
        call FUN_100048e0
        add esp, 0xc
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
L2:
        mov ecx, ebx
        call FUN_10004140
        cmp eax, 2
        jne L3
        add esi, 0x400
        push esi
        push offset g_10025230
        push edi
        call FUN_100048e0
        add esp, 0xc
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
L3:
        mov ecx, ebx
        call FUN_10004140
        cmp eax, 4
        jne L4
        lea ecx, [esi+0x404]
        push ecx
        push offset g_10025248
        push edi
        call FUN_100048e0
        lea edx, [esi+0x400]
        push edx
        push offset g_1002527c
        push edi
        call FUN_100048e0
        add esi, 0x408
        push esi
        push offset g_10025294
        push edi
        call FUN_100048e0
        add esp, 0x24
L4:
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}
