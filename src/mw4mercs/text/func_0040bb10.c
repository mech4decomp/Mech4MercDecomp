/*
 * FUN_0040bb10 (30 B) — __thiscall scalar-deleting-destructor-style wrapper:
 * calls base dtor FUN_0040b440, then if (flags & 1) calls operator delete
 * FUN_004084e0(this), returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0040b440(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_0040bb10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0040b440
        test    byte ptr [esp+8], 1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
