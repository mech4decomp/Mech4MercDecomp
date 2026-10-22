/*
 * FUN_1000ff60 (30 B) - __thiscall, RET 0x4. Destructor: calls ctor
 * FUN_1000fff0(this); if (param_1 & 1) FUN_10001d60(this); returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1000fff0(void);  /* rel32 call, this in ecx */
extern void __cdecl FUN_10001d60(void);     /* rel32 call */

__declspec(naked) void FUN_1000ff60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1000fff0
        test    byte ptr [esp + 8], 1
        jz      L_78
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_78:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
