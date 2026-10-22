/*
 * FUN_100130f0 (30 B) - __thiscall, RET 0x4. Dtor: calls FUN_10013230;
 * if (param_1 & 1) calls FUN_10001d60(this); returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10013230(void);   /* rel32 call, __thiscall (ECX=this) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call, __cdecl */

__declspec(naked) void FUN_100130f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10013230
        test    byte ptr [esp+8], 0x1
        jz      skip
        push    esi
        call    FUN_10001d60
        add     esp, 4
skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
