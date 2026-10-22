/*
 * FUN_006db470 (237 B) — Pixel blend/scale loop (variant of FUN_006db380).
 *
 * Reads a 16-bit palette index array, blends RGB bytes against a scale
 * factor, and writes back. Pure register/stack computation, no calls.
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006db470(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx + 0x24]
        mov     ecx, dword ptr [esp + 0x18]
        push    ebx
        mov     ebx, dword ptr [edx + 0x10]
        mov     edx, dword ptr [eax + 0x1c]
        sar     ebx, cl
        mov     ecx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x18]
        push    esi
        sub     eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov     dword ptr [esp + 0x8], ebx
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x20], edx
        jle     loc_6db559
        push    ebp
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        mov     dword ptr [esp + 0x24], eax
        xor     esi, esi
loc_6db4b4:
        mov     si, word ptr [ecx + edx]
        mov     eax, esi
        and     eax, 0xf
        shl     eax, 4
        test    eax, eax
        jle     loc_6db52a
        xor     ebx, ebx
        mov     bl, byte ptr [edi]
        mov     ebp, 0xf0
        sub     ebp, eax
        mov     edx, esi
        and     edx, 0xf0
        imul    edx, eax
        imul    ebx, ebp
        add     edx, ebx
        sar     edx, 8
        mov     byte ptr [edi], dl
        xor     ebx, ebx
        mov     bl, byte ptr [edi + 0x1]
        mov     edx, esi
        shr     edx, 4
        and     edx, 0xf0
        imul    edx, eax
        imul    ebx, ebp
        add     edx, ebx
        sar     edx, 8
        mov     byte ptr [edi + 0x1], dl
        mov     edx, esi
        shr     edx, 8
        and     edx, 0xf0
        imul    edx, eax
        mov     ebx, dword ptr [esp + 0x10]
        xor     eax, eax
        mov     al, byte ptr [edi + 0x2]
        imul    eax, ebp
        add     edx, eax
        sar     edx, 8
        mov     byte ptr [edi + 0x2], dl
        mov     edx, dword ptr [esp + 0x28]
loc_6db52a:
        mov     eax, dword ptr [esp + 0x18]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        jg      loc_6db542
        lea     edx, [edx + ebx*2]
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x18], ebx
loc_6db542:
        mov     eax, dword ptr [esp + 0x24]
        add     edi, 4
        sub     ecx, 2
        dec     eax
        mov     dword ptr [esp + 0x24], eax
        __emit  0x0F  /* jnz loc_6db4b4: MSVC6 miscomputes backward rel32 (0x5F vs ref 0x5D) */
        __emit  0x85
        __emit  0x5D
        __emit  0xFF
        __emit  0xFF
        __emit  0xFF
        pop     edi
        pop     ebp
loc_6db559:
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
