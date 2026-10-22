/*
 * FUN_004CCD00 (214 B) — in-.text data block function (block 0x4CCCEE).
 * Copies a buffer via FUN_004cdf50 / FUN_004cdf10, uses rep movsd/movsb.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004cdf50(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004cdf10(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004CCD00(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [ebp]
        push    esi
        push    edi
        push    eax
        mov     dword ptr [esp + 0x14], ecx
        call    FUN_004cdf50
        mov     ebx, eax
        mov     eax, dword ptr [ebx + 0x3c]
        test    eax, eax
        jne     LCD49
        mov     ebp, dword ptr [ebp + 0x15]
        mov     eax, dword ptr [ebp + 4]
        push    eax
        mov     dword ptr [ebx + 0x44], eax
        call    FUN_004084d0
        mov     cl, byte ptr [ebp]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ebx + 0x3c], eax
        mov     dword ptr [ebx + 0x40], eax
        mov     byte ptr [ebx + 0x38], cl
        pop     ebx
        add     esp, 0x20
        ret     8
LCD49:
        mov     edi, dword ptr [ebx + 0x40]
        mov     esi, dword ptr [ebp + 0x15]
        xor     eax, eax
        mov     ax, word ptr [ebp + 0x12]
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [ebx + 0x44]
        mov     edx, dword ptr [ebx + 0x40]
        sub     esi, eax
        mov     ecx, esi
        add     edx, eax
        test    ecx, ecx
        mov     dword ptr [ebx + 0x44], esi
        mov     dword ptr [ebx + 0x40], edx
        jne     LCDCC
        mov     al, byte ptr [ebx + 0x38]
        mov     ecx, 6
        mov     esi, ebp
        lea     edi, [esp + 0x14]
        rep movsd
        movsb
        mov     esi, dword ptr [ebx + 0x3c]
        mov     byte ptr [esp + 0x28], al
        mov     dword ptr [esp + 0x29], esi
        mov     ecx, dword ptr [esp + 0x28]
        and     ecx, 0xff
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_004cdf10
        mov     ecx, dword ptr [esp + 0x29]
        mov     edx, dword ptr [eax]
        push    ecx
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xc]
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x3c], 0
LCDCC:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     8
    }
}
