/*
 * FUN_004811a0 (175 B) — __thiscall array-resize helper (MLR).
 * Reallocates a dword array: allocates new buffer of `param_1*4` bytes,
 * zero-fills it, copies min(old,new) elements from the old buffer, frees
 * the old buffer, and stores the new pointer/size. If new size is 0,
 * frees the old buffer and nulls it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_004811a0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x10]
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi+4]
        cmp     ebp, ebx
        mov     dword ptr [esp+0xc], edi
        jz      L_481248
        test    ebp, ebp
        jbe     L_481234
        lea     eax, [ebp*4]
        push    esi
        push    eax
        call    FUN_004084d0
        mov     edx, eax
        add     esp, 4
        test    edx, edx
        jz      L_4811ec
        lea     eax, [ebp-1]
        test    eax, eax
        jl      L_4811e8
        lea     ecx, [eax+1]
        xor     eax, eax
        mov     edi, edx
        rep stosd
        mov     edi, dword ptr [esp+0x10]
L_4811e8:
        mov     esi, edx
        jmp     L_4811ee
L_4811ec:
        xor     esi, esi
L_4811ee:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jz      L_481221
        cmp     ebp, ebx
        mov     ecx, ebp
        jc      L_4811fc
        mov     ecx, ebx
L_4811fc:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_481218
        mov     edx, edi
        lea     eax, [esi+ecx*4]
        sub     edx, esi
        inc     ecx
L_48120b:
        mov     ebx, dword ptr [edx+eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_48120b
L_481218:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_481221:
        mov     eax, dword ptr [esp+0x10]
        mov     edi, eax
        mov     dword ptr [eax], esi
        pop     esi
        mov     dword ptr [edi+4], ebp
        pop     edi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
L_481234:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
        mov     dword ptr [edi+4], ebp
L_481248:
        pop     edi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }
}
