/*
 * FUN_1001c700 (30 B) - __thiscall, RET 0x4. Ctor/dtor pair: calls base
 * ctor FUN_1001c750, then if param_1&1 frees via FUN_10001d60; returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c750(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_1001c700(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1001c750
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
