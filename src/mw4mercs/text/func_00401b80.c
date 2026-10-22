/*
 * FUN_00401b80 (74 B) — checks a string against "NUL" (case-insensitive),
 * then scans for special filename characters via a lookup table + jump
 * table. __cdecl, 1 param.
 *
 * The lookup table (0x401bd4) and jump table (0x401bcc) live just past the
 * function's byte range, so only the referencing instructions are encoded.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (*g_strcmpi)(const char *, const char *);   /* 0x0076b41c */
extern char g_NUL[];              /* 0x76b790 "NUL" */
extern char g_lookup_401bd4[];    /* byte lookup table @ 0x401bd4 */
extern int  g_jt_401bcc[];        /* jump table @ 0x401bcc */

__declspec(naked) int __cdecl FUN_00401b80(char *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    offset g_NUL
        push    esi
        call    dword ptr [g_strcmpi]
        add     esp, 0x8
        test    eax, eax
        jnz     L1B9C
        xor     al, al
        pop     esi
        ret
L1B9C:
        mov     al, byte ptr [esi]
        test    al, al
        mov     ecx, esi
        jz      L1BC6
L1BA4:
        movsx   eax, al
        add     eax, -0x22
        cmp     eax, 0x5a
        ja      L1BBE
        xor     edx, edx
        mov     dl, byte ptr [eax + g_lookup_401bd4]
        jmp     dword ptr [edx*4 + g_jt_401bcc]
L1BBE:
        mov     al, byte ptr [ecx + 0x1]
        inc     ecx
        test    al, al
        jnz     L1BA4
L1BC6:
        mov     al, 0x1
        pop     esi
        ret
    }
}
