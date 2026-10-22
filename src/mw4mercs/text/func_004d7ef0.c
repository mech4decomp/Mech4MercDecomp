/*
 * FUN_004d7ef0 (245 B) — path/string helper. Builds a search string from the
 * global at 0x76c5a8 plus the caller's param_2, then strstr()'s it against
 * param_1. On a match, copies the trailing run of non-backslash characters
 * into the global buffer at 0x7dc160 + (g_007dc360 ^ 1) * 0x100.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_0076c5a8;
extern int g_007dc360;
extern void *g_0076b298;   /* strstr (IAT) */

__declspec(naked) void FUN_004d7ef0(void)
{
    __asm {
        sub     esp, 0x100
        mov     ax, word ptr [g_0076c5a8]
        __emit 0x66  /* mov word ptr [esp],ax — MSVC6 drops the 00 disp byte (66 89 04 24) */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    ebx
        push    esi
        push    edi
        xor     eax, eax
        mov     ecx, 0x3f
        lea     edi, [esp+0xe]
        rep stosd
        stosw
        mov     eax, dword ptr [g_007dc360]
        mov     edi, dword ptr [esp+0x114]
        or      ecx, -1
        xor     eax, 1
        mov     dword ptr [g_007dc360], eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, -1
        mov     esi, edi
        lea     edx, [esp+0xc]
        mov     edi, edx
        repne scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 2
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
        or      ecx, -1
        mov     edi, 0x76c5a8
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, -1
        mov     esi, edi
        lea     edx, [esp+0xc]
        mov     edi, edx
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        lea     eax, [esp+0xc]
        rep movsb
        mov     ecx, dword ptr [esp+0x110]
        push    eax
        push    ecx
        call    dword ptr [g_0076b298]
        mov     edx, eax
        add     esp, 8
        test    edx, edx
        jnz     found
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x100
        ret
found:
        xor     eax, eax
        or      ecx, -1
        lea     edi, [esp+0xc]
        repne scasb
        mov     eax, dword ptr [g_007dc360]
        not     ecx
        dec     ecx
        add     edx, ecx
        mov     cl, byte ptr [edx]
        shl     eax, 8
        test    cl, cl
        lea     eax, [eax+0x7dc160]
        mov     esi, eax
        jz      done
copy_loop:
        cmp     cl, 0x5c
        jz      done
        mov     byte ptr [esi], cl
        mov     cl, byte ptr [edx+1]
        inc     esi
        inc     edx
        test    cl, cl
        jnz     copy_loop
done:
        pop     edi
        mov     byte ptr [esi], 0
        pop     esi
        pop     ebx
        add     esp, 0x100
        ret
    }
}
