/*
 * FUN_0074e060 (200 B) — __stdcall (RET 0x4, 1 param), returns char*.
 *
 * Builds a material-name string in the global buffer 0x008ba294 by copying a
 * base string selected by (param_1 & 3) via a jump table, then appends
 * "+ALPHAREPLICATE" if (param_1 & 0x20) and "+COMPLEMENT" if (param_1 & 0x10).
 * Uses the classic strlen (repne scasb) + rep movsd/movsb copy idiom.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7abf54[];   /* "DIFFUSE" */
extern char g_7abf4c[];   /* "CURRENT" */
extern char g_7abf44[];   /* "TEXTURE" */
extern char g_7abf3c[];   /* "TFACTOR" */
extern char g_79e7f8[];   /* "Unknown" */
extern char g_7abf2c[];   /* "+ALPHAREPLICATE" */
extern char g_7abf20[];   /* "+COMPLEMENT" */
extern char g_8ba294[];   /* destination buffer */

__declspec(naked) char * __stdcall FUN_0074e060(unsigned int param_1)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, edx
        and     eax, 0x3
        cmp     eax, 0x3
        push    esi
        push    edi
        ja      L_74e093
        /* __emit: jump-table dispatch FF 24 85 [eax*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x28
        __emit 0xE1
        __emit 0x74
        __emit 0x00
    L_74e077:
        mov     edi, offset g_7abf54
        jmp     L_74e098
    L_74e07e:
        mov     edi, offset g_7abf4c
        jmp     L_74e098
    L_74e085:
        mov     edi, offset g_7abf44
        jmp     L_74e098
    L_74e08c:
        mov     edi, offset g_7abf3c
        jmp     L_74e098
    L_74e093:
        mov     edi, offset g_79e7f8
    L_74e098:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, offset g_8ba294
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        test    dl, 0x20
        rep     movsb
        jz      L_74e0ec
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abf2c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        push    ebx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     edi, offset g_8ba294
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        pop     ebx
    L_74e0ec:
        test    dl, 0x10
        jz      L_74e11e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abf20
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba294
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_74e11e:
        pop     edi
        mov     eax, offset g_8ba294
        pop     esi
        ret     0x4
    }
}
