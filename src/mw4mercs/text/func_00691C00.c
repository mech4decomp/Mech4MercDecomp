/*
 * FUN_00691C00 (43 B true extent; 248 B slice incl. 3 adjacent fns) —
 * in-.text data block function (block 0x691BF5). Copies an array of
 * 8-byte elements via rep movsd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00691C00(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 8]
        sub     edx, esi
        sar     edx, 3
        test    edx, edx
        jle     L1C29
        mov     ecx, edx
        push    edi
        and     ecx, 0x1fffffff
        mov     edi, eax
        shl     ecx, 1
        rep movsd
        lea     eax, [eax + edx*8]
        pop     edi
L1C29:
        pop     esi
        ret
    }
}
