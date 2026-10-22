/*
 * FUN_0065b210 (30 B) — __thiscall scalar-deleting-destructor-style stub:
 * calls base FUN_0065acb0, then if (arg & 1) calls operator delete
 * (FUN_004084e0) on this; returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0065acb0(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_0065b210(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0065acb0
        test    byte ptr [esp+8], 1
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
