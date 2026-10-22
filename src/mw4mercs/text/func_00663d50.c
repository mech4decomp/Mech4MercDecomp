/*
 * FUN_00663d50 (210 B) — ABL candidate setup (ESP frame): calls
 * FUN_00662f10 test, builds candidate data via 0x6a6600/0x6a6cb0/
 * 0x6a6aa0/0x6a7510/0x6a62fb0, finalizes via 0x665aa0/0x5cb200.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00662f10(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a6cb0(void);
extern void __cdecl FUN_006a6aa0(void);
extern void __cdecl FUN_006a7510(void);
extern void __cdecl FUN_00662fb0(void);
extern void __cdecl FUN_00665aa0(void);
extern void __cdecl FUN_005cb200(void);

extern int g_00795440;
extern int g_00795444;

__declspec(naked) void FUN_00663d50(void)
{
    __asm {
        mov     eax, dword ptr [g_00795440]
        sub     esp, 0x70
        push    esi
        mov     esi, dword ptr [esp + 0x78]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 8
        test    al, al
        jz      Le1d
        push    0
        push    0x43480000
        push    0
        push    0
        lea     ecx, [esp + 0x34]
        call    FUN_006a6600
        push    0
        push    1
        push    0
        lea     ecx, [esp + 0x10]
        call    FUN_006a6cb0
        push    0
        push    0x43480000
        push    0
        push    3
        lea     ecx, [esp + 0x20]
        call    FUN_006a6600
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x3ecccccd
        lea     edx, [esp + 0xc]
        push    edx
        push    0x3e4ccccd
        lea     eax, [esp + 0x34]
        push    eax
        push    0x3ecccccd
        lea     ecx, [esp + 0x50]
        call    FUN_006a6aa0
        mov     ecx, dword ptr [esp + 0x7c]
        push    0x3f19999a
        push    0x41400000
        push    ecx
        push    1
        lea     ecx, [esp + 0x64]
        call    FUN_006a7510
        mov     edx, dword ptr [g_00795444]
        push    0
        push    edx
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x60]
        push    ecx
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x54], 0x795458
        call    FUN_00665aa0
        lea     ecx, [esp + 0x3c]
        call    FUN_005cb200
Le1d:
        pop     esi
        add     esp, 0x70
        ret
    }
}
