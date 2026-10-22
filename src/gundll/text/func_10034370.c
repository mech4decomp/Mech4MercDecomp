/*
 * FUN_10034370 (107 B) — __stdcall, RET 0xc (3 params).
 * Iterate a table; per entry call helper or virtual method.
 */

extern void __cdecl FUN_10033230(void);

__declspec(naked) void __stdcall FUN_10034370(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x8]
        push    edi
        xor     edi, edi
        test    eax, eax
        jbe     L6
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        xor     ecx, ecx
        nop
        __emit 0x8D   /* __emit: lea esp,[esp] zero-disp form; MSVC6 drops the 00 disp byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L5:
        mov     eax, dword ptr [esi + 0x4]
        add     eax, ecx
        cmp     word ptr [eax], 0x3e7
        push    ebx
        ja      L4
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 0x10]
        push    ecx
        push    edx
        push    eax
        call    FUN_10033230
        jmp     L3
    L4:
        mov     ecx, dword ptr [ebp]
        xor     edx, edx
        mov     dx, word ptr [esi + 0x8]
        sub     dx, di
        push    edx
        mov     edx, dword ptr [esi + 0xc]
        push    edx
        mov     edx, dword ptr [esi + 0x10]
        push    edx
        push    eax
        push    ebp
        call    dword ptr [ecx]
    L3:
        add     edi, eax
        mov     eax, dword ptr [esi + 0x8]
        xor     ecx, ecx
        mov     cx, di
        cmp     ecx, eax
        jc      L5
        pop     ebp
        pop     ebx
    L6:
        pop     edi
        pop     esi
        ret     0xc
    }
}
