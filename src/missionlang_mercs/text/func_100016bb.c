/*
 * FUN_100016bb (153 B) — build the module-name string table: get the
 * module filename, parse it into an array of strings, store the table.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_100058c8;                                /* 0x100058c8 */
extern char g_100053b8;                               /* 0x100053b8 buffer */
extern char *g_100058d8;                              /* 0x100058d8 */
extern void *g_100053a4;                              /* 0x100053a4 */
extern void *g_1000538c;                              /* 0x1000538c */
extern int g_10005388;                                /* 0x10005388 */

extern unsigned int (__stdcall *g_GetModuleFileNameA)(void *, char *, unsigned int); /* IAT 0x1000403c */

extern void __cdecl FUN_10002433(void);
extern void __cdecl FUN_10001754(void *, void *, void *, void *, void *);
extern void *__cdecl FUN_10001e57(unsigned int);      /* _malloc */
extern void __cdecl FUN_1000117c(int);                /* __amsg_exit */

__declspec(naked) void __stdcall FUN_100016bb(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_100058c8], ebx
        push    esi
        push    edi
        jnz     L_d2
        call    FUN_10002433
L_d2:
        mov     esi, 0x100053b8
        push    0x104
        push    esi
        push    ebx
        call    dword ptr [g_GetModuleFileNameA]
        mov     eax, dword ptr [g_100058d8]
        mov     dword ptr [g_100053a4], esi
        mov     edi, esi
        cmp     byte ptr [eax], bl
        jz      L_f7
        mov     edi, eax
L_f7:
        lea     eax, [ebp - 8]
        push    eax
        lea     eax, [ebp - 4]
        push    eax
        push    ebx
        push    ebx
        push    edi
        call    FUN_10001754
        mov     eax, dword ptr [ebp - 8]
        mov     ecx, dword ptr [ebp - 4]
        lea     eax, [eax + ecx*4]
        push    eax
        call    FUN_10001e57
        mov     esi, eax
        add     esp, 0x18
        cmp     esi, ebx
        jnz     L_727
        push    8
        call    FUN_1000117c
        pop     ecx
L_727:
        lea     eax, [ebp - 8]
        push    eax
        lea     eax, [ebp - 4]
        push    eax
        mov     eax, dword ptr [ebp - 4]
        lea     eax, [esi + eax*4]
        push    eax
        push    esi
        push    edi
        call    FUN_10001754
        mov     eax, dword ptr [ebp - 4]
        add     esp, 0x14
        dec     eax
        mov     dword ptr [g_1000538c], esi
        pop     edi
        pop     esi
        mov     dword ptr [g_10005388], eax
        pop     ebx
        leave
        ret
    }
}
