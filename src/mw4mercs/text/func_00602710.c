/*
 * FUN_00602710 (36 B) — __thiscall constructor.
 *
 * Sets vtable 0x78b3d4, calls FUN_00415380(), and if (arg & 1) calls
 * FUN_004084e0(this). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00602710(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x78b3d4
        call    FUN_00415380
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
