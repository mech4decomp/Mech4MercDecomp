/*
 * FUN_005fbd40 (20 B) — __thiscall. Returns a byte flag from the weapon/mech
 * object at [this+0x418] (offset 0x194), or 0 if the object is null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005fbd40(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x418]
        test    eax, eax
        jz      L_bd51
        mov     al, byte ptr [eax+0x194]
        ret
L_bd51:
        xor     al, al
        ret
    }
}
