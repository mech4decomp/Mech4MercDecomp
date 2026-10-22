/*
 * FUN_00410890 (50 B) — release a shared buffer: decrements the refcount
 * stored just before the buffer (freeing at 0), optionally frees the owner
 * object when the low bit of the flag is set, and returns the owner.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00410890(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_108ac
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_108ac
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_108ac:
        test    byte ptr [esp+8], 1
        jz      L_108bc
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_108bc:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
