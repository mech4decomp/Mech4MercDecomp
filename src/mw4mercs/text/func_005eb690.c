/*
 * FUN_005EB690 (543 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Three state-machine update blocks on this+0x1e4/0x1e8/0x1ec, each
 * conditionally updating a float accumulator and a derived value
 * (this+0x204/0x208/0x20c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* extern data symbols for absolute-address FPU operands */
extern float DAT_00789868;
extern float DAT_007899f8;
extern float DAT_0076c5b0;
extern float DAT_0076d064;
extern float DAT_007899f4;
extern float DAT_007899e4;

__declspec(naked) void __fastcall FUN_005eb690(void *param)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x1e4]
        push    esi
        xor     esi, esi
        cmp     edx, 0x2
        jz      L1
        cmp     edx, 0x3
        jz      L1
        cmp     edx, 0x1
        jnz     L2
        fld     dword ptr [DAT_00789868]
        fmul    dword ptr [DAT_007899f8]
        fstp    dword ptr [ecx + 0x204]
        jmp     L3
L2:
        mov     dword ptr [ecx + 0x204], esi
        jmp     L3
L1:
        fld     dword ptr [ecx + 0x1f8]
        fsub    dword ptr [esp + 0x8]
        fst     dword ptr [ecx + 0x1f8]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L4
        mov     dword ptr [ecx + 0x1f8], esi
L4:
        cmp     edx, 0x3
        fld     dword ptr [ecx + 0x1f8]
        fdiv    dword ptr [ecx + 0x1f0]
        jnz     L5
        fsubr   dword ptr [DAT_0076d064]
L5:
        fld     dword ptr [DAT_00789868]
        fmul    dword ptr [DAT_007899f8]
        fld     dword ptr [DAT_0076d064]
        fsub    st(0), st(2)
        fmulp   st(1), st(0)
        fstp    dword ptr [ecx + 0x204]
        fstp    st(0)
        fld     dword ptr [ecx + 0x1f8]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L3
        xor     eax, eax
        cmp     edx, 0x3
        setnz   al
        mov     dword ptr [ecx + 0x1e4], eax
L3:
        mov     edx, dword ptr [ecx + 0x1e8]
        cmp     edx, 0x2
        jz      L6
        cmp     edx, 0x3
        jz      L6
        cmp     edx, 0x1
        jnz     L7
        fld     dword ptr [DAT_00789868]
        fmul    dword ptr [DAT_007899f4]
        fstp    dword ptr [ecx + 0x208]
        jmp     L8
L7:
        mov     dword ptr [ecx + 0x208], esi
        jmp     L8
L6:
        fld     dword ptr [ecx + 0x1fc]
        fsub    dword ptr [esp + 0x8]
        fst     dword ptr [ecx + 0x1fc]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L9
        mov     dword ptr [ecx + 0x1fc], esi
L9:
        cmp     edx, 0x3
        fld     dword ptr [ecx + 0x1fc]
        fdiv    dword ptr [ecx + 0x1f0]
        jnz     L10
        fsubr   dword ptr [DAT_0076d064]
L10:
        fld     dword ptr [DAT_00789868]
        fmul    dword ptr [DAT_007899f4]
        fld     dword ptr [DAT_0076d064]
        fsub    st(0), st(2)
        fmulp   st(1), st(0)
        fstp    dword ptr [ecx + 0x208]
        fstp    st(0)
        fld     dword ptr [ecx + 0x1fc]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L8
        xor     eax, eax
        cmp     edx, 0x3
        setnz   al
        mov     dword ptr [ecx + 0x1e8], eax
L8:
        mov     edx, dword ptr [ecx + 0x1ec]
        cmp     edx, 0x2
        jz      L11
        cmp     edx, 0x3
        jz      L11
        cmp     edx, 0x1
        jnz     L12
        fld     dword ptr [DAT_00789868]
        pop     esi
        fmul    dword ptr [DAT_007899e4]
        fstp    dword ptr [ecx + 0x20c]
        ret     4
L12:
        mov     edx, dword ptr [ecx + 0x19c]
        mov     dword ptr [ecx + 0x20c], edx
        pop     esi
        ret     4
L11:
        fld     dword ptr [ecx + 0x200]
        fsub    dword ptr [esp + 0x8]
        fst     dword ptr [ecx + 0x200]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L13
        mov     dword ptr [ecx + 0x200], esi
L13:
        cmp     edx, 0x3
        fld     dword ptr [ecx + 0x200]
        fdiv    dword ptr [ecx + 0x1f4]
        jnz     L14
        fsubr   dword ptr [DAT_0076d064]
L14:
        fld     dword ptr [DAT_00789868]
        fmul    dword ptr [DAT_007899e4]
        fld     dword ptr [DAT_0076d064]
        fsub    st(0), st(2)
        fmulp   st(1), st(0)
        fld     dword ptr [ecx + 0x19c]
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fstp    dword ptr [ecx + 0x20c]
        fstp    st(0)
        fld     dword ptr [ecx + 0x200]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L15
        xor     eax, eax
        cmp     edx, 0x3
        setnz   al
        mov     dword ptr [ecx + 0x1ec], eax
L15:
        pop     esi
        ret     4
    }
}
