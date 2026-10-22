/*
 * FUN_1003c5f0 (123 B) - __cdecl. strlen: returns the length of the
 * null-terminated string at arg0, using the 0x7efefeff word-scan trick.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_1003c5f0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, 0x3
        je      L_610
L_5fc:
        mov     al, byte ptr [ecx]
        inc     ecx
        test    al, al
        je      L_643
        test    ecx, 0x3
        jne     L_5fc
        /* __emit: alignment pad `add eax,0` encoded as imm32 (05 00 00 00 00) */
        __emit 0x05
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_610:
        mov     eax, dword ptr [ecx]
        mov     edx, 0x7efefeff
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        add     ecx, 0x4
        test    eax, 0x81010100
        je      L_610
        mov     eax, dword ptr [ecx - 0x4]
        test    al, al
        je      L_661
        test    ah, ah
        je      L_657
        test    eax, 0xff0000
        je      L_64d
        test    eax, 0xff000000
        je      L_643
        jmp     L_610
L_643:
        lea     eax, [ecx - 0x1]
        mov     ecx, dword ptr [esp + 0x4]
        sub     eax, ecx
        ret
L_64d:
        lea     eax, [ecx - 0x2]
        mov     ecx, dword ptr [esp + 0x4]
        sub     eax, ecx
        ret
L_657:
        lea     eax, [ecx - 0x3]
        mov     ecx, dword ptr [esp + 0x4]
        sub     eax, ecx
        ret
L_661:
        lea     eax, [ecx - 0x4]
        mov     ecx, dword ptr [esp + 0x4]
        sub     eax, ecx
        ret
    }
}
