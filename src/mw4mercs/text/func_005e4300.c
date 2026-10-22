/*
 * FUN_005E4300 (86 B) - Missile parameter lookup (__thiscall, RET 4).
 *
 * Walks a linked list of config objects (via +0xC4). For each, if the
 * type flags (bit 0x13 of +0x10) are clear and either +0x128 or +0x124
 * is non-null, copies three vectors from the found object into this
 * (+0x278/+0x27C/+0x280) and returns the object; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005e4300(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      l_ret0
    l_loop:
        mov     edx, dword ptr [eax + 0x10]
        shr     edx, 0x13
        test    dl, 0x1
        jnz     l_advance
        mov     edx, dword ptr [eax + 0x128]
        test    edx, edx
        jnz     l_found
        mov     edx, dword ptr [eax + 0x124]
        test    edx, edx
        jnz     l_found
    l_advance:
        mov     eax, dword ptr [eax + 0xc4]
        test    eax, eax
        jnz     l_loop
    l_ret0:
        xor     eax, eax
        ret     4
    l_found:
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        mov     dword ptr [ecx + 0x278], esi
        mov     esi, dword ptr [edx + 0x2c]
        mov     edx, dword ptr [edx + 0x3c]
        mov     dword ptr [ecx + 0x27c], esi
        mov     dword ptr [ecx + 0x280], edx
        pop     esi
        ret     4
    }
}
