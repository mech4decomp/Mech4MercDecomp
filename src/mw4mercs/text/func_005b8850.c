/*
 * FUN_005b8850 (201 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Finds the closest point in a vertex array to a query point and copies it
 * out. Uses FPU stack for squared-distance comparison.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005b8850(void)
{
    
__asm {
mov     edx, dword ptr [ecx + 0x16c]
        push    ebp
        mov     ebp, dword ptr [ecx + 0x168]
        mov     ecx, dword ptr [ecx + 0x168]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        fld     dword ptr [esi]
        sub     edx, ebp
        fsub    dword ptr [ecx]
        mov     eax, 0x2aaaaaab
        fld     dword ptr [esi + 0x4]
        imul    edx
        fsub    dword ptr [ecx + 0x4]
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fld st(0)
        fmul    st, st(1)
        fld st(2)
        sar     edx, 1
        fmul    st, st(3)
        mov     eax, edx
        shr     eax, 0x1f
        push    edi
        faddp   st(1), st(0)
        add     edx, eax
        fld st(3)
        mov     edi, 1
        fmul    st, st(4)
        xor     ebp, ebp
        cmp     edx, edi
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x14]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        jle     L_88f8
        push    ebx
        lea     ebx, [ecx + 0xc]
    L_88b4:
        fld     dword ptr [esi]
        fsub    dword ptr [ebx]
        fld     dword ptr [esi + 0x4]
        fsub    dword ptr [ebx + 0x4]
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [ebx + 0x8]
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
        fcom    dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        jz      L_88ed
        fstp    dword ptr [esp + 0x18]
        mov     ebp, edi
        jmp     L_88ef
    L_88ed:
        fstp    st(0)
    L_88ef:
        inc     edi
        add     ebx, 0xc
        cmp     edi, edx
        jl      L_88b4
        pop     ebx
    L_88f8:
        mov     eax, dword ptr [esp + 0x10]
        lea     edx, [ebp + ebp*2]
        lea     ecx, [ecx + edx*4]
        mov     edx, dword ptr [ecx]
        pop     edi
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        pop     esi
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        pop     ebp
        ret     8
    }


}
