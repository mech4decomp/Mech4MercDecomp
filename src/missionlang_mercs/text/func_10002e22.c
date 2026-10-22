/*
 * FUN_10002e22 (177 B) — grow the arena entry array (HeapReAlloc) when full,
 * then allocate a new arena block: HeapAlloc the 0x41c4-byte header and
 * VirtualAlloc a 0x100000-byte region; on failure clean up and return 0.
 *
 * __stdcall, 0 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10005578;                                /* 0x10005578 */
extern int g_10005568;                                /* 0x10005568 */
extern int g_1000557c;                                /* 0x1000557c */
extern void *g_100057a8;                              /* 0x100057a8 heap handle */
extern void *(__stdcall *g_10004088)(void *, unsigned int, void *, unsigned int); /* IAT 0x10004088 HeapReAlloc */
extern void *(__stdcall *g_10004074)(void *, unsigned int, unsigned int);          /* IAT 0x10004074 HeapAlloc */
extern void *(__stdcall *g_10004084)(void *, unsigned int, unsigned int, unsigned int); /* IAT 0x10004084 VirtualAlloc */
extern void *(__stdcall *g_10004060)(void *, unsigned int, void *);                /* IAT 0x10004060 HeapFree */

__declspec(naked) void *__stdcall FUN_10002e22(void)
{
    __asm {
        mov     eax, dword ptr [g_10005578]
        mov     ecx, dword ptr [g_10005568]
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, ecx
        jnz     L2E65
        lea     eax, [ecx + ecx*4 + 0x50]
        shl     eax, 2
        push    eax
        push    dword ptr [g_1000557c]
        push    edi
        push    dword ptr [g_100057a8]
        call    dword ptr [g_10004088]
        cmp     eax, edi
        jz      L2EB5
        add     dword ptr [g_10005568], 0x10
        mov     dword ptr [g_1000557c], eax
        mov     eax, dword ptr [g_10005578]
L2E65:
        mov     ecx, dword ptr [g_1000557c]
        push    0x41c4
        push    0x8
        lea     eax, [eax + eax*4]
        push    dword ptr [g_100057a8]
        lea     esi, [ecx + eax*4]
        call    dword ptr [g_10004074]
        cmp     eax, edi
        mov     dword ptr [esi + 0x10], eax
        jz      L2EB5
        push    0x4
        push    0x2000
        push    0x100000
        push    edi
        call    dword ptr [g_10004084]
        cmp     eax, edi
        mov     dword ptr [esi + 0xc], eax
        jnz     L2EB9
        push    dword ptr [esi + 0x10]
        push    edi
        push    dword ptr [g_100057a8]
        call    dword ptr [g_10004060]
L2EB5:
        xor     eax, eax
        jmp     L2ED0
L2EB9:
        or      dword ptr [esi + 8], 0xffffffff
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 4], edi
        inc     dword ptr [g_10005578]
        mov     eax, dword ptr [esi + 0x10]
        or      dword ptr [eax], 0xffffffff
        mov     eax, esi
L2ED0:
        pop     edi
        pop     esi
        ret
    }
}
