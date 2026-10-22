/*
 * FUN_10031ac0 (34 B) — __thiscall.
 * Destructor: calls FUN_10031af0(this); if (param_1 & 1) FUN_10001d60(this-4);
 * returns this-4.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10031af0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_10031ac0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10031af0
        test    byte ptr [esp + 0x8], 0x1
        lea     eax, [esi + -0x4]
        jz      done
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        lea     eax, [esi + -0x4]
    done:
        pop     esi
        ret     0x4
    }
}
