/*
 * FUN_00624830 (30 B) — destructor. Calls base destructor
 * FUN_00416c60, then frees this if (flags & 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00624830(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416c60
        test    byte ptr [esp + 0x8], 0x1
        jz      L_848
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_848:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
