/*
 * FUN_006a1970 (30 B) — __thiscall destructor wrapper: calls the inner
 * destructor FUN_006a1990, then if (flags & 1) frees the object via
 * operator delete FUN_004084e0. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a1990(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_006a1970(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a1990
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
