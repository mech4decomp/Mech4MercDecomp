/*
 * FUN_10042c38 (61 B) — __cdecl.
 * Linear search over a table of 0xc-byte entries (count = DAT_10051e64).
 */

extern unsigned int g_10051e64;

__declspec(naked) void FUN_10042c38(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_10051e64]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        cmp     dword ptr [edx + 0x4], esi
        push    edi
        mov     eax, edx
        jz      L10042c61
    L10042c4f:
        lea     edi, [ecx + ecx*2]
        lea     edi, [edx + edi*4]
    L10042c55:
        add     eax, 0xc
        cmp     eax, edi
        jnc     L10042c61
        cmp     dword ptr [eax + 0x4], esi
        jnz     L10042c55
    L10042c61:
        lea     ecx, [ecx + ecx*2]
        lea     ecx, [edx + ecx*4]
        cmp     eax, ecx
        jnc     L10042c70
        cmp     dword ptr [eax + 0x4], esi
        jz      L10042c72
    L10042c70:
        xor     eax, eax
    L10042c72:
        pop     edi
        pop     esi
        ret
    }
}
