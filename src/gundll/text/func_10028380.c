/*
 * FUN_10028380 (30 B) - __thiscall, RET 0x4. Dtor: calls base ctor
 * FUN_10028420, then frees via FUN_10001d60 if flag bit 0 set.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10028420(void);   /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_10028380(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10028420
        test    byte ptr [esp + 8], 1
        jz      L_e8
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_e8:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
