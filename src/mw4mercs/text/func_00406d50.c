/*
 * FUN_00406d50 (270 B) — engine option-loading helper. Reads a global
 * enable flag (0x007b87bc); if set, loads a config path via FUN_00708930,
 * normalizes backslashes, compares against known strings (strcmpi), and
 * on failure reports via the obfuscated error object + FUN_006fab90.
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b87bc;              /* 0x007b87bc */
extern int  g_007dab44;              /* 0x007dab44 */
extern int  g_007dab40;              /* 0x007dab40 */
extern char g_str_76c6ac[];          /* 0x76c6ac */
extern char g_str_76c6a0[];          /* 0x76c6a0 */
extern char g_str_76c694[];          /* 0x76c694 */
extern char g_str_76c690[];          /* 0x76c690 */
extern void __cdecl FUN_00708930(int, char *, char *, char *);
extern int  __cdecl FUN_006fb6a0(char *, char *, int);
extern int (*g_strcmpi)(const char *, const char *);   /* 0x0076b41c */
extern int  __cdecl FUN_006fab90(int, char *);

__declspec(naked) int __cdecl FUN_00406d50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x204
        mov     al, byte ptr [g_007b87bc]
        test    al, al
        push    esi
        jnz     L6E57
        push    0x1
        lea     eax, [ebp - 0x4]
        push    eax
        lea     ecx, [ebp - 0x104]
        push    ecx
        push    offset g_str_76c6ac
        mov     dword ptr [ebp - 0x4], 0x100
        call    FUN_00708930
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jbe     L6E25
        mov     cl, byte ptr [ebp - 0x104]
        mov     dl, 0x5c
        cmp     cl, dl
        lea     eax, [ebp - 0x104]
        jnz     L6DB0
        cmp     byte ptr [ebp - 0x103], dl
        jnz     L6DB0
        lea     eax, [ebp - 0x102]
L6DB0:
        mov     cl, byte ptr [eax]
        cmp     cl, dl
        jz      L6DC2
L6DB6:
        test    cl, cl
        jz      L6DC2
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, dl
        jnz     L6DB6
L6DC2:
        cmp     byte ptr [eax], 0x0
        jnz     L6DC9
        mov     byte ptr [eax], dl
L6DC9:
        push    0x100
        lea     edx, [ebp - 0x204]
        mov     byte ptr [eax + 0x1], 0x0
        push    edx
        lea     eax, [ebp - 0x104]
        push    eax
        call    FUN_006fb6a0
        test    al, al
        jnz     L6DEE
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L6DEE:
        mov     esi, dword ptr [g_strcmpi]
        lea     ecx, [ebp - 0x204]
        push    offset g_str_76c6a0
        push    ecx
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L6E57
        lea     edx, [ebp - 0x204]
        push    offset g_str_76c694
        push    edx
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L6E57
        xor     al, al
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L6E25:
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x38
        call    dword ptr [edx + 0x34]
        push    eax
        push    offset g_str_76c690
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L6E57
        int     3
L6E57:
        mov     al, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
