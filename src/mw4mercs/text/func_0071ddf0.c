/*
 * FUN_0071ddf0 (193 B) — __stdcall, RET 0x8 (2 params: uint count, char flag).
 *
 * Formats a byte count into a comma-separated string at DAT_0087d854 via
 * _strrev + wsprintfA. If param_2 is non-zero, appends " (%d Meg)".
 * Returns &DAT_0087d854.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char * (__cdecl *g_0076b3a4)(char *);            /* _strrev IAT */
extern int    (__cdecl *g_0076b4f8)(char *, char *, ...); /* wsprintfA IAT */

__declspec(naked) char * __stdcall FUN_0071ddf0(unsigned int param_1, char param_2)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        lea     ebp, [edi + 0x80000]
        xor     esi, esi
        xor     ecx, ecx
        shr     ebp, 0x14
        xor     edx, edx
        mov     ebx, 0xa
L08:
        mov     eax, edi
        div     ebx
        mov     ebx, 0x3
        add     dl, 0x30
        mov     byte ptr [esp + ecx*1 + 0x10], dl
        inc     ecx
        inc     esi
        xor     edx, edx
        mov     eax, esi
        div     ebx
        test    edx, edx
        jnz     L31
        mov     byte ptr [esp + ecx*1 + 0x10], 0x2c
        inc     ecx
L31:
        mov     eax, 0xcccccccd
        mul     edi
        shr     edx, 0x3
        mov     edi, edx
        __emit 0x75   /* __emit: MSVC6 miscomputes backward branch rel-offset for this loop (emits 0xD0, ref 0xC9) */
        __emit 0xC9
        cmp     byte ptr [esp + ecx*1 + 0xf], 0x2c
        jnz     L47
        dec     ecx
L47:
        lea     eax, [esp + 0x10]
        push    eax
        mov     byte ptr [esp + ecx*1 + 0x14], 0x0
        call    dword ptr [g_0076b3a4]
        mov     al, byte ptr [esp + 0x3c]
        add     esp, 0x4
        test    al, al
        jz      L8A
        push    ebp
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x7a461c
        push    0x87d854
        call    dword ptr [g_0076b4f8]
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x87d854
        pop     ebx
        add     esp, 0x20
        ret     0x8
L8A:
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7a4610
        push    0x87d854
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x87d854
        pop     ebx
        add     esp, 0x20
        ret     0x8
    }
}
