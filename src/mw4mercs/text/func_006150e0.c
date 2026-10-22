/*
 * FUN_006150e0 (30 B) — __thiscall destructor: calls base destructor
 * FUN_00615c10, then if the "delete flag" (param at [esp+8]) is set,
 * frees the object via operator delete FUN_004084e0. Returns the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00615c10(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_006150e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00615c10
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
