/*
 * FUN_0070eda0 (74 B) — __stdcall, RET 0xC (three stack params).
 *
 * Byte-swaps a run of dwords from param_2 into the buffer at
 * param_1+1, writing each dword little-endian (LSB first), for
 * param_3 iterations.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0070eda0(int param_1, void *param_2,
                                              int param_3)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        test    ebp, ebp
        jbe     short loc_70ede6
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        or      edi, 0xffffffff
        lea     eax, [ecx + 0x1]
        sub     edi, ecx
loc_70edbb:
        mov     cl, byte ptr [esi]
        mov     byte ptr [eax - 1], cl
        mov     ecx, dword ptr [esi]
        mov     edx, ecx
        shr     edx, 0x8
        mov     byte ptr [eax], dl
        mov     edx, ecx
        shr     edx, 0x10
        shr     ecx, 0x18
        mov     byte ptr [eax + 0x1], dl
        mov     byte ptr [eax + 0x2], cl
        add     eax, 0x4
        lea     ecx, [edi + eax]
        add     esi, 0x4
        cmp     ecx, ebp
        jc      short loc_70edbb
        pop     edi
        pop     esi
loc_70ede6:
        pop     ebp
        ret     0xc
    }
}
