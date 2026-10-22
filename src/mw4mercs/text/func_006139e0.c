/*
 * FUN_006139e0 (30 B) — __thiscall destructor: calls base destructor
 * FUN_00613d80, then if the "delete flag" (param at [esp+8]) is set,
 * frees the object via operator delete FUN_004084e0. Returns the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00613d80(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_006139e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00613d80
        test    byte ptr [esp+0x8], 0x1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
