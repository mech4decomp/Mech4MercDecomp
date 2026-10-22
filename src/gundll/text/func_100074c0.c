/*
 * FUN_100074c0 (69 B) - __stdcall, RET 0xc. Initializes a crypto object:
 * fails if already initialized, stores a flag byte, allocates a buffer
 * via FUN_10001d90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d90(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100074c0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 4]
        push    edi
        xor     edi, edi
        test    eax, eax
        jz      L_d9
        pop     edi
        mov     eax, 0xc1120009
        pop     esi
        ret     0xc
L_d9:
        mov     ecx, dword ptr [esp + 0x10]
        mov     al, byte ptr [esp + 0x14]
        push    ecx
        mov     byte ptr [esi + 1], al
        call    FUN_10001d90
        test    eax, eax
        mov     dword ptr [esi + 4], eax
        jnz     L_fb
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0xc
L_fb:
        mov     eax, edi
        pop     edi
        mov     byte ptr [esi], 1
        pop     esi
        ret     0xc
    }
}
