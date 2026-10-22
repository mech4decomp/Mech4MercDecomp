/*
 * FUN_004f86c0 (201 B) — __thiscall. Resizes a growable array of 8-byte
 * elements whose pointer/count are passed in via param_1 (a small
 * {ptr,count} struct): allocates new buffer, copies min(old,new)
 * elements, frees old, then memcpy's new data in. Array at [this+0x18c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004f86c0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x14]
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi+0x190]
        push    edi
        mov     edi, dword ptr [ebp+4]
        cmp     ebx, edi
        mov     dword ptr [esp+0x10], esi
        jz      L_8766
        test    ebx, ebx
        jbe     L_8750
        lea     eax, [ebx*8]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_8705
        lea     ecx, [ebx-1]
        mov     dword ptr [esp+0x14], ecx
        mov     esi, eax
        jmp     L_8707
L_8705:
        xor     esi, esi
L_8707:
        mov     ebp, dword ptr [ebp]
        test    ebp, ebp
        jz      L_8742
        cmp     ebx, edi
        mov     edx, ebx
        jc      L_8716
        mov     edx, edi
L_8716:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_8739
        mov     ecx, ebp
        lea     eax, [esi+edx*8]
        sub     ecx, esi
        inc     edx
L_8725:
        mov     edi, dword ptr [ecx+eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], edi
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_8725
L_8739:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
L_8742:
        mov     ecx, dword ptr [esp+0x1c]
        mov     dword ptr [ecx], esi
        mov     esi, dword ptr [esp+0x10]
        mov     ebp, ecx
        jmp     L_8763
L_8750:
        mov     edx, dword ptr [ebp]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp], 0
L_8763:
        mov     dword ptr [ebp+4], ebx
L_8766:
        test    ebx, ebx
        jle     L_877f
        mov     edi, dword ptr [ebp]
        mov     esi, dword ptr [esi+0x18c]
        mov     ecx, ebx
        and     ecx, 0x1fffffff
        shl     ecx, 1
        rep movsd
L_877f:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x4
    }
}
