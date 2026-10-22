/*
 * FUN_005b8920 (179 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Finds the index of the closest point in a vertex array to a query point.
 * Returns the index (0 if the array has fewer than 2 points).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005b8920(void)
{
    
__asm {
mov     edx, dword ptr [ecx + 0x16c]
        push    ebx
        sub     edx, dword ptr [ecx + 0x168]
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     eax, dword ptr [ecx + 0x168]
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, 1
        fld     dword ptr [ecx]
        xor     ebx, ebx
        cmp     edx, esi
        fsub    dword ptr [eax]
        fld     dword ptr [ecx + 0x4]
        fsub    dword ptr [eax + 0x4]
        fld     dword ptr [ecx + 0x8]
        fsub    dword ptr [eax + 0x8]
        fld st(0)
        fmul    st, st(1)
        fld st(2)
        fmul    st, st(3)
        faddp   st(1), st(0)
        fld st(3)
        fmul    st, st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0xc]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        jle     L_89cc
        push    edi
        lea     edi, [eax + 0xc]
    L_8981:
        fld     dword ptr [ecx]
        fsub    dword ptr [edi]
        fld     dword ptr [ecx + 0x4]
        fsub    dword ptr [edi + 0x4]
        fld     dword ptr [ecx + 0x8]
        fsub    dword ptr [edi + 0x8]
        fld st(0)
        fmul    st, st(1)
        fld st(2)
        fmul    st, st(3)
        faddp   st(1), st(0)
        fld st(3)
        fmul    st, st(4)
        faddp   st(1), st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        jz      L_89ba
        fstp    dword ptr [esp + 0x10]
        mov     ebx, esi
        jmp     L_89bc
    L_89ba:
        fstp    st(0)
    L_89bc:
        inc     esi
        add     edi, 0xc
        cmp     esi, edx
        jl      L_8981
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     4
    L_89cc:
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     4
    }


}
