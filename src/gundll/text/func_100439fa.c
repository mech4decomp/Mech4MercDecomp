/*
 * FUN_100439fa (92 B) — __cdecl, RET.
 * Signed integer -> hex string conversion (with optional '-' sign).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_100439fa(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp + 0x14], 0
        mov     ecx, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        push    edi
        jz      L14
        mov     esi, dword ptr [ebp + 0x8]
        mov     byte ptr [ecx], 0x2d
        inc     ecx
        neg     esi
        jmp     L17
    L14:
        mov     esi, dword ptr [ebp + 0x8]
    L17:
        mov     edi, ecx
    L19:
        mov     eax, esi
        xor     edx, edx
        div     dword ptr [ebp + 0x10]
        mov     eax, esi
        mov     ebx, edx
        xor     edx, edx
        div     dword ptr [ebp + 0x10]
        cmp     ebx, 9
        mov     esi, eax
        jbe     L35
        add     bl, 0x57
        jmp     L38
    L35:
        add     bl, 0x30
    L38:
        mov     byte ptr [ecx], bl
        inc     ecx
        test    esi, esi
        ja      L19
        and     byte ptr [ecx], 0
        dec     ecx
    L43:
        mov     dl, byte ptr [edi]
        mov     al, byte ptr [ecx]
        mov     byte ptr [ecx], dl
        mov     byte ptr [edi], al
        dec     ecx
        inc     edi
        cmp     edi, ecx
        jb      L43
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
