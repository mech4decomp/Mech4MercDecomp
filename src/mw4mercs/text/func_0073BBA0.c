/*
 * data_0073a900.c block (gameplay) -- 307 bytes of small predicate functions
 * comparing a global state value (0x8aaf44) against various constants, plus
 * one -1 check on 0x7b73f8 and a final xor al,al; ret.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b73f8;
extern int g_8aaf44;

__declspec(naked) void FUN_0073BBA0(void)
{
    __asm {
        mov     ecx, dword ptr [g_7b73f8]
        xor     eax, eax
        cmp     ecx, -1
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        ret
        nop
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 2
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 4
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0xa
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0xb
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0xe
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 5
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 1
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 6
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 7
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0xf
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0x10
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0x11
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0x12
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0x13
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0x14
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0x15
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaf44]
        xor     eax, eax
        cmp     ecx, 0x16
        sete    al
        ret
        nop
        xor     al, al
        ret
    }
}
