/*
 * FUN_1000fb50 (30 B) - __thiscall, RET 0x4. Destructor: calls ctor
 * FUN_1000fc50(this); if (param_1 & 1) FUN_10001d60(this); returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1000fc50(void);  /* rel32 call, this in ecx */
extern void __cdecl FUN_10001d60(void);     /* rel32 call */

__declspec(naked) void FUN_1000fb50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1000fc50
        test    byte ptr [esp + 8], 1
        jz      L_68
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_68:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
