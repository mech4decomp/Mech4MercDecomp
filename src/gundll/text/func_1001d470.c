/*
 * FUN_1001D470 (65 B) - __stdcall, RET 0xC.  Validates a "TLMX" magic
 * (0x584d4c54); returns 0x80070057 on mismatch, else walks a linked list
 * (via +0x18) counting nodes and stores the count into the out-param.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001D470(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        xor     eax, eax
        test    ecx, ecx
        jne     L_d481
        mov     ecx, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 4]
L_d481:
        cmp     dword ptr [ecx], 0x584d4c54
        je      L_d491
        mov     eax, 0x80070057
        ret     0xc
L_d491:
        mov     ecx, dword ptr [ecx + 0x1c]
        xor     edx, edx
        test    ecx, ecx
        je      L_d4a8
        __emit 0x8D  /* __emit: lea ebx,[ebx+0] (8D 9B 00 00 00 00); MSVC6 emits 8D 1B */
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_d4a0:
        mov     ecx, dword ptr [ecx + 0x18]
        inc     edx
        test    ecx, ecx
        jne     L_d4a0
L_d4a8:
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx], edx
        ret     0xc
    }
}
