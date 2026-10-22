/*
 * FUN_10043577 (73 B) — __cdecl.
 * Converts param_1 to decimal digits into the buffer *param_2 (up to *param_3
 * chars), then reverses the written digits in place.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10043577(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [edi]
    loop1:
        cmp     dword ptr [esi], 0x1
        jbe     done
        mov     eax, dword ptr [ebp + 0x8]
        push    0xa
        cdq
        pop     ebx
        idiv    ebx
        mov     eax, dword ptr [ebp + 0x8]
        add     dl, 0x30
        mov     byte ptr [ecx], dl
        inc     ecx
        cdq
        idiv    ebx
        dec     dword ptr [esi]
        test    eax, eax
        mov     dword ptr [ebp + 0x8], eax
        jg      loop1
    done:
        mov     eax, dword ptr [edi]
        mov     dword ptr [edi], ecx
        dec     ecx
    loop2:
        mov     bl, byte ptr [eax]
        mov     dl, byte ptr [ecx]
        mov     byte ptr [ecx], bl
        dec     ecx
        mov     byte ptr [eax], dl
        inc     eax
        cmp     eax, ecx
        jc      loop2
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
