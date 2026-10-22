/*
 * FUN_006F6C20 (241 B) — in-.text data block function (block 0x6F6A50).
 * Linked-list node removal by string match; calls FUN_006f6d80 and IAT
 * callback 0x76b2d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f6d80(void);

extern void (__cdecl *g_0076b2d0)(void);   /* IAT @ 0x76b2d0 */

__declspec(naked) void FUN_006F6C20(void)
{
    __asm {
        push    ecx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 8]
        test    edi, edi
        mov     dword ptr [esp + 0xc], ecx
        je      L6C74
        jne     L6C35
        xor     ebp, ebp
        jmp     L6C3C
L6C35:
        mov     eax, edi
        mov     edi, dword ptr [edi + 0x14]
        mov     ebp, eax
L6C3C:
        mov     esi, dword ptr [esp + 0x14]
L6C43:
        mov     eax, dword ptr [ebp]
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L6C67
        test    cl, cl
        je      L6C63
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L6C67
        add     eax, 2
        add     esi, 2
        test    cl, cl
        __emit 0x75   /* __emit: backward jne L6C43 rel-offset miscomputed by MSVC6 (75 DD vs ref 75 E0) */
        __emit 0xE0
L6C63:
        xor     eax, eax
        jmp     L6C6C
L6C67:
        sbb     eax, eax
        sbb     eax, -1
L6C6C:
        test    eax, eax
        je      L6C7D
        test    edi, edi
        jne     L6C35
L6C74:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebp
        pop     ecx
        ret     4
L6C7D:
        mov     esi, dword ptr [esp + 0xc]
        push    ebp
        mov     ecx, esi
        call    FUN_006f6d80
        test    edi, edi
        je      L6D08
        cmp     edi, dword ptr [esi + 8]
        jne     L6CD0
        mov     eax, dword ptr [edi + 0x14]
        test    eax, eax
        mov     dword ptr [esi + 8], eax
        je      L6CB6
        push    edi
        mov     dword ptr [eax + 0x18], 0
        call    dword ptr [g_0076b2d0]
        add     esp, 4
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebp
        pop     ecx
        ret     4
L6CB6:
        push    edi
        mov     dword ptr [esi + 0xc], 0
        call    dword ptr [g_0076b2d0]
        add     esp, 4
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebp
        pop     ecx
        ret     4
L6CD0:
        cmp     edi, dword ptr [esi + 0xc]
        mov     eax, dword ptr [edi + 0x18]
        jne     L6CF5
        push    edi
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [eax + 0x14], 0
        call    dword ptr [g_0076b2d0]
        add     esp, 4
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebp
        pop     ecx
        ret     4
L6CF5:
        mov     ecx, dword ptr [edi + 0x14]
        push    edi
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [ecx + 0x18], eax
        call    dword ptr [g_0076b2d0]
        add     esp, 4
L6D08:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebp
        pop     ecx
        ret     4
    }
}
