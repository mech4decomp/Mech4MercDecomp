/*
 * FUN_10029130 (30 B) -- __thiscall, RET 0x4. Dtor.
 * Calls base dtor FUN_100291d0; if (param_1 & 1) operator delete(this).
 * Returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100291d0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_10029130(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100291d0
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
