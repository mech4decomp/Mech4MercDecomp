/*
 * FUN_10016b40 (30 B) - __thiscall, RET 0x4. Dtor: calls FUN_10016be0,
 * and if (arg & 1) calls FUN_10001d60(this); returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10016be0(void);   /* rel32 call, __thiscall (ECX=this) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call, __cdecl */

__declspec(naked) void FUN_10016b40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10016be0
        test    byte ptr [esp+8], 1
        jz      L2
        push    esi
        call    FUN_10001d60
        add     esp, 4
L2:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
