/*
 * FUN_00407b30 (168 B) — string tokenizer: extracts a whitespace-delimited
 * token from a string, with error reporting via FUN_006fab90. Allocates
 * the result via FUN_004084d0 and copies with strncpy. __cdecl, 1 param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_76c858[];          /* 0x76c858 */
extern char g_str_76c828[];          /* 0x76c828 */
extern int  __cdecl FUN_006fab90(char *);
extern void *__cdecl FUN_004084d0(int);
extern int (*g_strncpy)(char *, const char *, int);   /* 0x0076b320 */

__declspec(naked) char *__cdecl FUN_00407b30(char *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        or      esi, 0xffffffff
        test    edi, edi
        mov     eax, edi
        jz      L7B60
L7B42:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x2d
        jz      L7B52
        test    cl, cl
        jz      L7B57
        inc     eax
        jnz     L7B42
        jmp     L7B60
L7B52:
        sub     eax, edi
        dec     eax
        jmp     L7B59
L7B57:
        sub     eax, edi
L7B59:
        mov     esi, eax
        cmp     esi, -0x1
        jnz     L7B72
L7B60:
        push    offset g_str_76c858
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L7B72
        int     3
L7B72:
        mov     al, byte ptr [esi + edi]
        cmp     al, 0x20
        jz      L7B8F
        test    al, al
        jz      L7B8F
        push    offset g_str_76c828
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L7B8F
        int     3
L7B8F:
        xor     eax, eax
        test    esi, esi
        jle     L7BA0
L7B95:
        cmp     byte ptr [eax + edi], 0x20
        jnz     L7BA0
        inc     eax
        cmp     eax, esi
        jl      L7B95
L7BA0:
        cmp     eax, esi
        jnz     L7BB6
        push    offset g_str_76c858
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L7BB6
        int     3
L7BB6:
        lea     eax, [esi + 0x1]
        push    eax
        call    FUN_004084d0
        push    esi
        mov     ebx, eax
        push    edi
        push    ebx
        call    dword ptr [g_strncpy]
        add     esp, 0x10
        pop     edi
        mov     byte ptr [ebx + esi], 0x0
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret
    }
}
