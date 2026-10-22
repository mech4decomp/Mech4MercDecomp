/*
 * FUN_0040b240 (30 B) — __thiscall destructor-style wrapper. Calls
 * FUN_0040aab0, then if (flags & 1) frees the object via FUN_004084e0.
 * Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040aab0(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0040b240(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0040aab0
        test    byte ptr [esp + 0x8], 0x1
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
