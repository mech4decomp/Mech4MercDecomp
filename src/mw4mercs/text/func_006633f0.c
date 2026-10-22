/*
 * FUN_006633f0 (109 B) — Conditional multi-step setup.
 *
 * Calls FUN_00662f10(param_1, g_795440); if it returns nonzero, calls
 * FUN_006a6600, FUN_006a7510, and FUN_00662fb0 with stack locals and
 * globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00662f10(int a, int b);
extern void __cdecl FUN_006a6600(int a, int b, int c, int d);
extern void __cdecl FUN_006a7510(int a, int b, int c, int d);
extern void __cdecl FUN_00662fb0(int a, int b, int c, int d, int e);

extern int g_795440;   /* 0x00795440 */
extern int g_795444;   /* 0x00795444 */

__declspec(naked) void __cdecl FUN_006633f0(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [g_795440]
        sub     esp, 0x34
        push    esi
        mov     esi, dword ptr [esp + 0x3c]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 8
        test    al, al
        jz      l_458
        push    0
        push    0x44480000
        push    0
        push    0
        lea     ecx, [esp + 0x14]
        call    FUN_006a6600
        push    0x3f4ccccd
        push    0x41400000
        push    0x41c80000
        push    1
        lea     ecx, [esp + 0x28]
        call    FUN_006a7510
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [g_795444]
        push    ecx
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
    l_458:
        pop     esi
        add     esp, 0x34
        ret
    }
}
