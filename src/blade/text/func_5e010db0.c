/*
 * FUN_5e010db0 (100 B) — release/forward helper on inner objects.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e010db0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jz      loc_10dd9
        cmp     eax, edi
        jnz     loc_10dd9
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x24], 0x0
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0xc
loc_10dd9:
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      loc_10e0a
        test    edi, edi
        jz      loc_10de9
        mov     ecx, dword ptr [edi + 0x18]
        jmp     loc_10deb
loc_10de9:
        xor     ecx, ecx
loc_10deb:
        mov     edx, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x20]
        mov     esi, eax
        test    esi, esi
        jl      loc_10e03
        mov     edx, dword ptr [edi]
        push    edi
        call    dword ptr [edx + 0x8]
loc_10e03:
        mov     eax, esi
        pop     edi
        pop     esi
        ret     0xc
loc_10e0a:
        pop     edi
        mov     eax, 0x80004005
        pop     esi
        ret     0xc
    }
}
