/*
 * FUN_00663900 (218 B) — ABL candidate setup: calls FUN_00662f10 test,
 * then builds candidate data via 0x6a6600/0x6a6940/0x6a7510/0x6a62fb0
 * and finalizes with 0x665ab0/0x547bc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00662f10(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a6940(void);
extern void __cdecl FUN_006a7510(void);
extern void __cdecl FUN_00662fb0(void);
extern void __cdecl FUN_00665ab0(void);
extern void __cdecl FUN_00547bc0(void);

extern int g_00795440;
extern int g_00795444;

__declspec(naked) void FUN_00663900(void)
{
    __asm {
        mov     eax, dword ptr [g_00795440]
        sub     esp, 0x64
        push    esi
        mov     esi, dword ptr [esp + 0x6c]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 8
        test    al, al
        jz      Ld5
        push    0
        push    0x44480000
        push    0
        push    0
        lea     ecx, [esp + 0x28]
        call    FUN_006a6600
        push    1
        push    0x44480000
        push    0
        push    3
        lea     ecx, [esp + 0x14]
        call    FUN_006a6600
        lea     ecx, [esp + 4]
        push    ecx
        push    0x3e99999a
        lea     edx, [esp + 0x20]
        push    edx
        push    0x3f333333
        lea     ecx, [esp + 0x3c]
        call    FUN_006a6940
        mov     eax, dword ptr [esp + 0x70]
        push    0x3f4ccccd
        push    0x41400000
        push    eax
        push    1
        lea     ecx, [esp + 0x58]
        call    FUN_006a7510
        mov     ecx, dword ptr [esp + 0x74]
        mov     edx, dword ptr [g_00795444]
        push    ecx
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x54]
        push    ecx
        push    esi
        call    FUN_00662fb0
        mov     eax, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x58]
        sub     edx, eax
        add     esp, 0x14
        sar     edx, 2
        push    edx
        push    eax
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x50], 0x795458
        call    FUN_00665ab0
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x38]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_00547bc0
Ld5:
        pop     esi
        add     esp, 0x64
        ret
    }
}
