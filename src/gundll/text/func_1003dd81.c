/*
 * FUN_1003dd81 (209 B) - __cdecl.  Arena teardown: if arena (g_10076854)
 * exists, VirtualFree its page, clear the size-class bit, decrement the
 * in-use count, and when the arena becomes empty (count==1) HeapFree the
 * arena block and unlink it from the list via FUN_1003ec80.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076854;
extern unsigned int g_10076848;
extern unsigned int g_10076858;
extern unsigned int g_1007685c;
extern unsigned int g_10076a90;
extern void *g_100491c8;   /* IAT: VirtualFree */
extern void *g_10049084;   /* IAT: HeapFree */
extern void __cdecl FUN_1003ec80(void);

__declspec(naked) void FUN_1003dd81(void)
{
    __asm {
        mov     eax, dword ptr [g_10076854]
        test    eax, eax
        je      L_de51
        mov     ecx, dword ptr [g_10076848]
        push    0x4000
        shl     ecx, 0xf
        add     ecx, dword ptr [eax + 0xc]
        push    0x8000
        push    ecx
        call    dword ptr [g_100491c8]
        mov     ecx, dword ptr [g_10076848]
        mov     eax, dword ptr [g_10076854]
        mov     edx, 0x80000000
        shr     edx, cl
        or      dword ptr [eax + 8], edx
        mov     eax, dword ptr [g_10076854]
        mov     ecx, dword ptr [g_10076848]
        mov     eax, dword ptr [eax + 0x10]
        and     dword ptr [eax + ecx*4 + 0xc4], 0
        mov     eax, dword ptr [g_10076854]
        mov     eax, dword ptr [eax + 0x10]
        dec     byte ptr [eax + 0x43]
        mov     eax, dword ptr [g_10076854]
        mov     ecx, dword ptr [eax + 0x10]
        cmp     byte ptr [ecx + 0x43], 0
        jne     L_ddf8
        and     dword ptr [eax + 4], 0xfffffffe
        mov     eax, dword ptr [g_10076854]
L_ddf8:
        cmp     dword ptr [eax + 8], -1
        jne     L_de4a
        cmp     dword ptr [g_10076858], 1
        jle     L_de4a
        push    dword ptr [eax + 0x10]
        push    0
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049084]
        mov     eax, dword ptr [g_10076858]
        mov     edx, dword ptr [g_1007685c]
        lea     eax, [eax + eax*4]
        shl     eax, 2
        mov     ecx, eax
        mov     eax, dword ptr [g_10076854]
        sub     ecx, eax
        lea     ecx, [ecx + edx - 0x14]
        push    ecx
        lea     ecx, [eax + 0x14]
        push    ecx
        push    eax
        call    FUN_1003ec80
        add     esp, 0xc
        dec     dword ptr [g_10076858]
L_de4a:
        and     dword ptr [g_10076854], 0
L_de51:
        ret
    }
}
