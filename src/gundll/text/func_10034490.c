/*
 * FUN_10034490 (211 B) -- __fastcall.
 * Destructor with SEH frame. Sets vtable pointer 0x1004b220, then frees the
 * doubly-linked list at [this+0x20] (count at [this+0x24]) via FUN_10001d60,
 * calling a virtual method on each node's +8 object first.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_10034490(void)
{
    __asm {
        push    -1
        push    0x10048acb
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esi], 0x1004b220
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x0
        jbe     L_500
    L_4c4:
        mov     eax, dword ptr [esi + 0x20]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x8]
        test    ecx, ecx
        jz      L_4d6
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_4d6:
        mov     eax, dword ptr [esi + 0x20]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        push    eax
        mov     dword ptr [ecx + 0x4], edx
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x24]
        add     esp, 0x4
        dec     ecx
        mov     eax, ecx
        test    eax, eax
        mov     dword ptr [esi + 0x24], ecx
        ja      L_4c4
    L_500:
        mov     ebx, dword ptr [esi + 0x20]
        mov     edi, dword ptr [ebx]
        cmp     edi, ebx
        jz      L_537
        __emit 0x8D   /* __emit: MSVC6 drops zero-disp on lea esp,[esp]; ref needs 8D A4 24 00 00 00 00 */
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_510:
        mov     eax, edi
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        mov     edi, dword ptr [edi]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        push    eax
        mov     dword ptr [ecx + 0x4], edx
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x24]
        add     esp, 0x4
        dec     ecx
        cmp     edi, ebx
        mov     dword ptr [esi + 0x24], ecx
        jnz     L_510
    L_537:
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_10001d60
        mov     ecx, dword ptr [esp + 0x14]
        add     esp, 0x4
        pop     edi
        mov     dword ptr [esi + 0x20], 0x0
        mov     dword ptr [esi + 0x24], 0x0
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
