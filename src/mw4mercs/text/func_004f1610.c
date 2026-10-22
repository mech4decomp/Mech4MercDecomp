/*
 * FUN_004f1610 (44 B) — Adept::Channel subclass constructor (__thiscall,
 * RET 0xc). Calls base constructor FUN_004f1470, then overrides vtable to
 * 0x774e48 and sets field +0x30 to 0x80000000.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f1470(void);

__declspec(naked) void FUN_004f1610(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004f1470
        mov     dword ptr [esi], 0x774e48
        mov     dword ptr [esi + 0x30], 0x80000000
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
