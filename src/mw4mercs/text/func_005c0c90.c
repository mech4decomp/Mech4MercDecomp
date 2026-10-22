/*
 * FUN_005c0c90 (114 B) — __cdecl, RET. Distance-squared check returning
 * a boolean (1 if within threshold, else 0).
 *
 * Uses EBP frame; heavy FPU with memory operands (MSVC6 inline asm cannot
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c0c50(void);

__declspec(naked) void __stdcall FUN_005c0c90(void *p1, void *p2, char p3)
{
    
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        mov     dword ptr [ebp - 0x4], 0x447a0000
        jnz     skip
        call    FUN_005c0c50
        fstp    dword ptr [ebp - 0x4]
skip:
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        fld     dword ptr [eax]
        fsub    dword ptr [ecx]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [ecx + 0x4]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [ebp + 0x10]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0x8], eax
        fld     dword ptr [ebp + 0x8]
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      ret0
        mov     eax, 0x1
        mov     esp, ebp
        pop     ebp
        ret
ret0:
        xor     eax, eax
        mov     esp, ebp
        pop     ebp
        ret
    }


}
