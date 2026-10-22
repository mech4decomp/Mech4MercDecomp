/*
 * FUN_0065b1d0 (30 B) - __thiscall destructor. Calls FUN_0065acb0 (vtable
 * reset), and if the first stack arg's bit 0 is set, frees the object via
 * FUN_004084e0. Returns this. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0065acb0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0065b1d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0065acb0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_b1e8
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_b1e8:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
