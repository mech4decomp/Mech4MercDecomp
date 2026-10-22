/*
 * FUN_005fbd30 (16 B) — __thiscall. If the weapon/mech object at [this+0x418]
 * is non-null, tail-jumps to FUN_005a7e40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005a7e40(void);

__declspec(naked) void FUN_005fbd30(void)
{
    __asm {
        mov     ecx, dword ptr [ecx+0x418]
        test    ecx, ecx
        jz      L_bd3f
        jmp     FUN_005a7e40
L_bd3f:
        ret
    }
}
