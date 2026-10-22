/*
 * FUN_1001D4C0 (87 B) - __stdcall, RET 0x10.  Validates a "TLMX" magic
 * (0x584d4c54); returns 0x80070057 on mismatch, else walks a linked list
 * (via +0x18) up to a count, returning 0xc1121c03 if not found, else
 * storing the found node into the out-param.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001D4C0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        xor     eax, eax
        test    ecx, ecx
        jne     L_d4d1
        mov     ecx, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 4]
L_d4d1:
        cmp     dword ptr [ecx], 0x584d4c54
        je      L_d4e2
        mov     ecx, dword ptr [esp + 8]
        mov     eax, 0x80070057
L_d4e2:
        test    eax, eax
        push    esi
        jl      L_d513
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ecx + 0x1c]
        xor     edx, edx
        test    esi, esi
        jbe     L_d500
L_d4f4:
        mov     ecx, dword ptr [ecx + 0x18]
        test    ecx, ecx
        je      L_d504
        inc     edx
        cmp     edx, esi
        jb      L_d4f4
L_d500:
        test    ecx, ecx
        jne     L_d50d
L_d504:
        mov     eax, 0xc1121c03
        pop     esi
        ret     0x10
L_d50d:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edx], ecx
L_d513:
        pop     esi
        ret     0x10
    }
}
