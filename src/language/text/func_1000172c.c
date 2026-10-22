/*
 * FUN_1000172c (153 B) — build the module-name string table: get the
 * module file name (or the override at 0x10009118), two-pass
 * FUN_100017c5 to size then fill the malloc'd table, store table/count.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_10009108;   /* 0x10009108 */
extern char g_10008a90;           /* 0x10008a90 buffer */
extern char *g_10008a7c;          /* 0x10008a7c */
extern char *g_10009118;          /* 0x10009118 */
extern void *g_10008a64;          /* 0x10008a64 */
extern unsigned int g_10008a60;   /* 0x10008a60 */

extern void (__stdcall *g_GetModuleFileNameA)(void *, char *, unsigned int); /* IAT 0x10005044 */

extern void __stdcall FUN_10002863(void);
extern void __cdecl FUN_100017c5(void *, void *, void *, int *, int *);
extern void *__cdecl FUN_100021e2(unsigned int);   /* _malloc */
extern void __cdecl FUN_10001186(int);             /* __amsg_exit */

__declspec(naked) void __stdcall FUN_1000172c(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_10009108], ebx
        push    esi
        push    edi
        jnz     L_743
        call    FUN_10002863
L_743:
        mov     esi, 0x10008a90
        push    0x104
        push    esi
        push    ebx
        call    dword ptr [g_GetModuleFileNameA]
        mov     eax, dword ptr [g_10009118]
        mov     dword ptr [g_10008a7c], esi
        mov     edi, esi
        cmp     byte ptr [eax], bl
        jz      L_768
        mov     edi, eax
L_768:
        lea     eax, [ebp - 8]
        push    eax
        lea     eax, [ebp - 4]
        push    eax
        push    ebx
        push    ebx
        push    edi
        call    FUN_100017c5
        mov     eax, dword ptr [ebp - 8]
        mov     ecx, dword ptr [ebp - 4]
        lea     eax, [eax + ecx*4]
        push    eax
        call    FUN_100021e2
        mov     esi, eax
        add     esp, 0x18
        cmp     esi, ebx
        jnz     L_798
        push    8
        call    FUN_10001186
        pop     ecx
L_798:
        lea     eax, [ebp - 8]
        push    eax
        lea     eax, [ebp - 4]
        push    eax
        mov     eax, dword ptr [ebp - 4]
        lea     eax, [esi + eax*4]
        push    eax
        push    esi
        push    edi
        call    FUN_100017c5
        mov     eax, dword ptr [ebp - 4]
        add     esp, 0x14
        dec     eax
        mov     dword ptr [g_10008a64], esi
        pop     edi
        pop     esi
        mov     dword ptr [g_10008a60], eax
        pop     ebx
        leave
        ret
    }
}
