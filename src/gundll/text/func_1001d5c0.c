/*
 * FUN_1001D5C0 (87 B) - __stdcall, RET 0x14.  Validates a "TLMX" magic
 * (0x584d4c54); returns 0x80070057 on mismatch, else bounds-checks an
 * index against +0xc (0xc1121c03 if out of range) and stores the +0x10
 * and +0x14 array entries into two out-params.  (Transcribed from
 * reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001D5C0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        xor     eax, eax
        test    ecx, ecx
        jne     L_d5d1
        mov     ecx, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 4]
L_d5d1:
        cmp     dword ptr [ecx], 0x584d4c54
        je      L_d5e2
        mov     ecx, dword ptr [esp + 8]
        mov     eax, 0x80070057
L_d5e2:
        test    eax, eax
        push    esi
        jl      L_d613
        mov     edx, dword ptr [esp + 0x10]
        cmp     edx, dword ptr [ecx + 0xc]
        jb      L_d5f9
        mov     eax, 0xc1121c03
        pop     esi
        ret     0x14
L_d5f9:
        mov     esi, dword ptr [ecx + 0x10]
        mov     esi, dword ptr [esi + edx*4]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     dword ptr [edi], esi
        mov     ecx, dword ptr [ecx + 0x14]
        mov     edx, dword ptr [ecx + edx*4]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx], edx
        pop     edi
L_d613:
        pop     esi
        ret     0x14
    }
}
