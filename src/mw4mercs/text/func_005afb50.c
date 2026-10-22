/*
 * FUN_005afb50 (30 B) — __thiscall destructor, RET 4.
 *
 * Saves this (ECX) in ESI, calls FUN_004dd1c0 (thiscall), then if the
 * flag param (byte at [esp+8]) has bit 0 set, frees this via FUN_004084e0.
 * Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd1c0(void *this);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005afb50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 8], 1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
