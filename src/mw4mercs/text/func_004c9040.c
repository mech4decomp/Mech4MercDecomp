/*
 * FUN_004c9040 (424 B) — __cdecl, no args, returns pointer. Telephony
 * location enumeration: allocates buffers, calls function pointers
 * (g_007dac60/6c/68), malloc/free (g_0076b294/b2d0), and copies
 * null-terminated strings via repne scasb / rep movsd / rep movsb.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char  g_007dac4c;
extern int   g_007dac74;
extern int*  g_007dac60;   /* function pointer */
extern int*  g_007dac6c;   /* function pointer */
extern int*  g_007dac68;   /* function pointer */
extern int*  g_0076b294;   /* malloc */
extern int*  g_0076b2d0;   /* free */

__declspec(naked) void FUN_004c9040(void)
{
    __asm {
        mov     al, byte ptr [g_007dac4c]
        sub     esp, 0x434
        test    al, al
        jnz     L_9058
        xor     eax, eax
        add     esp, 0x434
        ret
    L_9058:
        push    ebp
        push    edi
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        xor     edi, edi
        lea     edx, [esp + 0x24]
        push    edx
        push    edi
        push    edi
        mov     dword ptr [g_007dac74], edi
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x30], 0x108
        call    dword ptr [g_007dac60]
        cmp     dword ptr [esp + 0x8], edi
        jz      L_91db
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    dword ptr [g_0076b294]
        mov     ebp, eax
        add     esp, 0x4
        cmp     ebp, edi
        mov     dword ptr [esp + 0x14], ebp
        jz      L_91db
        push    ebx
        push    esi
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        push    ebp
        push    edi
        push    edi
        mov     dword ptr [ebp], 0x108
        call    dword ptr [g_007dac60]
        mov     eax, dword ptr [esp + 0x10]
        xor     edx, edx
        cmp     eax, edi
        jbe     L_9116
        mov     ebx, dword ptr [esp + 0x448]
        add     ebp, 0x4
    L_90df:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [ebx]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     eax, dword ptr [esp + 0x10]
        inc     edx
        add     ebp, 0x108
        add     ebx, 0x4
        cmp     edx, eax
        jc      L_90df
        mov     ebp, dword ptr [esp + 0x1c]
        xor     edi, edi
    L_9116:
        xor     ebx, ebx
        cmp     eax, edi
        jbe     L_91cf
        add     ebp, 0x4
        jmp     L_9127
    L_9125:
        xor     edi, edi
    L_9127:
        push    edi
        push    edi
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edi
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x30], edi
        call    dword ptr [g_007dac6c]
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, edi
        jz      L_9173
        push    eax
        call    dword ptr [g_0076b294]
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L_9173
        push    edi
        push    edi
        lea     edx, [esp + 0x20]
        push    edx
        push    esi
        push    ebp
        push    edi
        mov     dword ptr [esi], 0x6e8
        call    dword ptr [g_007dac6c]
        push    esi
        call    dword ptr [g_0076b2d0]
        add     esp, 0x4
    L_9173:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [esp + 0x2c]
        mov     esi, edi
        mov     edi, edx
        mov     dword ptr [esp + 0x28], 0x41c
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        push    0x0
        mov     dword ptr [esp + 0x2c], 0x1
        call    dword ptr [g_007dac68]
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        add     ebp, 0x108
        cmp     ebx, eax
        jc      L_9125
        mov     ebp, dword ptr [esp + 0x1c]
    L_91cf:
        push    ebp
        call    dword ptr [g_0076b2d0]
        add     esp, 0x4
        pop     esi
        pop     ebx
    L_91db:
        mov     eax, dword ptr [esp + 0x8]
        pop     edi
        pop     ebp
        add     esp, 0x434
        ret
    }
}
