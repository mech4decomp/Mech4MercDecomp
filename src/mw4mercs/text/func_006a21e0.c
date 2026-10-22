/*
 * FUN_006a21e0 (68 B) - Reference-counted pointer release.
 *
 * __fastcall (ECX = this). Reads a tagged pointer at [this]; based on
 * low tag bits, calls a virtual release method (vtable+0xC) with arg 3
 * or 1, then clears [this] to 0.
 *
 * RET (no stack cleanup).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006a21e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi]
        mov     eax, ecx
        and     eax, 1
        cmp     al, 1
        jnz     L_221c
        mov     edx, ecx
        and     edx, 2
        cmp     dl, 2
        jnz     L_220e
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L_221c
        mov     eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax + 0xc]
        mov     dword ptr [esi], 0
        pop     esi
        ret
L_220e:
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L_221c
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 0xc]
L_221c:
        mov     dword ptr [esi], 0
        pop     esi
        ret
    }
}
