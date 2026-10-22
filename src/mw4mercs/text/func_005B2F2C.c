/*
 * FUN_005B2F2C (246 B) — in-.text data block function (block 0x5B2F1C).
 * FPU-heavy state update using float 0x80daa0; calls FUN_005b2bb0 /
 * FUN_006100d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005b2bb0(void);
extern void __cdecl FUN_006100d0(void);

extern float g_0080daa0;   /* float @ 0x80daa0 */

__declspec(naked) void FUN_005B2F2C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x6d1]
        test    al, al
        push    edi
        mov     byte ptr [esi + 0x6e0], 0
        jne     L3018
        mov     al, byte ptr [esi + 0x6d0]
        test    al, al
        jne     L3018
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        call    FUN_005b2bb0
        test    al, al
        je      L3018
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x1c4]
        mov     ecx, dword ptr [esi + 0x35c]
        mov     eax, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        push    0
        mov     eax, edx
        push    eax
        mov     eax, dword ptr [edi + 8]
        mov     dword ptr [esp + 0x14], edx
        lea     edx, [esp + 0x20]
        push    edx
        push    ecx
        mov     ecx, dword ptr [edi]
        push    eax
        push    ecx
        call    FUN_006100d0
        fadd    dword ptr [g_0080daa0]
        mov     eax, dword ptr [edi + 4]
        mov     edx, dword ptr [edi]
        fcom    dword ptr [edi + 4]
        mov     ecx, dword ptr [edi + 8]
        mov     dword ptr [esi + 0x6d8], eax
        add     esp, 0x18
        mov     dword ptr [esi + 0x6d4], edx
        fnstsw  ax
        mov     dword ptr [esi + 0x6dc], ecx
        test    ah, 0x41
        jne     L2FDD
        fstp    dword ptr [esi + 0x6d8]
        jmp     L2FDF
L2FDD:
        fstp    st(0)
L2FDF:
        mov     edx, dword ptr [g_0080daa0]
        mov     al, 1
        mov     byte ptr [esi + 0x6d0], al
        mov     byte ptr [esi + 0x6d1], 0
        mov     dword ptr [esi + 0x3b8], 0x3f800000
        mov     esi, dword ptr [esi + 0x6a4]
        mov     byte ptr [esi + 0x548], al
        pop     edi
        mov     dword ptr [esi + 0x544], edx
        pop     esi
        add     esp, 0xc
        ret     4
L3018:
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
