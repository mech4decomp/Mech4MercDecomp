/*
 * FUN_006cdb30 (516 B) — Preprocessor-style directive scanner (#fdef/#fndef/
 * #define tokenizer) that copies a token stream into an output buffer.
 *
 * __cdecl, no args, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006cda10(void);
extern int  __cdecl FUN_006cd750(void *p);

extern int  g_83f5e8;   /* dword flag at 0x0083f5e8 */
extern char g_83f1e8;   /* byte array at 0x0083f1e8 */
extern char g_83f1e9;   /* byte at 0x0083f1e9 (g_83f1e8+1) */
extern char g_83e9e0;   /* byte array at 0x0083e9e0 */
extern char g_79e5e4;   /* byte array at 0x0079e5e4 */
extern char g_79e5dc;   /* byte array at 0x0079e5dc */
extern char g_79e5d4;   /* byte array at 0x0079e5d4 */
extern char g_83f1f0;   /* byte at 0x0083f1f0 */
extern char g_82ecf8;   /* byte array at 0x0082ecf8 */

__declspec(naked) void __cdecl FUN_006cdb30(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        call    FUN_006cda10
        test    eax, eax
        jnz     L_46
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
L_46:
        mov     eax, dword ptr [g_83f5e8]
        test    eax, eax
        jz      L_9e
        cmp     byte ptr [g_83f1e8], 0x23
        mov     ecx, offset g_83f1e8
        mov     edi, offset g_83e9e0
        mov     dword ptr [esp + 0x10], ecx
        mov     ebx, ecx
        mov     dword ptr [esp + 0x14], edi
        mov     byte ptr [esp + 0xf], 0
        jnz     L_29
        mov     al, byte ptr [g_79e5e4]
        test    al, al
        jz      L_9e
        xor     esi, esi
L_80:
        movsx   edx, byte ptr [esi + g_79e5e4]
        xor     eax, eax
        mov     al, byte ptr [esi + g_83f1e9]
        inc     esi
        cmp     eax, edx
        jnz     L_aa
        mov     al, byte ptr [esi + g_79e5e4]
        test    al, al
        jnz     L_80
L_9e:
        pop     edi
        pop     esi
        mov     eax, offset g_83f1e8
        pop     ebx
        add     esp, 0xc
        ret
L_aa:
        mov     al, byte ptr [g_79e5dc]
        test    al, al
        jz      L_9e
        xor     esi, esi
L_b5:
        movsx   edx, byte ptr [esi + g_79e5dc]
        xor     eax, eax
        mov     al, byte ptr [esi + g_83f1e9]
        inc     esi
        cmp     eax, edx
        jnz     L_df
        mov     al, byte ptr [esi + g_79e5dc]
        test    al, al
        jnz     L_b5
L_d3:
        pop     edi
        pop     esi
        mov     eax, offset g_83f1e8
        pop     ebx
        add     esp, 0xc
        ret
L_df:
        mov     al, byte ptr [g_79e5d4]
        test    al, al
        jz      L_08
        xor     esi, esi
L_ea:
        movsx   edx, byte ptr [esi + g_79e5d4]
        xor     eax, eax
        mov     al, byte ptr [esi + g_83f1e9]
        inc     esi
        cmp     eax, edx
        jnz     L_29
        mov     al, byte ptr [esi + g_79e5d4]
        test    al, al
        jnz     L_ea
L_08:
        mov     al, byte ptr [g_83f1f0]
        cmp     al, 0x20
        mov     ecx, offset g_83f1f0
        mov     dword ptr [esp + 0x10], ecx
        jz      L_29
L_1a:
        test    al, al
        jz      L_29
        inc     ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     al, byte ptr [ecx]
        cmp     al, 0x20
        jnz     L_1a
L_29:
        xor     eax, eax
        mov     al, byte ptr [ecx]
        test    al, al
        jz      L_9e
        push    ebp
L_36:
        mov     edx, eax
        and     edx, 0xff
        cmp     byte ptr [edx + g_82ecf8], 0
        jnz     L_84
L_47:
        test    al, al
        jz      L_84
        inc     ecx
        mov     dword ptr [esp + 0x14], ecx
        cmp     byte ptr [ecx], 0x22
        jnz     L_6f
        inc     ecx
        mov     dword ptr [esp + 0x14], ecx
        mov     al, byte ptr [ecx]
        cmp     al, 0x22
        jz      L_6f
L_60:
        test    al, al
        jz      L_6f
        inc     ecx
        mov     dword ptr [esp + 0x14], ecx
        mov     al, byte ptr [ecx]
        cmp     al, 0x22
        jnz     L_60
L_6f:
        xor     eax, eax
        mov     al, byte ptr [ecx]
        mov     edx, eax
        and     edx, 0xff
        cmp     byte ptr [edx + g_82ecf8], 0
        jz      L_47
L_84:
        cmp     byte ptr [ecx], 0
        jz      L_fe
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_006cd750
        test    eax, eax
        jz      L_fa
        mov     ecx, dword ptr [esp + 0x14]
        sub     ecx, ebx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, ebx
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x8]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x9]
        sub     edi, ebx
        mov     byte ptr [esp + 0x13], 0x1
        mov     ebp, ecx
        lea     esi, [eax + ebp + 0xb]
        add     edi, dword ptr [esp + 0x14]
        mov     ecx, edx
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x18]
        sub     edx, ebx
        add     edx, ecx
        add     esi, edx
        add     ecx, ebp
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x14], ecx
        mov     ebx, ecx
        mov     edi, esi
        jmp     L_fe
L_fa:
        mov     ecx, dword ptr [esp + 0x14]
L_fe:
        mov     al, byte ptr [ecx]
        test    al, al
        jnz     L_36
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        pop     ebp
        jz      L_9e
        sub     ecx, ebx
        inc     ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, ebx
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        pop     edi
        pop     esi
        mov     eax, offset g_83e9e0
        pop     ebx
        add     esp, 0xc
        ret
    }
}
