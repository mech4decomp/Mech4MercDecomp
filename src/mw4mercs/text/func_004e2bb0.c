/*
 * FUN_004E2BB0 (36 B) — Constructor (__thiscall, RET 4).
 *
 * Sets vtable to 0x773CD0, calls FUN_00500950, then optionally frees
 * via FUN_004084E0 if (flags & 1). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00500950(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __stdcall FUN_004e2bb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x00773CD0
        call    FUN_00500950
        test    byte ptr [esp + 8], 1
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
