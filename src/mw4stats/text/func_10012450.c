/*
 * FUN_10012450 (30 B, __thiscall, RET 0x4) - Scalar-deleting destructor.
 * Calls FUN_10012470 (the destructor body), then frees this via FUN_1000a110
 * if the low bit of param_1 is set. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10012470(void);
extern void __cdecl FUN_1000a110(void);

__declspec(naked) void * __cdecl FUN_10012450(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10012470
        test    byte ptr [esp + 0x8], 0x1
        jz      L_12468
        push    esi
        call    FUN_1000a110
        add     esp, 0x4
    L_12468:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
