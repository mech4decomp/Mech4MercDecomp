/*
 * FUN_1001b550 (67 B) - __stdcall (2 args, RET 0x8). COM-style method:
 * checks a magic field at [param_1-4], validates the output buffer via
 * IsBadWritePtr (IAT 0x10021064), then copies 10 dwords from [param_1+0x18].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021064;   /* IAT: IsBadWritePtr */

__declspec(naked) void __cdecl FUN_1001b550(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     eax, dword ptr [esi - 4]
        test    eax, eax
        jnz     L1
        pop     edi
        mov     eax, 0x80040290
        pop     esi
        ret     8
L1:
        mov     edi, dword ptr [esp + 0x10]
        push    0x28
        push    edi
        call    dword ptr [g_10021064]
        test    eax, eax
        jz      L2
        pop     edi
        mov     eax, 0x80070057
        pop     esi
        ret     8
L2:
        mov     esi, dword ptr [esi + 0x18]
        mov     ecx, 0xa
        rep     movsd
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
    }
}
