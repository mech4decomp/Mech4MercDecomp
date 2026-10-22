/*
 * FUN_1002f5d0 (80 B) - __thiscall. Dispatches through virtual method
 * tables based on flags in [ESI] and a count at [ESI+0xc].
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_1002f5d0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        push    edi
        mov     edi, ecx
        jz      L_f611
        mov     ecx, dword ptr [esi]
        test    cl, 2
        jz      L_f5fb
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov     eax, dword ptr [edi + 8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x14]
        pop     edi
        pop     esi
        ret     4
L_f5fb:
        test    cl, 4
        jnz     L_f611
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        jbe     L_f611
        mov     ecx, dword ptr [edi + 8]
        mov     edx, dword ptr [ecx]
        push    eax
        push    ecx
        call    dword ptr [edx + 0x14]
L_f611:
        mov     eax, dword ptr [edi + 8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x14]
        pop     edi
        pop     esi
        ret     4
    }
}
