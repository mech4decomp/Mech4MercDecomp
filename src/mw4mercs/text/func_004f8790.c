/*
 * FUN_004f8790 (201 B) — __thiscall. Twin of FUN_004f86c0 but the
 * growable array lives at [this+0x194] (count at [this+0x198]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004f8790(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x14]
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi+0x198]
        push    edi
        mov     edi, dword ptr [ebp+4]
        cmp     ebx, edi
        mov     dword ptr [esp+0x10], esi
        jz      L_8836
        test    ebx, ebx
        jbe     L_8820
        lea     eax, [ebx*8]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_87d5
        lea     ecx, [ebx-1]
        mov     dword ptr [esp+0x14], ecx
        mov     esi, eax
        jmp     L_87d7
L_87d5:
        xor     esi, esi
L_87d7:
        mov     ebp, dword ptr [ebp]
        test    ebp, ebp
        jz      L_8812
        cmp     ebx, edi
        mov     edx, ebx
        jc      L_87e6
        mov     edx, edi
L_87e6:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_8809
        mov     ecx, ebp
        lea     eax, [esi+edx*8]
        sub     ecx, esi
        inc     edx
L_87f5:
        mov     edi, dword ptr [ecx+eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], edi
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_87f5
L_8809:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
L_8812:
        mov     ecx, dword ptr [esp+0x1c]
        mov     dword ptr [ecx], esi
        mov     esi, dword ptr [esp+0x10]
        mov     ebp, ecx
        jmp     L_8833
L_8820:
        mov     edx, dword ptr [ebp]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp], 0
L_8833:
        mov     dword ptr [ebp+4], ebx
L_8836:
        test    ebx, ebx
        jle     L_884f
        mov     edi, dword ptr [ebp]
        mov     esi, dword ptr [esi+0x194]
        mov     ecx, ebx
        and     ecx, 0x1fffffff
        shl     ecx, 1
        rep movsd
L_884f:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x4
    }
}
