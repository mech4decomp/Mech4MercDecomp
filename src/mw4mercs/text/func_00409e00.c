/*
 * FUN_00409e00 (30 B) — __thiscall-style scalar destructor wrapper:
 * calls FUN_004165b0, then conditionally frees via FUN_004084e0 if the
 * "delete flag" bit is set, returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004165b0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00409e00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004165b0
        test    byte ptr [esp+8], 1
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
