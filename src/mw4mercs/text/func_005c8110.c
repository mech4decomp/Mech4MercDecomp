/*
 * FUN_005C8110 (561 B) — __thiscall, RET 4, void.
 * Complex logic: checks FUN_005db360(1), stores a float, validates a
 * linked-list range, does FPU math (atan2-style) and calls FUN_005c80e0
 * with 1/0/2 depending on angle comparisons.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005db360(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005dbe50(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_005c80e0(void);

__declspec(naked) void __cdecl FUN_005c8110(void *param_1, void *param_2)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        push    esi
        mov     esi, ecx
        push    1
        call    FUN_005db360
        test    al, al
        jz      l_epilogue
        push    0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x5bc]
        test    dword ptr [esi + 0x4e0], 0xfffffffc
        jz      l_ret2
        mov     ecx, [ebp + 8]
        mov     eax, [ecx]
        call    dword ptr [eax + 8]
        test    al, al
        jz      l_ret2
        mov     eax, [esi + 0x170]
        mov     ecx, [eax + 0x410]
        sub     ecx, [eax + 0x40c]
        and     ecx, 0xfffffffc
        cmp     ecx, 4
        jnz     l_ret2
        mov     edx, [eax + 0x410]
        mov     ecx, [eax + 0x40c]
        sub     edx, ecx
        sar     edx, 2
        jz      l_zero1
        mov     ecx, [ecx]
        jmp     l_after1
    l_zero1:
        xor     ecx, ecx
    l_after1:
        mov     edx, [ecx + 0x17c]
        test    edx, edx
        jz      l_ret2
        _emit   0x8B            /* __emit: mov ecx,[imm32] -> MSVC6 emits immediate load, not deref */
        _emit   0x0D
        _emit   0x84
        _emit   0x1F
        _emit   0x7F
        _emit   0x00
        push    ecx
        mov     ecx, [eax + 4]
        call    FUN_00415230
        test    al, al
        jz      l_ret2
        mov     ecx, esi
        call    FUN_005dbe50
        mov     [ebp + 8], eax
        fild    dword ptr [ebp + 8]
        push    0x48
        fstp    dword ptr [ebp + 8]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [ebp + 8]
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x41
        jz      l_ret2
        mov     ecx, esi
        call    FUN_005dbe50
        mov     [ebp + 8], eax
        fild    dword ptr [ebp + 8]
        push    0x49
        fstp    dword ptr [ebp + 8]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [ebp + 8]
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 1
        jnz     l_ret2
        lea     ecx, [esi + 0x1c8]
        call    FUN_0041fd80
        mov     eax, [eax + 0xd8]
        mov     edx, [eax + 0x8c]
        add     eax, 0x80
        mov     [ebp - 0x20], edx
        mov     ecx, [eax + 0x1c]
        mov     [ebp - 0x1c], ecx
        mov     edx, [eax + 0x2c]
        mov     eax, [esi + 0x170]
        mov     [ebp - 0x18], edx
        mov     ecx, [eax + 0x410]
        mov     edx, [eax + 0x40c]
        sub     ecx, edx
        sar     ecx, 2
        jz      l_zero2
        mov     eax, [edx]
        jmp     l_after2
    l_zero2:
        xor     eax, eax
    l_after2:
        mov     eax, [eax + 0x17c]
        mov     ecx, [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     edx, [ebp - 0x20]
        push    edx
        lea     ecx, [ebp - 0x14]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 8]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp + 8]
        fstp    dword ptr [ebp - 4]
        mov     eax, [ebp - 4]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     [ebp - 8], eax
        fld     dword ptr [ebp - 8]
        fabs
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x0C
        _emit   0x22
        _emit   0x7B
        _emit   0x00
        fcompp
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 1
        jnz     l_atan2
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0xB0
        _emit   0xC5
        _emit   0x76
        _emit   0x00
        jmp     l_angle
    l_atan2:
        mov     eax, [ebp + 8]
        mov     [ebp + 8], eax
        mov     eax, [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     [ebp - 8], eax
        fld     dword ptr [ebp - 8]
        fabs
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x0C
        _emit   0x22
        _emit   0x7B
        _emit   0x00
        fcompp
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 1
        jnz     l_fpatan
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0xB0
        _emit   0xC5
        _emit   0x76
        _emit   0x00
        jmp     l_angle
    l_fpatan:
        fld     dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0xc]
        fpatan
    l_angle:
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0xE0
        _emit   0x78
        _emit   0x78
        _emit   0x00
        fchs
        fld     st(1)
        fcompp
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 1
        jz      l_check_pos
        push    1
        fstp    st(0)
        mov     ecx, esi
        call    FUN_005c80e0
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    l_check_pos:
        _emit   0xD8            /* __emit: fcomp dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x1D
        _emit   0xE0
        _emit   0x78
        _emit   0x78
        _emit   0x00
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x41
        jnz     l_ret2
        push    0
        mov     ecx, esi
        call    FUN_005c80e0
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    l_ret2:
        push    2
        mov     ecx, esi
        call    FUN_005c80e0
    l_epilogue:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    }


}
