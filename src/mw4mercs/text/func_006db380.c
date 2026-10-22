/*
 * FUN_006db380 (236 B) — Pixel blend/scale loop.
 *
 * Reads a 16-bit palette index array, blends RGB bytes against a scale
 * factor, and writes back. Pure register/stack computation, no calls.
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006db380(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx + 0x24]
        mov     ecx, dword ptr [esp + 0x18]
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [edx + 0x10]
        mov     edx, dword ptr [eax + 0x1c]
        sar     ebp, cl
        mov     ecx, dword ptr [eax + 0x20]
        push    esi
        sub     ebx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x14], ecx
        xor     ecx, ecx
        test    ebx, ebx
        mov     dword ptr [esp + 0xc], ebp
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x20], ebx
        jle     loc_6db467
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        xor     esi, esi
loc_6db3c4:
        mov     si, word ptr [edx + ecx*2]
        mov     eax, esi
        and     eax, 0xf
        shl     eax, 4
        test    eax, eax
        jle     loc_6db43e
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
        mov     ebx, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     al, byte ptr [edi + 0x2]
        imul    eax, ebp
        mov     ebp, dword ptr [esp + 0x10]
        add     edx, eax
        sar     edx, 8
        mov     byte ptr [edi + 0x2], dl
        mov     edx, dword ptr [esp + 0x28]
loc_6db43e:
        mov     eax, dword ptr [esp + 0x18]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        jg      loc_6db45a
        mov     eax, ebp
        neg     eax
        lea     edx, [edx + eax*2]
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x18], ebp
loc_6db45a:
        add     edi, 4
        inc     ecx
        cmp     ecx, ebx
        __emit  0x0F  /* jl loc_6db3c4: MSVC6 miscomputes backward rel32 (0x60 vs ref 0x5E) */
        __emit  0x8C
        __emit  0x5E
        __emit  0xFF
        __emit  0xFF
        __emit  0xFF
        pop     edi
loc_6db467:
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
