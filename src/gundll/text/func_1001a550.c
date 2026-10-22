/*
 * FUN_1001a550 (30 B) — __fastcall, RET 0x4.
 * Object destructor: calls FUN_1001a790(this, param_2), then frees this
 * if param_3 & 1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001a790(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001a550(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1001a790
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
