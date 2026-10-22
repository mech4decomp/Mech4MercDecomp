/*
 * FUN_10005d70 (30 B) - __thiscall, RET 0x4.
 * Calls FUN_10004d90 (thiscall) on this; if (param_1 & 1) frees this via
 * FUN_10001d60. Returns this.
 *
 * __thiscall (this in ECX).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10004d90(void);   /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call, 1 arg */

__declspec(naked) void FUN_10005d70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10004d90
        test    byte ptr [esp + 0x8], 0x1
        jz      L_5d88
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_5d88:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
