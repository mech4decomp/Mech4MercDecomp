/*
 * FUN_00742380 (67 B) — .text data block (block 0x74232B). Walks a linked
 * list of entries (each [eax+0x10] stride + 0x14) comparing 4 dwords against
 * a fixed pattern at 0x7a2fb0; returns the matching entry's word at +0x14,
 * or 0 if none.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00742380(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        mov     eax, dword ptr [ecx+0x20]
        mov     edx, dword ptr [ecx+0x24]
        push    ebx
        add     edx, eax
        cmp     eax, edx
        push    esi
        push    edi
        jae     L_23b0
    L_2393:
        mov     ecx, 4
        mov     edi, 0x7a2fb0
        mov     esi, eax
        xor     ebx, ebx
        repe cmpsd
        je      L_23b9
        mov     ecx, dword ptr [eax+0x10]
        lea     eax, [eax+ecx+0x14]
        cmp     eax, edx
        jb      L_2393
    L_23b0:
        pop     edi
        pop     esi
        xor     ax, ax
        pop     ebx
        ret     4
    L_23b9:
        mov     ax, word ptr [eax+0x14]
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
