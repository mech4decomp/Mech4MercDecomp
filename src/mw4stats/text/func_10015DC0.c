/*
 * FUN_10015DC0 (67 B) - __stdcall. COM-style accessor. Returns
 * 0x80040290 if the object's refcount (at -4) is zero, validates the
 * out-param via IsBadWritePtr (0x80070057 on failure), then copies
 * 7 dwords from +0x18 into the out-param.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021064;   /* IAT: IsBadWritePtr */

__declspec(naked) void __cdecl FUN_10015DC0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     eax, dword ptr [esi - 4]
        test    eax, eax
        jnz     cont1
        pop     edi
        mov     eax, 0x80040290
        pop     esi
        ret     8
cont1:
        mov     edi, dword ptr [esp + 0x10]
        push    0x1c
        push    edi
        call    dword ptr [g_10021064]
        test    eax, eax
        jz      cont2
        pop     edi
        mov     eax, 0x80070057
        pop     esi
        ret     8
cont2:
        mov     esi, dword ptr [esi + 0x18]
        mov     ecx, 7
        rep     movsd
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
    }
}
