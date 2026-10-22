/*
 * FUN_006bffb0 (337 B) — Hash-table string lookup. Reads a token from the
 * string at g_82f328, computes a hash (base-8 accumulation into g_83a0f4),
 * derives a bucket index into g_839ef0, and walks the bucket chain looking
 * for a matching key. On match, advances g_82f328 past the token (and any
 * trailing space) and returns the entry's value field; otherwise returns -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_82f328;   /* 0x0082f328 string cursor ptr */
extern unsigned int g_83a0f4;   /* 0x0083a0f4 hash accumulator */
extern unsigned char g_82ebf8[];/* 0x0082ebf8 char-class table */
extern unsigned char g_83a100;  /* 0x0083a100 token length */
extern unsigned int g_839ef0[]; /* 0x00839ef0 hash buckets */
extern unsigned int g_83a0f8;   /* 0x0083a0f8 bucket index */

__declspec(naked) int FUN_006bffb0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [g_82f328]
        xor     eax, eax
        mov     al, byte ptr [ebx]
        xor     edx, edx
        mov     dl, byte ptr [ebx + 0x1]
        lea     ecx, [ebx + 0x1]
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [g_83a0f4], eax
        cmp     byte ptr [edx + g_82ebf8], 0x0
        jz      L_ffed
L_ffd7:
        lea     eax, [edx + eax*0x8]
        inc     ecx
        xor     edx, edx
        mov     dl, byte ptr [ecx]
        cmp     byte ptr [edx + g_82ebf8], 0x0
        jnz     L_ffd7
        mov     dword ptr [g_83a0f4], eax
L_ffed:
        sub     cl, bl
        mov     byte ptr [g_83a100], cl
        mov     ebp, dword ptr [g_83a100]
        and     ebp, 0xff
        mov     ecx, eax
        mov     edx, ebp
        and     ecx, 0xf
        and     edx, 0x7
        lea     ecx, [edx + ecx*0x8]
        mov     edi, dword ptr [ecx*0x4 + g_839ef0]
        shl     eax, 0x10
        test    edi, edi
        lea     eax, [eax + ebp*0x1 + 0x200]
        mov     dword ptr [g_83a0f8], ecx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], edi
        jz      L_00f6
        cmp     dword ptr [edi + 0x4], eax
        jnz     L_0076
        mov     eax, dword ptr [edi + 0x8]
        mov     cl, byte ptr [eax]
        test    cl, cl
        jz      L_0055
        mov     esi, ebx
        sub     esi, eax
L_0047:
        mov     dl, byte ptr [esi + eax*0x1]
        inc     eax
        cmp     dl, cl
        jnz     L_0076
        mov     cl, byte ptr [eax]
        test    cl, cl
        jnz     L_0047
L_0055:
        mov     al, byte ptr [ebx + ebp*0x1]
        add     ebx, ebp
        cmp     al, 0x20
        mov     dword ptr [g_82f328], ebx
        jnz     L_006b
        inc     ebx
        mov     dword ptr [g_82f328], ebx
L_006b:
        mov     eax, dword ptr [edi + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L_0076:
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     dword ptr [esp + 0x14], edi
        jz      L_00f6
L_0080:
        mov     eax, dword ptr [esp + 0x18]
        cmp     dword ptr [esi + 0x4], eax
        jnz     L_00aa
        mov     eax, dword ptr [esi + 0x8]
        mov     cl, byte ptr [eax]
        test    cl, cl
        jz      L_00ba
        mov     edi, ebx
        sub     edi, eax
L_0096:
        mov     dl, byte ptr [edi + eax*0x1]
        inc     eax
        cmp     dl, cl
        jnz     L_00a6
        mov     cl, byte ptr [eax]
        test    cl, cl
        jz      L_00b6
        jmp     L_0096
L_00a6:
        mov     edi, dword ptr [esp + 0x10]
L_00aa:
        mov     dword ptr [esp + 0x14], esi
        mov     esi, dword ptr [esi]
        test    esi, esi
        jz      L_00f6
        jmp     L_0080
L_00b6:
        mov     edi, dword ptr [esp + 0x10]
L_00ba:
        mov     al, byte ptr [ebx + ebp*0x1]
        add     ebx, ebp
        cmp     al, 0x20
        mov     dword ptr [g_82f328], ebx
        jnz     L_00d0
        inc     ebx
        mov     dword ptr [g_82f328], ebx
L_00d0:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_00eb
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [g_83a0f8]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esi], edi
        mov     dword ptr [edx*0x4 + g_839ef0], esi
L_00eb:
        mov     eax, dword ptr [esi + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L_00f6:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0xc
        ret
    }
}
