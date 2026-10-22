/*
 * FUN_00413050 (36 B) — __thiscall constructor: installs vtable 0x76d220,
 * calls base constructor FUN_00415380, then if the "deleting" flag
 * ([esp+8]&1) is set frees the object via FUN_004084e0. Returns `this`.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00413050(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x76d220
        call    FUN_00415380
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
