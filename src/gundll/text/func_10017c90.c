/*
 * FUN_10017c90 (30 B) - __thiscall dtor. Calls base dtor FUN_10017d30,
 * then frees this if param_1 & 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10017d30(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_10017c90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10017d30
        test    byte ptr [esp + 0x8], 0x1
        jz      done
        push    esi
        call    FUN_10001d60
        add     esp, 4
    done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
