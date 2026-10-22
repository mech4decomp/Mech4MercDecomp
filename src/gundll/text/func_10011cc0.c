/*
 * FUN_10011cc0 (30 B) - __thiscall, RET 0x4. Destructor: calls FUN_10011d60(this);
 * if (param_1 & 1) FUN_10001d60(this); returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10011d60(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_10011cc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10011d60
        test    byte ptr [esp + 8], 1
        jz      L_done
        push    esi
        call    FUN_10001d60
        add     esp, 4
    L_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
