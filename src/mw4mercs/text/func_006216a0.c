/*
 * FUN_006216a0 (281 B) — ABL interpreter __thiscall, 2 stack args (RET 0x8).
 * Inserts an element into a growable array: iterates a linked list of
 * entries, reallocates the destination array (FUN_004084d0), copies the
 * existing elements, appends the new one, and frees the old buffer
 * (FUN_004084e0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006216a0(void)
{
    __asm {
        sub     esp, 0x10
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx+0x4]
        cmp     edx, ecx
        __emit  0x89   /* __emit: MSVC6 drops the 00 disp byte for mov [esp],edx (89 14 24); ref needs 89 54 24 00 */
        __emit  0x54
        __emit  0x24
        __emit  0x00
        mov     dword ptr [esp+0xc], ecx
        jz      L_6217b3
        push    ebx
        push    ebp
        push    esi
        push    edi
L_6216bc:
        mov     esi, dword ptr [edx]
        test    esi, esi
        jz      L_6217a0
        mov     ebx, dword ptr [esp+0x24]
        mov     edi, dword ptr [esi+0x8]
        or      eax, 0xffffffff
        sub     eax, ebx
        cmp     edi, eax
        jnz     L_6217a0
        mov     eax, dword ptr [esp+0x28]
        mov     edi, dword ptr [eax+0x4]
        cmp     edi, dword ptr [eax+0x8]
        jz      L_6216f7
        test    edi, edi
        jz      L_6216ec
        mov     dword ptr [edi], esi
L_6216ec:
        add     edi, 0x4
        mov     dword ptr [eax+0x4], edi
        jmp     L_6217a0
L_6216f7:
        mov     ebx, dword ptr [eax]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp+0x14], 0x1
        mov     dword ptr [esp+0x18], eax
        lea     ecx, [esp+0x14]
        jc      L_621719
        lea     ecx, [esp+0x18]
L_621719:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp+0x18], ecx
        jz      L_621733
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     L_621735
L_621733:
        xor     ebp, ebp
L_621735:
        cmp     ebx, edi
        mov     eax, ebp
        jz      L_62174f
L_62173d:
        mov     ecx, ebx
        test    eax, eax
        jz      L_621745
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L_621745:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edi
        __emit  0x75   /* __emit: MSVC6 miscomputes backward jnz rel-offset (off-by-2); ref 75 EE */
        __emit  0xEE
L_62174f:
        test    eax, eax
        jz      L_621755
        mov     dword ptr [eax], esi
L_621755:
        cmp     edi, edi
        lea     esi, [eax+0x4]
        jz      L_621773
L_621760:
        mov     eax, edi
        sub     eax, esi
        test    esi, esi
        jz      L_621769
        mov     ecx, dword ptr [eax+esi]
        mov     dword ptr [esi], ecx
L_621769:
        add     esi, 0x4
        lea     edx, [eax+esi]
        cmp     edx, edi
        __emit  0x75   /* __emit: MSVC6 miscomputes backward jnz rel-offset (off-by-4); ref 75 ED */
        __emit  0xED
L_621773:
        test    ebx, ebx
        mov     dword ptr [esp+0x14], ebx
        jz      L_621784
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_621784:
        mov     ecx, dword ptr [esp+0x18]
        mov     eax, dword ptr [esp+0x28]
        lea     edx, [ebp+ecx*0x4]
        mov     ecx, dword ptr [esp+0x1c]
        mov     dword ptr [eax+0x8], edx
        mov     edx, dword ptr [esp+0x10]
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax+0x4], esi
L_6217a0:
        add     edx, 0x4
        cmp     edx, ecx
        mov     dword ptr [esp+0x10], edx
        jnz     L_6216bc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
L_6217b3:
        add     esp, 0x10
        ret     0x8
    }
}
