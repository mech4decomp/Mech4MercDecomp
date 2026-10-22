/*
 * FUN_005c8de0 (144 B) — __thiscall (ECX = this), RET 4 (one float param).
 *
 * Computes an interpolated aim value. If this->[0x5d0] equals a sentinel
 * constant, calls FUN_005c8e70 for the value; otherwise uses this->[0x5d0].
 * Clamps the product against constants, then calls FUN_005c8be0 and blends.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float FUN_005c8e70(void);
extern void __stdcall FUN_005c8be0(void *a, void *b);

__declspec(naked) void __stdcall FUN_005c8de0(float param)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_0076c5b0;
extern int DAT_0076d048;
extern int DAT_0076d5ec;
__asm {
sub     esp, 0x8
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x5d0]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_8e01
        fld     dword ptr [esi + 0x5d0]
        jmp     L_8e08
    L_8e01:
        mov     ecx, esi
        call    FUN_005c8e70
    L_8e08:
        fmul    dword ptr [esp + 0x10]
        fst     dword ptr [esp + 0x10]
        fcomp dword ptr [DAT_0076d048]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_8e27
        mov     dword ptr [esp + 0x10], 0x42c80000
        jmp     L_8e40
    L_8e27:
        fld     dword ptr [esp + 0x10]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_8e40
        mov     dword ptr [esp + 0x10], 0x0
    L_8e40:
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, esi
        call    FUN_005c8be0
        fld     dword ptr [esp + 0x8]
        fsub    dword ptr [esp + 0x4]
        pop     esi
        fld     dword ptr [esp + 0xc]
        fmul dword ptr [DAT_0076d5ec]
        fmulp   st(1), st(0)
        __emit 0xD8 /* __emit: MSVC6 drops the +0 displacement on fadd dword ptr [esp+0] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        add     esp, 0x8
        ret     0x4
    }


}
