/*
 * FUN_00409dd0 (36 B) — __thiscall destructor. Sets vtable 0x76ce04,
 * calls FUN_00416320, frees the object via FUN_004084e0 if the flag
 * bit 0 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void* FUN_00409dd0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x76ce04
        call    FUN_00416320
        test    byte ptr [esp+8], 1
        jz      L_409DEE
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_409DEE:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
