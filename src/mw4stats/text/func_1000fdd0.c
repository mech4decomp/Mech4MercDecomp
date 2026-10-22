/*
 * FUN_1000fdd0 (78 B) - __stdcall. Byte-swaps a big-endian byte buffer into a
 * little-endian dword array (inverse of FUN_1000fd80).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_1000fdd0(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        test    ebp, ebp
        jbe     L2
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, 0xfffffffe
        lea     eax, [ecx + 0x2]
        sub     edi, ecx
L1:
        xor     ecx, ecx
        xor     edx, edx
        mov     ch, byte ptr [eax + 0x1]
        mov     dl, byte ptr [eax + -0x1]
        mov     cl, byte ptr [eax]
        add     eax, 0x4
        shl     ecx, 0x8
        or      ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + -0x6]
        add     esi, 0x4
        shl     ecx, 0x8
        or      ecx, edx
        mov     dword ptr [esi + -0x4], ecx
        lea     ecx, [edi + eax*1]
        cmp     ecx, ebp
        jc      L1
        pop     edi
        pop     esi
L2:
        pop     ebp
        ret     0xc
    }
}
