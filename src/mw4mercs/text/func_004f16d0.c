/*
 * FUN_004f16d0 (47 B) — Adept::Channel subclass constructor (__thiscall,
 * RET 0x14, 5 params). Calls base constructor FUN_004f1cb0, then overrides
 * vtable to 0x774eec.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f1cb0(void);

__declspec(naked) void FUN_004f16d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004f1cb0
        mov     dword ptr [esi], 0x774eec
        mov     eax, esi
        pop     esi
        ret     0x14
    }
}
