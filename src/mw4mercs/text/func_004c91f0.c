/*
 * FUN_004c91f0 (193 B) — __cdecl, 1 arg (char*), returns char. Copies
 * three null-terminated strings (repne scasb / rep movsd / rep movsb)
 * into stack buffers and calls function pointer g_007dac68.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char  g_007dac4c;
extern int*  g_007dac68;   /* function pointer */

__declspec(naked) void FUN_004c91f0(void)
{
    __asm {
        mov     al, byte ptr [g_007dac4c]
        sub     esp, 0x420
        test    al, al
        jnz     L_9208
        xor     al, al
        add     esp, 0x420
        ret
    L_9208:
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x42c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [esp + 0x10]
        mov     esi, edi
        mov     edi, edx
        mov     dword ptr [esp + 0xc], 0x41c
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        push    0x0
        mov     dword ptr [esp + 0x14], 0x1
        call    dword ptr [g_007dac68]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x213]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x430]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x314]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x434]
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        pop     edi
        mov     al, 0x1
        pop     esi
        add     esp, 0x420
        ret
    }
}
