/*
 * GetDXVB (73 B) — named export; returns a DXVB pointer from a lookup table.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a508;

__declspec(naked) void __stdcall GetDXVB(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        test    eax, eax
        jz      loc_1048f
        lea     edi, [eax - 0x4]
        jmp     loc_10491
loc_1048f:
        xor     edi, edi
loc_10491:
        mov     edx, dword ptr [g_5e77a508]
        xor     eax, eax
        test    edx, edx
        jle     loc_104b2
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, 0x5e77a4c8
loc_104a6:
        cmp     dword ptr [ecx], esi
        jz      loc_104c1
        inc     eax
        add     ecx, 0x4
        cmp     eax, edx
        jl      loc_104a6
loc_104b2:
        mov     al, byte ptr [edi + 0x24]
        test    al, al
        jz      loc_104c1
        mov     eax, dword ptr [edi + 0xc]
        pop     edi
        pop     esi
        ret     0x8
loc_104c1:
        mov     eax, dword ptr [edi + 0x10]
        pop     edi
        pop     esi
        ret     0x8
    }
}
