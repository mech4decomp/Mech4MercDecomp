/*
 * FUN_10001c7d (168 B) — teardown of the private heap. If the heap-select
 * result (DAT_10008fec) was 3, free each per-entry allocation (VirtualFree
 * + HeapFree) then the table block; if it was 2, walk the circular list at
 * 0x10006340 freeing each node's buffer. Finally HeapDestroy the heap.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10008fec;                                /* 0x10008fec heap-select result */
extern int g_10008da8;                                /* 0x10008da8 entry count */
extern void *g_10008dac;                              /* 0x10008dac table ptr */
extern void *g_10008fe8;                              /* 0x10008fe8 heap handle */
extern char g_10006340;                               /* 0x10006340 list head */

extern void *(__stdcall *g_HeapFree)(void *, unsigned int, void *);   /* IAT 0x10005074 */
extern void *(__stdcall *g_VirtualFree)(void *, unsigned int, unsigned int); /* IAT 0x10005070 */
extern int (__stdcall *g_HeapDestroy)(void *);        /* IAT 0x10005068 */

__declspec(naked) void __stdcall FUN_10001c7d(void)
{
    __asm {
        mov     eax, dword ptr [g_10008fec]
        push    esi
        cmp     eax, 3
        push    edi
        jnz     L_1cef
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_10008da8], ebx
        push    ebp
        mov     ebp, dword ptr [g_HeapFree]
        jle     L_1cdb
        mov     eax, dword ptr [g_10008dac]
        mov     edi, dword ptr [g_VirtualFree]
        lea     esi, [eax + 0xc]
L_1ca9:
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
        push    dword ptr [g_10008fe8]
        call    ebp
        add     esi, 0x14
        inc     ebx
        cmp     ebx, dword ptr [g_10008da8]
        jl      L_1ca9
L_1cdb:
        push    dword ptr [g_10008dac]
        push    0
        push    dword ptr [g_10008fe8]
        call    ebp
        pop     ebp
        pop     ebx
        jmp     L_1d16
L_1cef:
        cmp     eax, 2
        jnz     L_1d16
        mov     edi, offset g_10006340
        mov     esi, edi
L_1cfb:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L_1d10
        push    0x8000
        push    0
        push    eax
        call    dword ptr [g_VirtualFree]
L_1d10:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_1cfb
L_1d16:
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_HeapDestroy]
        pop     edi
        pop     esi
        ret
    }
}
