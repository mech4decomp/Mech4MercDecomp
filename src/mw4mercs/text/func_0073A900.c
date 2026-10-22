/*
 * FUN_0073A900 (123 B @ 0x73A900) - __thiscall (ECX = this), RET 4. Removes a
 * node from a linked list keyed by [esp+8]: walks the list, unlinks the match,
 * and frees it via IAT call 0x76B2D0. (Adjacent function 0x73A980 is a
 * separate entry in the same data block.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76B2D0;

__declspec(naked) void FUN_0073A900(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx]
        test    esi, esi
        je      L_73A979
        mov     eax, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esp + 8]
        cmp     eax, edx
        mov     eax, dword ptr [esi + 4]
        jne     L_73A939
        mov     edx, dword ptr [ecx + 4]
        dec     edx
        mov     dword ptr [esi + 8], 0
        push    esi
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 4], edx
        mov     dword ptr [esi], 0
        call    dword ptr [g_76B2D0]
        add     esp, 4
        pop     esi
        ret     4
L_73A939:
        test    eax, eax
        je      L_73A979
L_73A93D:
        cmp     dword ptr [eax + 0xc], edx
        je      L_73A94F
        mov     esi, eax
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        jne     L_73A93D
        pop     esi
        ret     4
L_73A94F:
        mov     eax, dword ptr [esi + 4]
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [esi + 4], edx
        mov     edx, dword ptr [eax + 4]
        test    edx, edx
        je      L_73A962
        mov     dword ptr [edx + 8], esi
L_73A962:
        mov     edx, dword ptr [ecx + 4]
        dec     edx
        push    eax
        mov     dword ptr [ecx + 4], edx
        call    dword ptr [g_76B2D0]
        add     esp, 4
        mov     dword ptr [esi], 0
L_73A979:
        pop     esi
        ret     4
    }
}
