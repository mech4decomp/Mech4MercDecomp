/*
 * FUN_00740860 (231 B) — in-.text data block function (block 0x740860).
 * String cache lookup/insert using globals 0x8aaaf4 / 0x8589cc; calls
 * FUN_006f4230 / FUN_006f3c80 / FUN_007005c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_007005c0(void);

extern int g_008aaaf4;   /* DAT_008aaaf4 */
extern int g_008589cc;   /* DAT_008589cc */

__declspec(naked) void FUN_00740860(void)
{
    __asm {
        cmp     dword ptr [g_008aaaf4], 5
        push    ebp
        push    esi
        push    edi
        je      L093F
        mov     ebp, dword ptr [esp + 0x10]
        test    ebp, ebp
        jne     L088D
        mov     eax, dword ptr [g_008589cc]
        test    eax, eax
        jne     L0930
        pop     edi
        pop     esi
        xor     al, al
        pop     ebp
        ret     8
L088D:
        mov     edx, dword ptr [g_008589cc]
        test    edx, edx
        je      L08F6
        push    ebx
        mov     esi, edx
        mov     eax, ebp
L089C:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jne     L08C0
        test    cl, cl
        je      L08BC
        mov     bl, byte ptr [eax + 1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 1]
        jne     L08C0
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L089C
L08BC:
        xor     eax, eax
        jmp     L08C5
L08C0:
        sbb     eax, eax
        sbb     eax, -1
L08C5:
        test    eax, eax
        pop     ebx
        je      L0930
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        or      ecx, 0xffffffff
        mov     edi, ebp
        repne scasb
        not     ecx
        dec     ecx
        cmp     esi, ecx
        jae     L0911
        push    edx
        call    FUN_006f4230
        mov     dword ptr [g_008589cc], 0
L08F6:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        push    0
        not     ecx
        push    ecx
        call    FUN_006f3c80
        mov     edx, eax
        mov     dword ptr [g_008589cc], edx
L0911:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
L0930:
        call    FUN_007005c0
        mov     dword ptr [g_008aaaf4], 5
L093F:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebp
        ret     8
    }
}
