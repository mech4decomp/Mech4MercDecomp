/*
 * FUN_1001a2a0 (30 B) — __thiscall, RET 0x4.
 * Object destructor: calls FUN_1001a410(this), then frees this if
 * param_1 & 1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001a410(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_1001a2a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1001a410
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
