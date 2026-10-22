/*
 * FUN_100194a0 (67 B) - __stdcall. Validates a magic field at arg1-4,
 * checks arg2 is writable (IsBadWritePtr via 0x10021064), then copies
 * 5 dwords from arg1+0x18 into arg2.
 *
 * __stdcall (2 args, RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long *g_10021064;

__declspec(naked) void __cdecl FUN_100194a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     eax, dword ptr [esi - 4]
        test    eax, eax
        jnz     L_b7
        pop     edi
        mov     eax, 0x80040290
        pop     esi
        ret     8
L_b7:
        mov     edi, dword ptr [esp + 0x10]
        push    0x14
        push    edi
        call    dword ptr [g_10021064]
        test    eax, eax
        jz      L_d2
        pop     edi
        mov     eax, 0x80070057
        pop     esi
        ret     8
L_d2:
        mov     esi, dword ptr [esi + 0x18]
        mov     ecx, 5
        rep     movsd
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
    }
}
