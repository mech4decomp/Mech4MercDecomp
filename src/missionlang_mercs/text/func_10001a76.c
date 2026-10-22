/*
 * FUN_10001a76 (117 B) — free per-entry heap allocations, free the table
 * block, then destroy the private heap.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10005578;                                /* 0x10005578 entry count */
extern void *g_1000557c;                              /* 0x1000557c table ptr */
extern void *g_100057a8;                              /* 0x100057a8 heap handle */

extern void *(__stdcall *g_VirtualFree)(void *, unsigned int, unsigned int); /* IAT 0x1000405c */
extern int (__stdcall *g_HeapFree)(void *, unsigned int, void *); /* IAT 0x10004060 */
extern int (__stdcall *g_HeapDestroy)(void *);        /* IAT 0x10004054 */

__declspec(naked) void __stdcall FUN_10001a76(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_10005578], ebx
        push    ebp
        mov     ebp, dword ptr [g_HeapFree]
        jle     L_acc
        mov     eax, dword ptr [g_1000557c]
        push    esi
        push    edi
        mov     edi, dword ptr [g_VirtualFree]
        lea     esi, [eax + 0xc]
L_a98:
        push    0x4000
        push    0x100000
        push    dword ptr [esi]
        call    edi
        push    0x8000
        push    0
        push    dword ptr [esi]
        call    edi
        push    dword ptr [esi + 4]
        push    0
        push    dword ptr [g_100057a8]
        call    ebp
        add     esi, 0x14
        inc     ebx
        cmp     ebx, dword ptr [g_10005578]
        jl      L_a98
        pop     edi
        pop     esi
L_acc:
        push    dword ptr [g_1000557c]
        push    0
        push    dword ptr [g_100057a8]
        call    ebp
        push    dword ptr [g_100057a8]
        call    dword ptr [g_HeapDestroy]
        pop     ebp
        pop     ebx
        ret
    }
}
