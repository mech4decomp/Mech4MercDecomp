/*
 * FUN_10003934 (86 B, __cdecl) — free a string-table arena: VirtualFree
 * its page, unlink it from the free-list, HeapFree the header (unless it
 * is the static 0x10006340 arena, in which case just mark it free).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10003934 (86 B) -- __cdecl. Free a string-table arena:
 * VirtualFree its data page (MEM_RELEASE), unlink it from the free-list
 * (unless it's the head), HeapFree the header (unless it's the static
 * 0x10006340 arena, in which case just mark it free with -1).
 */

extern int   g_10008360;
extern int   g_10006350;
extern void *g_10008fe8;   /* heap handle */
extern void *g_10005070;   /* IAT: VirtualFree */
extern void *g_10005074;   /* IAT: HeapFree */

__declspec(naked) void FUN_10003934(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    0x8000
        push    0
        push    dword ptr [esi + 0x10]
        call    dword ptr [g_10005070]
        cmp     dword ptr [g_10008360], esi
        jnz     L_3959
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [g_10008360], eax
L_3959:
        cmp     esi, 0x10006340
        jz      L_3981
        mov     eax, dword ptr [esi + 4]
        mov     ecx, dword ptr [esi]
        push    esi
        push    0
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [eax + 4], ecx
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_10005074]
        pop     esi
        ret
L_3981:
        or      dword ptr [g_10006350], 0xffffffff
        pop     esi
        ret
    }
}
