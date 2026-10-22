/*
 * FUN_00682E30 (103 B) — Linked-list traversal counting elements whose
 * interpolated value (param_2..param_3) satisfies a comparison.
 *
 * Walks a singly-linked list at param_1+0x3F8. For each node, calls
 * FUN_005ef700 (this=node), FUN_00707e70(0), FUN_005ef710 (this=node),
 * and counts nodes where the FPU comparison passes.
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ef700(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005ef710(void);

__declspec(naked) int __cdecl FUN_00682e30(int param_1, double param_2, double param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax + 0x3f8]
        push    edi
        xor     ebx, ebx
    l_top:
        test    esi, esi
        jz      l_done
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      l_done
        mov     ecx, edi
        call    FUN_005ef700
        fld     qword ptr [ebp + 0x14]
        fsub    qword ptr [ebp + 0xc]
        push    0x0
        fmulp   st(1), st(0)
        fadd    qword ptr [ebp + 0xc]
        fstp    qword ptr [esp + 0x14]
        call    FUN_00707e70
        mov     ecx, edi
        fstp    qword ptr [esp + 0x18]
        call    FUN_005ef710
        fadd    qword ptr [esp + 0x10]
        fcomp   qword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jz      l_top
        inc     ebx
        jmp     l_top
    l_done:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
