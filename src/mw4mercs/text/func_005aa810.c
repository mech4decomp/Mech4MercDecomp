/*
 * FUN_005aa810 (42 B) — Constructor. Calls FUN_005ecef0 (thiscall) with
 * 4 stack params, then sets vtable pointer at [ESI] to 0x007854F4.
 * Returns this in EAX. __thiscall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ecef0(void);

__declspec(naked) void __fastcall FUN_005aa810(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xC]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005ecef0
        mov     dword ptr [esi], 0x7854F4
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
