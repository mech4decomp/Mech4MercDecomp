/*
 * FUN_100434e1 (39 B) - __cdecl. Copies chars from *param_1 to **param_2
 * while *param_3 count remains and source non-empty.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_100434e1(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        cmp     dword ptr [ecx], 0
        jz      L_505
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0xc]
L_4f4:
        mov     dl, byte ptr [esi]
        test    dl, dl
        jz      L_505
        mov     edi, dword ptr [eax]
        mov     byte ptr [edi], dl
        inc     dword ptr [eax]
        inc     esi
        dec     dword ptr [ecx]
        jnz     L_4f4
L_505:
        pop     edi
        pop     esi
        ret
    }
}
