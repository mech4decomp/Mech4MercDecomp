/*
 * FUN_10003644 (177 B, __stdcall) — grow the string-table: realloc the
 * entry array when full, then allocate a new 0x41c4-byte entry block and
 * a 0x100000-byte page via VirtualAlloc. Returns pointer to the new entry
 * (or 0 on failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10003644 (177 B) -- __stdcall. Grow the string table:
 * when full, HeapReAlloc the entry array (max*5+0x50)*4, then allocate a
 */

extern int   g_10008da8;
extern int   g_10008d98;
extern int   g_10008dac;
extern void *g_10008fe8;   /* heap handle */
extern void *g_1000509c;   /* IAT: HeapReAlloc */
extern void *g_10005088;   /* IAT: HeapAlloc */
extern void *g_10005098;   /* IAT: VirtualAlloc */
extern void *g_10005074;   /* IAT: HeapFree */

__declspec(naked) void *FUN_10003644(void)
{
    __asm {
        mov     eax, dword ptr [g_10008da8]
        mov     ecx, dword ptr [g_10008d98]
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, ecx
        jnz     L_3687
        lea     eax, [ecx + ecx*4 + 0x50]
        shl     eax, 2
        push    eax
        push    dword ptr [g_10008dac]
        push    edi
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_1000509c]
        cmp     eax, edi
        jz      L_36d7
        add     dword ptr [g_10008d98], 0x10
        mov     dword ptr [g_10008dac], eax
        mov     eax, dword ptr [g_10008da8]
L_3687:
        mov     ecx, dword ptr [g_10008dac]
        push    0x41c4
        push    8
        lea     eax, [eax + eax*4]
        push    dword ptr [g_10008fe8]
        lea     esi, [ecx + eax*4]
        call    dword ptr [g_10005088]
        cmp     eax, edi
        mov     dword ptr [esi + 0x10], eax
        jz      L_36d7
        push    4
        push    0x2000
        push    0x100000
        push    edi
        call    dword ptr [g_10005098]
        cmp     eax, edi
        mov     dword ptr [esi + 0xc], eax
        jnz     L_36db
        push    dword ptr [esi + 0x10]
        push    edi
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_10005074]
L_36d7:
        xor     eax, eax
        jmp     L_36f2
L_36db:
        or      dword ptr [esi + 8], 0xffffffff
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 4], edi
        inc     dword ptr [g_10008da8]
        mov     eax, dword ptr [esi + 0x10]
        or      dword ptr [eax], 0xffffffff
        mov     eax, esi
L_36f2:
        pop     edi
        pop     esi
        ret
    }
}
