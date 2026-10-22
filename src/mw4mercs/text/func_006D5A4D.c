/*
 * FUN_006D5A4D (214 B) — in-.text data block function (block 0x6D5A4D).
 * Spatial-hash style lookup: computes an index from coordinates, walks a
 * candidate list, collects matches into an output array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006D5A4D(void)
{
    __asm {
        nop
        nop
        nop
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     edx, ecx
        xor     ecx, ecx
        mov     cx, word ptr [edx + 4]
        and     ebp, 0xffff
        and     ebx, 0xffff
        push    edi
        mov     esi, ebp
        shr     esi, cl
        mov     edi, ebx
        shr     edi, cl
        mov     ecx, dword ptr [edx + 0xc]
        mov     eax, ecx
        imul    eax, esi
        lea     esi, [eax + edi]
        mov     eax, dword ptr [edx + 8]
        imul    eax, ecx
        cmp     eax, esi
        mov     dword ptr [esp + 0x10], 0
        jg      L5AA0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     8
L5AA0:
        mov     ecx, dword ptr [edx + 0x124]
        mov     edi, dword ptr [ecx + esi*8]
        mov     eax, dword ptr [ecx + esi*8 + 4]
        lea     esi, [ecx + esi*8]
        cmp     dword ptr [edi], 0
        jne     L5ABF
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     8
L5ABF:
        test    eax, eax
        jle     L5B17
        add     edx, 0x14
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x18], eax
L5ACE:
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [ecx + 8]
        cmp     edx, ebx
        jg      L5B09
        mov     esi, dword ptr [ecx + 4]
        mov     eax, dword ptr [esi + 4]
        add     eax, edx
        cmp     eax, ebx
        jl      L5B09
        mov     edx, dword ptr [ecx + 0xc]
        cmp     edx, ebp
        jg      L5B09
        mov     eax, dword ptr [esi + 8]
        add     eax, edx
        cmp     eax, ebp
        jl      L5B09
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x10]
        inc     edx
        mov     dword ptr [eax], ecx
        add     eax, 4
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x1c], eax
L5B09:
        mov     eax, dword ptr [esp + 0x18]
        add     edi, 4
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        jne     L5ACE
L5B17:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }
}
