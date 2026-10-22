/*
 * FUN_10019fc0 (30 B) — __thiscall, RET 0x4.
 * Object destructor: calls FUN_1001a150(this), then frees this if
 * param_1 & 1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001a150(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_10019fc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1001a150
        test    byte ptr [esp + 0x8], 0x1
        jz      done
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    done:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
