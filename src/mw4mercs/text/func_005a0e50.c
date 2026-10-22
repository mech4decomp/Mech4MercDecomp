/*
 * FUN_005a0e50 (30 B) — Destructor-like function (__thiscall). Calls
 * FUN_005a0e70, then optionally frees this if param & 1.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005a0e70(void);
extern void __cdecl FUN_004084e0(void *ptr);

void __declspec(naked) __cdecl FUN_005a0e50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005a0e70

        test    byte ptr [esp + 0x8], 0x1
        jz      skip_free

        push    esi
        call    FUN_004084e0
        add     esp, 0x4

skip_free:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
