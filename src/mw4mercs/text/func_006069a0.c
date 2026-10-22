/*
 * FUN_006069a0 (30 B) — __thiscall destructor-style wrapper: calls
 * FUN_00606a20, optionally frees the object (FUN_004084e0) if the
 * low flag bit is set, returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00606a20(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006069a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00606a20
        test    byte ptr [esp+0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
