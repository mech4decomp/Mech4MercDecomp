/*
 * FUN_00663460 (118 B) — __cdecl, 2 params.
 *
 * Calls a virtual method on param_1, then a virtual method on the
 * returned object, then FUN_006a6600 / FUN_006a7570 / FUN_00662fb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00795444;
extern void __fastcall FUN_006a6600(void);
extern void __fastcall FUN_006a7570(void);
extern void __cdecl FUN_00662fb0(void);

__declspec(naked) void __cdecl FUN_00663460(void)
{
    __asm {
        sub     esp, 0x40
        push    esi
        mov     esi, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [eax]
        push    0x1
        push    ecx
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xf8]
        push    0x1
        push    0x44480000
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x20]
        call    FUN_006a6600
        push    0x3f4ccccd
        push    0x41400000
        push    0x41200000
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x34]
        call    FUN_006a7570
        mov     eax, dword ptr [g_00795444]
        push    0x2
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x30]
        push    edx
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        pop     esi
        add     esp, 0x40
        ret
    }
}
