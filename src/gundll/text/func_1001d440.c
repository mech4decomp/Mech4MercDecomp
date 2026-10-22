/*
 * FUN_1001D440 (45 B) - __stdcall, RET 0xC.  Validates a "TLMX" magic
 * (0x584d4c54) at a structure; returns 0x80070057 on mismatch, else stores
 * the +8 field into the out-param.  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001D440(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        xor     eax, eax
        test    ecx, ecx
        jne     L_d451
        mov     ecx, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 4]
L_d451:
        cmp     dword ptr [ecx], 0x584d4c54
        je      L_d461
        mov     eax, 0x80070057
        ret     0xc
L_d461:
        mov     edx, dword ptr [ecx + 8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx], edx
        ret     0xc
    }
}
