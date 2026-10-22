/*
 * FUN_10001673 (185 B) — parse the environment string table at
 * 0x10008a3c into an array of malloc'd strings (skipping '=' entries),
 * free the original, set the ready flag.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_10009108;   /* 0x10009108 */
extern char *g_10008a3c;          /* 0x10008a3c */
extern void *g_10008a6c;          /* 0x10008a6c */
extern unsigned int g_10009104;   /* 0x10009104 */

extern void __stdcall FUN_10002863(void);
extern unsigned int __cdecl FUN_10002410(const char *);   /* _strlen */
extern void *__cdecl FUN_100021e2(unsigned int);           /* _malloc */
extern void __cdecl FUN_10001186(int);                     /* __amsg_exit */
extern void *__cdecl FUN_10002320(void *, const char *);   /* strcpy */
extern void __cdecl FUN_100020f9(void *);                  /* free */

__declspec(naked) void __stdcall FUN_10001673(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_10009108], ebx
        push    esi
        push    edi
        jnz     L_685
        call    FUN_10002863
L_685:
        mov     esi, dword ptr [g_10008a3c]
        xor     edi, edi
L_68d:
        mov     al, byte ptr [esi]
        cmp     al, bl
        jz      L_6a5
        cmp     al, 0x3d
        jz      L_698
        inc     edi
L_698:
        push    esi
        call    FUN_10002410
        pop     ecx
        lea     esi, [esi + eax + 1]
        jmp     L_68d
L_6a5:
        lea     eax, [edi*4 + 4]
        push    eax
        call    FUN_100021e2
        mov     esi, eax
        pop     ecx
        cmp     esi, ebx
        mov     dword ptr [g_10008a6c], esi
        jnz     L_6c7
        push    9
        call    FUN_10001186
        pop     ecx
L_6c7:
        mov     edi, dword ptr [g_10008a3c]
        cmp     byte ptr [edi], bl
        jz      L_70a
        push    ebp
L_6d2:
        push    edi
        call    FUN_10002410
        mov     ebp, eax
        pop     ecx
        inc     ebp
        cmp     byte ptr [edi], 0x3d
        jz      L_703
        push    ebp
        call    FUN_100021e2
        cmp     eax, ebx
        pop     ecx
        mov     dword ptr [esi], eax
        jnz     L_6f6
        push    9
        call    FUN_10001186
        pop     ecx
L_6f6:
        push    edi
        push    dword ptr [esi]
        call    FUN_10002320
        pop     ecx
        add     esi, 4
        pop     ecx
L_703:
        add     edi, ebp
        cmp     byte ptr [edi], bl
        jnz     L_6d2
        pop     ebp
L_70a:
        push    dword ptr [g_10008a3c]
        call    FUN_100020f9
        pop     ecx
        mov     dword ptr [g_10008a3c], ebx
        mov     dword ptr [esi], ebx
        pop     edi
        pop     esi
        mov     dword ptr [g_10009104], 1
        pop     ebx
        ret
    }
}
