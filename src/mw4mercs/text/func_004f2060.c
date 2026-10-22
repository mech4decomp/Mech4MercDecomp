/*
 * FUN_004f2060 (90 B) -- MLR/Adept 8-byte key comparison (__thiscall, RET 4,
 * 1 stack param). Compares two {short, short, int} records lexicographically
 * and returns bool (this < param_1). Uses 16-bit compares + setg/sbb idioms.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_004f2060(void)
{
    __asm {
        mov     dx, word ptr [ecx]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ax, word ptr [esi]
        cmp     dx, ax
        jnz     l_a7
        push    edi
        mov     di, word ptr [esi + 0x2]
        cmp     di, word ptr [ecx + 0x2]
        pop     edi
        jnz     l_8d
        mov     edx, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [ecx + 0x4]
        xor     eax, eax
        cmp     ecx, edx
        setg    al
        pop     esi
        ret     4
    l_8d:
        cmp     dx, ax
        jnz     l_a7
        mov     dx, word ptr [ecx + 0x2]
        cmp     word ptr [esi + 0x2], dx
        pop     esi
        sbb     eax, eax
        neg     eax
        and     eax, 0xff
        ret     4
    l_a7:
        xor     ecx, ecx
        cmp     dx, ax
        setg    cl
        pop     esi
        mov     eax, ecx
        and     eax, 0xff
        ret     4
    }
}
