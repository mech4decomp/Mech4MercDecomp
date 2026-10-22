/*
 * FUN_10001602 (185 B) — parse the environment/startup string table into
 * an array of strncpy'd copies, then free the source.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_100058c8;                                /* 0x100058c8 */
extern char *g_10005364;                              /* 0x10005364 */
extern void *g_10005394;                              /* 0x10005394 */
extern int g_100058c4;                                /* 0x100058c4 */

extern void __cdecl FUN_10002433(void);
extern unsigned int __cdecl FUN_10001fe0(const char *); /* _strlen */
extern void *__cdecl FUN_10001e57(unsigned int);      /* _malloc */
extern void __cdecl FUN_1000117c(int);                /* __amsg_exit */
extern char *__cdecl FUN_10001ef0(char *, const char *, unsigned int); /* _strncpy */
extern void __cdecl FUN_10001e0f(void *);             /* free */

__declspec(naked) void __stdcall FUN_10001602(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_100058c8], ebx
        push    esi
        push    edi
        jnz     L_614
        call    FUN_10002433
L_614:
        mov     esi, dword ptr [g_10005364]
        xor     edi, edi
L_61c:
        mov     al, byte ptr [esi]
        cmp     al, bl
        jz      L_634
        cmp     al, 0x3d
        jz      L_627
        inc     edi
L_627:
        push    esi
        call    FUN_10001fe0
        pop     ecx
        lea     esi, [esi + eax + 1]
        jmp     L_61c
L_634:
        lea     eax, [edi*4 + 4]
        push    eax
        call    FUN_10001e57
        mov     esi, eax
        pop     ecx
        cmp     esi, ebx
        mov     dword ptr [g_10005394], esi
        jnz     L_656
        push    9
        call    FUN_1000117c
        pop     ecx
L_656:
        mov     edi, dword ptr [g_10005364]
        cmp     byte ptr [edi], bl
        jz      L_699
        push    ebp
L_661:
        push    edi
        call    FUN_10001fe0
        mov     ebp, eax
        pop     ecx
        inc     ebp
        cmp     byte ptr [edi], 0x3d
        jz      L_692
        push    ebp
        call    FUN_10001e57
        cmp     eax, ebx
        pop     ecx
        mov     dword ptr [esi], eax
        jnz     L_685
        push    9
        call    FUN_1000117c
        pop     ecx
L_685:
        push    edi
        push    dword ptr [esi]
        call    FUN_10001ef0
        pop     ecx
        add     esi, 4
        pop     ecx
L_692:
        add     edi, ebp
        cmp     byte ptr [edi], bl
        jnz     L_661
        pop     ebp
L_699:
        push    dword ptr [g_10005364]
        call    FUN_10001e0f
        pop     ecx
        mov     dword ptr [g_10005364], ebx
        mov     dword ptr [esi], ebx
        pop     edi
        pop     esi
        mov     dword ptr [g_100058c4], 1
        pop     ebx
        ret
    }
}
