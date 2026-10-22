/*
 * FUN_10043FF9 (129 B) - __cdecl.  Lock-guarded cleanup pass over the
 * g_10075820 object array (count g_10076840): for each entry, if
 * (entry->flags & 0x83) and FUN_100456ab(entry) != -1, count it; if
 * index >= 0x14, call IAT(g_100491a4)(entry+0x20), FUN_1003c2dc(entry),
 * and clear the slot.  Returns the count.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern int g_10076840;
extern int g_10075820;
extern void __cdecl FUN_100456ab(void);
extern void *g_100491a4;   /* IAT call dword ptr */
extern void __cdecl FUN_1003c2dc(void);   /* free */

__declspec(naked) void FUN_10043FF9(void)
{
    __asm {
        push    ebx
        push    edi
        push    2
        xor     ebx, ebx
        call    FUN_10039b19
        pop     ecx
        push    3
        pop     edi
        cmp     dword ptr [g_10076840], edi
        jle     L_done
        push    esi
L_loop:
        mov     eax, dword ptr [g_10075820]
        mov     esi, edi
        shl     esi, 2
        mov     eax, dword ptr [esi + eax]
        test    eax, eax
        je      L_next
        test    byte ptr [eax + 0xc], 0x83
        je      L_check
        push    eax
        call    FUN_100456ab
        cmp     eax, -1
        pop     ecx
        je      L_check
        inc     ebx
L_check:
        cmp     edi, 0x14
        jl      L_next
        mov     eax, dword ptr [g_10075820]
        mov     eax, dword ptr [esi + eax]
        add     eax, 0x20
        push    eax
        call    dword ptr [g_100491a4]
        mov     eax, dword ptr [g_10075820]
        push    dword ptr [esi + eax]
        call    FUN_1003c2dc
        mov     eax, dword ptr [g_10075820]
        pop     ecx
        and     dword ptr [esi + eax], 0
L_next:
        inc     edi
        cmp     edi, dword ptr [g_10076840]
        jl      L_loop
        pop     esi
L_done:
        push    2
        call    FUN_10039b7a
        pop     ecx
        mov     eax, ebx
        pop     edi
        pop     ebx
        ret
    }
}
