/*
 * FUN_5e032d4d (73 B) - emits an integer as decimal digits (base 10) into
 * the output buffer, then reverses the digit run in place.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e032d4d(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp+0x10]
        push    edi
        mov     edi, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [edi]
    L2d5b:
        cmp     dword ptr [esi], 1
        jbe     L2d7e
        mov     eax, dword ptr [ebp+0x8]
        push    0xa
        cdq
        pop     ebx
        idiv    ebx
        mov     eax, dword ptr [ebp+0x8]
        add     dl, 0x30
        mov     byte ptr [ecx], dl
        inc     ecx
        cdq
        idiv    ebx
        dec     dword ptr [esi]
        test    eax, eax
        mov     dword ptr [ebp+0x8], eax
        jg      L2d5b
    L2d7e:
        mov     eax, dword ptr [edi]
        mov     dword ptr [edi], ecx
        dec     ecx
    L2d83:
        mov     bl, byte ptr [eax]
        mov     dl, byte ptr [ecx]
        mov     byte ptr [ecx], bl
        dec     ecx
        mov     byte ptr [eax], dl
        inc     eax
        cmp     eax, ecx
        jc      L2d83
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
