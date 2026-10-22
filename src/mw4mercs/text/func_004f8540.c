/*
 * FUN_004f8540 (182 B) — __thiscall. Resizes a growable array of 8-byte
 * elements stored at [this+0x18c] (count at [this+0x190]): allocates a
 * new buffer, copies the min(old,new) elements, frees the old, then
 * memcpy's new data in.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004f8540(void)
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
        mov     ebp, dword ptr [edi+0x190]
        cmp     ebx, ebp
        jz      L_85d2
        xor     esi, esi
        cmp     ebx, esi
        jbe     L_85b7
        lea     ecx, [ebx*8]
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, esi
        jz      L_857b
        lea     edx, [ebx-1]
        mov     dword ptr [esp+0x10], edx
        mov     esi, eax
L_857b:
        mov     ecx, dword ptr [edi+0x18c]
        test    ecx, ecx
        jz      L_85c6
        cmp     ebx, ebp
        mov     edx, ebx
        jc      L_858d
        mov     edx, ebp
L_858d:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_85ae
        lea     eax, [esi+edx*8]
        sub     ecx, esi
        inc     edx
L_859a:
        mov     ebp, dword ptr [ecx+eax]
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], ebp
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_859a
L_85ae:
        mov     eax, dword ptr [edi+0x18c]
        push    eax
        jmp     L_85be
L_85b7:
        mov     ecx, dword ptr [edi+0x18c]
        push    ecx
L_85be:
        call    FUN_004084e0
        add     esp, 4
L_85c6:
        mov     dword ptr [edi+0x18c], esi
        mov     dword ptr [edi+0x190], ebx
L_85d2:
        test    ebx, ebx
        jle     L_85ee
        mov     edx, dword ptr [esp+0x18]
        mov     edi, dword ptr [edi+0x18c]
        mov     esi, dword ptr [edx]
        mov     ecx, ebx
        and     ecx, 0x1fffffff
        shl     ecx, 1
        rep movsd
L_85ee:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
