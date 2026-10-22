/*
 * FUN_005fa120 (479 B) — __thiscall, two stack args (param_1, param_2).
 * Iterates an array of entries (this+0x40c .. this+0x410); for each entry
 * with byte [esi+0x21c] set, computes two 3-vector transforms via
 * FUN_0041c830 (from FUN_005eaec0/FUN_005eaee0 outputs), then does FPU
 * angle math (fpatan, fabs, fcom/fcomp against globals) to clamp values
 * into [esi+0x1c8]/[esi+0x1cc]. Finally FUN_004fae10(param_1,param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_007b220c;
extern float DAT_0076d064;
extern float DAT_0076c5b0;
extern double DAT_0078ac10;
extern double DAT_0078ac08;

extern void FUN_005eaec0(void);
extern void FUN_005eaee0(void);
extern void FUN_005eaf10(void);
extern void FUN_005eaf00(void);
extern void FUN_0041c830(void);
extern void FUN_004fae10(void);

__declspec(naked) void FUN_005fa120(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp+0x410]
        push    edi
        mov     edi, dword ptr [ebp+0x40c]
        cmp     edi, ebx
        jz      L_a2e5
        push    esi
    L_a13d:
        mov     esi, dword ptr [edi]
        mov     al, byte ptr [esi+0x21c]
        test    al, al
        jz      L_a2d9
        mov     eax, dword ptr [esi+0x210]
        mov     dword ptr [esp+0x14], eax
        mov     ecx, dword ptr [esi+0x214]
        mov     dword ptr [esp+0x18], ecx
        mov     edx, dword ptr [esi+0x218]
        mov     ecx, esi
        mov     dword ptr [esp+0x1c], edx
        call    FUN_005eaec0
        push    eax
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x34]
        call    FUN_0041c830
        mov     ecx, esi
        call    FUN_005eaee0
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x28]
        call    FUN_0041c830
        fld     dword ptr [esp+0x28]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_a239
        fld     dword ptr [esp+0x24]
        fld     dword ptr [esp+0x28]
        fpatan
        fst     dword ptr [esp+0x10]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_a239
        mov     ecx, esi
        call    FUN_005eaf10
        fcomp   dword ptr [esp+0x10]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_a1e9
        fld     dword ptr [DAT_0076d064]
        jmp     L_a203
    L_a1e9:
        mov     ecx, esi
        call    FUN_005eaf10
        fdivr   dword ptr [esp+0x10]
        fcom    dword ptr [DAT_0076c5b0]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_a203
        fchs
    L_a203:
        fld     dword ptr [esp+0x10]
        fcomp   qword ptr [DAT_0078ac10]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_a21e
        fld     st(0)
        fchs
        fstp    dword ptr [esi+0x1cc]
    L_a21e:
        fld     dword ptr [esp+0x10]
        fcomp   qword ptr [DAT_0078ac08]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_a237
        fstp    dword ptr [esi+0x1cc]
        jmp     L_a239
    L_a237:
        fstp    st(0)
    L_a239:
        fld     dword ptr [esp+0x34]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_a2d9
        fld     dword ptr [esp+0x2c]
        fld     dword ptr [esp+0x34]
        fpatan
        fst     dword ptr [esp+0x10]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_a2d9
        mov     ecx, esi
        call    FUN_005eaf00
        fcomp   dword ptr [esp+0x10]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_a28b
        fld     dword ptr [DAT_0076d064]
        jmp     L_a2a5
    L_a28b:
        mov     ecx, esi
        call    FUN_005eaf00
        fdivr   dword ptr [esp+0x10]
        fcom    dword ptr [DAT_0076c5b0]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_a2a5
        fchs
    L_a2a5:
        fld     dword ptr [esp+0x10]
        fcomp   qword ptr [DAT_0078ac10]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_a2bc
        fst     dword ptr [esi+0x1c8]
    L_a2bc:
        fld     dword ptr [esp+0x10]
        fcomp   qword ptr [DAT_0078ac08]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_a2d7
        fchs
        fstp    dword ptr [esi+0x1c8]
        jmp     L_a2d9
    L_a2d7:
        fstp    st(0)
    L_a2d9:
        add     edi, 0x4
        cmp     edi, ebx
        jnz     L_a13d
        pop     esi
    L_a2e5:
        mov     edx, dword ptr [esp+0x3c]
        mov     eax, dword ptr [esp+0x38]
        push    edx
        push    eax
        mov     ecx, ebp
        call    FUN_004fae10
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x8
    }
}
