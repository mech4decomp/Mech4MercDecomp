/*
 * FUN_10041b14 (140 B) - __cdecl.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10041a75(void);   /* rel32 call */
extern void __cdecl FUN_10041abe(void);   /* rel32 call */

__declspec(naked) void FUN_10041b14(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        mov     eax, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        push    edi
        lea     edi, [eax - 1]
        push    0x20
        pop     ecx
        and     dword ptr [ebp - 4], 0
        lea     ebx, [edi + 1]
        push    0x20
        mov     eax, ebx
        pop     esi
        cdq
        idiv    ecx
        push    0x1f
        mov     ecx, eax
        mov     eax, ebx
        cdq
        idiv    esi
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        push    1
        mov     dword ptr [ebp - 8], ecx
        lea     eax, [eax + ecx*4]
        mov     dword ptr [ebp + 0xc], eax
        sub     esi, edx
        pop     edx
        mov     ecx, esi
        shl     edx, cl
        test    dword ptr [eax], edx
        jz      L_78
        inc     ebx
        push    ebx
        push    dword ptr [ebp + 8]
        call    FUN_10041a75
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_75
        push    edi
        push    dword ptr [ebp + 8]
        call    FUN_10041abe
        pop     ecx
        mov     dword ptr [ebp - 4], eax
        pop     ecx
L_75:
        mov     eax, dword ptr [ebp + 0xc]
L_78:
        or      edx, 0xffffffff
        mov     ecx, esi
        shl     edx, cl
        push    3
        pop     ecx
        and     dword ptr [eax], edx
        mov     eax, dword ptr [ebp - 8]
        inc     eax
        cmp     eax, ecx
        jge     L_98
        mov     edx, dword ptr [ebp + 8]
        sub     ecx, eax
        lea     edi, [edx + eax*4]
        xor     eax, eax
        rep stosd
L_98:
        mov     eax, dword ptr [ebp - 4]
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
