/*
 * FUN_006F53E0 (85 B) — .text data block containing 3 sub-functions:
 *   [0x6F53E0] __cdecl (1 arg, RET 4): calls IAT [g_76B2D0] with the arg.
 *   [0x6F53F0] __cdecl (1 arg, RET 4): same as above.
 *   [0x6F5400] __cdecl (1 arg, RET 4): hash-style string fold (x*17 + c),
 *             capped at 0x10 iterations.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b2d0;

__declspec(naked) void FUN_006F53E0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_76b2d0]
        pop     ecx
        ret     4
        nop
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_76b2d0]
        pop     ecx
        ret     4
        nop
        mov     edx, dword ptr [esp + 4]
        push    esi
        xor     eax, eax
        test    edx, edx
        push    edi
        je      loc_6f5430
        mov     cl, byte ptr [edx]
        xor     esi, esi
        test    cl, cl
        je      loc_6f5430
loc_6f5414:
        mov     edi, esi
        inc     esi
        cmp     edi, 0x10
        jge     loc_6f5430
        mov     edi, eax
        shl     edi, 4
        add     edi, eax
        movsx   eax, cl
        mov     cl, byte ptr [edx + 1]
        add     eax, edi
        inc     edx
        test    cl, cl
        jne     loc_6f5414
loc_6f5430:
        pop     edi
        pop     esi
        ret     4
    }
}
