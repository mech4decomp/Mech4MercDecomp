/*
 * FUN_10014180 (67 B, __stdcall, 2 params) - Copies a 0x38-byte block
 * (14 dwords) from [esi+0x18] to the output buffer. Returns an HRESULT
 * (0x80040290 if the source is null, 0x80070057 on alloc failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021064;   /* IAT: allocator */

__declspec(naked) void __cdecl FUN_10014180(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     eax, dword ptr [esi - 4]
        test    eax, eax
        jnz     L_14197
        pop     edi
        mov     eax, 0x80040290
        pop     esi
        ret     8
    L_14197:
        mov     edi, dword ptr [esp + 0x10]
        push    0x38
        push    edi
        call    dword ptr [g_10021064]
        test    eax, eax
        jz      L_141b2
        pop     edi
        mov     eax, 0x80070057
        pop     esi
        ret     8
    L_141b2:
        mov     esi, dword ptr [esi + 0x18]
        mov     ecx, 0xe
        rep movsd
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
    }
}
