/*
 * FUN_1003d8df (177 B) - __stdcall. Allocates a slot in a global pool,
 * HeapAlloc + VirtualAlloc backing buffers, grows the pool via HeapReAlloc.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10076858;    /* global pool count */
extern int g_10076844;    /* global pool capacity */
extern int g_1007685c;    /* global pool base */
extern int g_10076a90;    /* global heap handle */
extern void *g_10049080;  /* IAT: HeapReAlloc */
extern void *g_10049074;  /* IAT: HeapAlloc */
extern void *g_10049148;  /* IAT: VirtualAlloc */
extern void *g_10049084;  /* IAT: HeapFree */

__declspec(naked) void __stdcall FUN_1003d8df(void)
{
    __asm {
        mov     eax, dword ptr [g_10076858]
        mov     ecx, dword ptr [g_10076844]
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, ecx
        jnz     L_d922
        lea     eax, [ecx + ecx*4 + 0x50]
        shl     eax, 0x2
        push    eax
        push    dword ptr [g_1007685c]
        push    edi
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049080]
        cmp     eax, edi
        jz      L_d972
        add     dword ptr [g_10076844], 0x10
        mov     dword ptr [g_1007685c], eax
        mov     eax, dword ptr [g_10076858]
L_d922:
        mov     ecx, dword ptr [g_1007685c]
        push    0x41c4
        push    0x8
        lea     eax, [eax + eax*4]
        push    dword ptr [g_10076a90]
        lea     esi, [ecx + eax*4]
        call    dword ptr [g_10049074]
        cmp     eax, edi
        mov     dword ptr [esi + 0x10], eax
        jz      L_d972
        push    0x4
        push    0x2000
        push    0x100000
        push    edi
        call    dword ptr [g_10049148]
        cmp     eax, edi
        mov     dword ptr [esi + 0xc], eax
        jnz     L_d976
        push    dword ptr [esi + 0x10]
        push    edi
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049084]
L_d972:
        xor     eax, eax
        jmp     L_d98d
L_d976:
        or      dword ptr [esi + 0x8], 0xffffffff
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x4], edi
        inc     dword ptr [g_10076858]
        mov     eax, dword ptr [esi + 0x10]
        or      dword ptr [eax], 0xffffffff
        mov     eax, esi
L_d98d:
        pop     edi
        pop     esi
        ret
    }
}
