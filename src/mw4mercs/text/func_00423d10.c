/*
 * FUN_00423d10 (126 B) — __thiscall MLR buffer-resize helper (16-byte elems)
 * that also initializes each new element to -1.0f (0xbf800000).
 * this->[0] = owned buffer ptr, this->[4] = element count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void *__cdecl FUN_004084d0(int);

__declspec(naked) void FUN_00423d10(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        push    edi
        mov     edi, ecx
        cmp     esi, dword ptr [edi+4]
        jz      L_d89
        test    esi, esi
        jbe     L_d78
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_d30
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_d30:
        mov     eax, esi
        shl     eax, 4
        push    eax
        mov     dword ptr [edi+4], esi
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_d6f
        lea     edx, [esi-1]
        test    edx, edx
        jl      L_d71
        lea     esi, [edx+1]
        lea     ecx, [eax+4]
        mov     edx, 0xbf800000
    L_d57:
        mov     dword ptr [ecx+4], edx
        mov     dword ptr [ecx], edx
        mov     dword ptr [ecx-4], edx
        mov     dword ptr [ecx+8], edx
        add     ecx, 0x10
        dec     esi
        jnz     L_d57
        mov     dword ptr [edi], eax
        pop     edi
        pop     esi
        ret     4
    L_d6f:
        xor     eax, eax
    L_d71:
        mov     dword ptr [edi], eax
        pop     edi
        pop     esi
        ret     4
    L_d78:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
    L_d89:
        pop     edi
        pop     esi
        ret     4
    }
}
