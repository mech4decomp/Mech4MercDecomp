/*
 * DATA block @ 0x6A7000 (336 B) - two functions:
 *   - 0x6A7000: __thiscall destructor (ECX=this), RET 4. Sets vtable 0x795450,
 *     conditionally calls FUN_004084e0 when [esp+4]&1.
 *   - 0x6A7020: __thiscall (ECX=this), RET 0xC. Reads a global flag, dispatches
 *     through a vtable method, copies 0xc dwords, computes a vector length /
 *     normalized direction with FPU, compares against global constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_00415020(void);

extern float g_76c5b0;
extern float g_76d064;
extern float g_76d070;
extern float g_77a198;
extern unsigned char g_82db28;

__declspec(naked) void FUN_006A7000(void)
{
    __asm {
        /* --- function A: destructor, RET 4 --- */
        test    byte ptr [esp + 4], 1
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x795450
        je      L7019
        push    esi
        call    FUN_004084e0
        add     esp, 4
L7019:
        mov     eax, esi
        pop     esi
        ret     4
        nop

        /* --- function B: RET 0xC --- */
L7020:
        mov     al, byte ptr [g_82db28]
        sub     esp, 0x48
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0x50]
        push    esi
        cmp     al, 1
        mov     eax, dword ptr [ecx]
        push    edi
        jne     L704b
        lea     edx, [esp + 0x24]
        push    edx
        call    dword ptr [eax + 0xb0]
        mov     ecx, 0xc
        mov     esi, eax
        jmp     L705f
L704b:
        call    dword ptr [eax + 0x34]
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
L705f:
        mov     eax, dword ptr [esp + 0x60]
        fld     dword ptr [eax]
        lea     edi, [esp + 0x24]
        rep movsd
        fsub    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [eax + 4]
        fsub    dword ptr [esp + 0x40]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 8]
        fsub    dword ptr [esp + 0x50]
        fst     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L70bd
L70ae:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x48
        ret     0xc
L70bd:
        lea     ecx, [esp + 0xc]
        call    FUN_0040cb00
        fsqrt
        fdivr   dword ptr [g_76d064]
        fld     st(0)
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x4c]
        fxch    st(3)
        fmul    st(0), st(3)
        fld     dword ptr [esp + 0x1c]
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x18]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fadd    dword ptr [g_76d064]
        fmul    dword ptr [g_76d070]
        fcomp   dword ptr [g_77a198]
        fxch    st(2)
        fstp    st(0)
        fxch    st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jne     L7141
        cmp     byte ptr [ebp + 4], 1
        jne     L70ae
        call    FUN_00415020
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x48
        ret     0xc
L7141:
        fld     dword ptr [g_76c5b0]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x48
        ret     0xc
    }
}
