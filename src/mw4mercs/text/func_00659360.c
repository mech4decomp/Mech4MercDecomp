/*
 * FUN_00659360 (357 B) — ABL tree-node vector resize/insert (__thiscall).
 * Grows the element buffer (realloc via FUN_004084d0 / FUN_004084e0),
 * shifts elements, and updates the begin/end/capacity pointers. RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int n);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00659360(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp+0x10]
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp+0xc]
        push    esi
        mov     esi, dword ptr [ebp+0x1c]
        mov     edx, esi
        sub     edx, ebx
        sar     edx, 2
        inc     edx
        push    edi
        lea     edi, [edx+eax*1]
        mov     eax, dword ptr [ebp+0x24]
        lea     ecx, [edi+edi*1]
        cmp     eax, ecx
        mov     dword ptr [esp+0x10], edx
        jbe     L_f6

        mov     cl, byte ptr [esp+0x24]
        sub     eax, edi
        mov     edi, dword ptr [esp+0x20]
        shr     eax, 1
        neg     cl
        sbb     ecx, ecx
        and     ecx, edi
        add     eax, ecx
        mov     ecx, dword ptr [ebp+0x20]
        lea     edi, [ecx+eax*4]
        cmp     edi, ebx
        jnc     L_ce
        sub     esi, ebx
        add     esi, 4
        sar     esi, 2
        test    esi, esi
        mov     eax, edi
        jle     L_96
        sub     ebx, edi
L_be:
        mov     ecx, dword ptr [ebx+eax*1]
        mov     dword ptr [eax], ecx
        add     eax, 4
        dec     esi
        jnz     L_be
        jmp     L_96

L_ce:
        add     esi, 4
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 2
        test    eax, eax
        lea     ecx, [edi+edx*4]
        jle     L_96
        sub     esi, ecx
L_e5:
        mov     ebx, dword ptr [esi+ecx*1-4]
        sub     ecx, 4
        dec     eax
        mov     dword ptr [ecx], ebx
        jnz     L_e5
        jmp     L_96

L_f6:
        mov     edx, dword ptr [esp+0x20]
        cmp     dword ptr [ebp+0x24], edx
        lea     ecx, [ebp+0x24]
        jnc     L_06
        lea     ecx, [esp+0x20]
L_06:
        mov     ecx, dword ptr [ecx]
        lea     eax, [eax+ecx*1+2]
        test    eax, eax
        mov     dword ptr [esp+0x18], eax
        jz      L_32
        /* __emit: no-base SIB lea [eax*4+0]; MSVC6 rejects base-less [reg*4] */
        __emit  0x8D
        __emit  0x14
        __emit  0x85
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [esp+0x18], eax
        mov     eax, dword ptr [esp+0x1c]
        add     esp, 4
        jmp     L_3e
L_32:
        mov     edx, dword ptr [esp+0x10]
        mov     dword ptr [esp+0x14], 0

L_3e:
        mov     cl, byte ptr [esp+0x24]
        sub     eax, edi
        mov     edi, dword ptr [esp+0x20]
        shr     eax, 1
        neg     cl
        sbb     ecx, ecx
        and     ecx, edi
        sub     esi, ebx
        add     eax, ecx
        mov     ecx, dword ptr [esp+0x14]
        add     esi, 4
        sar     esi, 2
        test    esi, esi
        lea     edi, [ecx+eax*4]
        mov     eax, edi
        jle     L_74
        sub     ebx, edi
L_69:
        mov     ecx, dword ptr [ebx+eax*1]
        mov     dword ptr [eax], ecx
        add     eax, 4
        dec     esi
        jnz     L_69

L_74:
        mov     eax, dword ptr [ebp+0x20]
        test    eax, eax
        jz      L_88
        push    eax
        call    FUN_004084e0
        mov     edx, dword ptr [esp+0x14]
        add     esp, 4
L_88:
        mov     eax, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0x18]
        mov     dword ptr [ebp+0x20], eax
        mov     dword ptr [ebp+0x24], ecx

L_96:
        mov     eax, dword ptr [edi]
        mov     dword ptr [ebp+0xc], edi
        lea     edi, [edi+edx*4-4]
        mov     dword ptr [ebp+0x1c], edi
        mov     edi, dword ptr [edi]
        mov     dword ptr [ebp+4], eax
        mov     dword ptr [ebp+0x14], edi
        add     eax, 0x200
        add     edi, 0x200
        mov     dword ptr [ebp+8], eax
        mov     dword ptr [ebp+0x18], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     8
    }
}
