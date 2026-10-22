/*
 * FUN_004f8600 (182 B) — __thiscall. Twin of FUN_004f8540 but the
 * growable array lives at [this+0x194] (count at [this+0x198]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004f8600(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp+8]
        push    ebx
        mov     ebx, dword ptr [eax+4]
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebp, dword ptr [edi+0x198]
        cmp     ebx, ebp
        jz      L_8692
        xor     esi, esi
        cmp     ebx, esi
        jbe     L_8677
        lea     ecx, [ebx*8]
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, esi
        jz      L_863b
        lea     edx, [ebx-1]
        mov     dword ptr [esp+0x10], edx
        mov     esi, eax
L_863b:
        mov     ecx, dword ptr [edi+0x194]
        test    ecx, ecx
        jz      L_8686
        cmp     ebx, ebp
        mov     edx, ebx
        jc      L_864d
        mov     edx, ebp
L_864d:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_866e
        lea     eax, [esi+edx*8]
        sub     ecx, esi
        inc     edx
L_865a:
        mov     ebp, dword ptr [ecx+eax]
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], ebp
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_865a
L_866e:
        mov     eax, dword ptr [edi+0x194]
        push    eax
        jmp     L_867e
L_8677:
        mov     ecx, dword ptr [edi+0x194]
        push    ecx
L_867e:
        call    FUN_004084e0
        add     esp, 4
L_8686:
        mov     dword ptr [edi+0x194], esi
        mov     dword ptr [edi+0x198], ebx
L_8692:
        test    ebx, ebx
        jle     L_86ae
        mov     edx, dword ptr [esp+0x18]
        mov     edi, dword ptr [edi+0x194]
        mov     esi, dword ptr [edx]
        mov     ecx, ebx
        and     ecx, 0x1fffffff
        shl     ecx, 1
        rep movsd
L_86ae:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
