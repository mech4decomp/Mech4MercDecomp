/*
 * FUN_5e032cb7 (39 B) - copies a NUL-terminated string into the output
 * buffer, bounded by the remaining count in *param_3.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e032cb7(void)
{
    __asm {
        mov     ecx, dword ptr [esp+0xc]
        push    esi
        push    edi
        cmp     dword ptr [ecx], 0
        jz      L2cdb
        mov     eax, dword ptr [esp+0x10]
        mov     esi, dword ptr [esp+0xc]
    L2cca:
        mov     dl, byte ptr [esi]
        test    dl, dl
        jz      L2cdb
        mov     edi, dword ptr [eax]
        mov     byte ptr [edi], dl
        inc     dword ptr [eax]
        inc     esi
        dec     dword ptr [ecx]
        jnz     L2cca
    L2cdb:
        pop     edi
        pop     esi
        ret
    }
}
