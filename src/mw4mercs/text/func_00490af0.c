/*
 * FUN_00490af0 (188 B) — MLR texture blend/lerp (__cdecl). For each pixel,
 * blends source with a palette/overlay using the alpha byte, or copies
 * verbatim when alpha is zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00490af0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x30]
        imul    edx, dword ptr [esp + 0x34]
        test    edx, edx
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0x30]
        jle     L_done
        push    ebx
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x3c], edx
    L_outer:
        xor     edx, edx
        mov     dl, byte ptr [esi + 3]
        test    edx, edx
        jle     L_copy
        xor     ebx, ebx
        mov     bl, byte ptr [ecx]
        mov     ebp, 0xff
        sub     ebp, edx
        mov     edi, ebx
        xor     ebx, ebx
        imul    edi, ebp
        mov     bl, byte ptr [esi]
        imul    ebx, edx
        add     edi, ebx
        mov     ebx, edi
        sar     ebx, 8
        mov     byte ptr [eax], bl
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + 1]
        inc     esi
        inc     ecx
        inc     eax
        mov     edi, ebx
        xor     ebx, ebx
        imul    edi, ebp
        mov     bl, byte ptr [esi]
        imul    ebx, edx
        add     edi, ebx
        mov     ebx, edi
        sar     ebx, 8
        mov     byte ptr [eax], bl
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + 1]
        inc     esi
        inc     ecx
        inc     eax
        mov     edi, ebx
        xor     ebx, ebx
        imul    edi, ebp
        mov     bl, byte ptr [esi]
        imul    ebx, edx
        add     edi, ebx
        mov     edx, edi
        sar     edx, 8
        inc     ecx
        mov     byte ptr [eax], dl
        inc     eax
        add     esi, 2
        jmp     L_next
    L_copy:
        mov     dl, byte ptr [ecx]
        mov     byte ptr [eax], dl
        mov     dl, byte ptr [ecx + 1]
        inc     eax
        inc     ecx
        mov     byte ptr [eax], dl
        mov     dl, byte ptr [ecx + 1]
        inc     eax
        inc     ecx
        mov     byte ptr [eax], dl
        inc     eax
        inc     ecx
        add     esi, 4
    L_next:
        mov     edx, dword ptr [esp + 0x3c]
        inc     eax
        inc     ecx
        dec     edx
        mov     dword ptr [esp + 0x3c], edx
        jnz     L_outer
        pop     edi
        pop     ebp
        pop     ebx
    L_done:
        pop     esi
        ret
    }
}
