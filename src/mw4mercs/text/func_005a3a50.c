/*
 * FUN_005a3a50 (309 B) — Internal Structure armor application.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: int index, float value).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005f07c0(void);
extern int __fastcall FUN_00416b60(void *param);
extern int __fastcall FUN_005fbe90(int param);

__declspec(naked) int __fastcall FUN_005a3a50(void)
{
    

extern int DAT_007b220c;
extern int DAT_0076c5b0;
extern int DAT_0076d064;
__asm {
push    esi
        push    edi
        mov     esi, ecx
        call    FUN_005f07c0
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     ecx, [eax + 0x370]
        call    FUN_00416b60
        mov     edi, eax
        test    edi, edi
        jz      L_return_0
        fild    dword ptr [esi + 0x17c]
        mov     ecx, dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x10]
        fld     st(0)
        fadd    dword ptr [esi + ecx*4 + 0x180]
        fsub    dword ptr [edi + 0x1c]

        fcomp dword ptr [DAT_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_else_gt
        fstp    st(0)
        fld     dword ptr [esi + ecx*4 + 0x180]
        fcomp   dword ptr [edi + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_return_0
        mov     edx, dword ptr [edi + 0x1c]
        mov     dword ptr [esi + ecx*4 + 0x180], edx
L_return_0:
        pop     edi
        xor     al, al
        pop     esi
        ret     8
L_else_gt:
        fadd    dword ptr [esi + ecx*4 + 0x180]

        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_else_below
        fld     dword ptr [esi + ecx*4 + 0x180]
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 1
        jz      L_return_0
        pop     edi
        mov     dword ptr [esi + ecx*4 + 0x180], 0x3f800000
        xor     al, al
        pop     esi
        ret     8
L_else_below:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, eax
        call    FUN_005fbe90
        test    al, al
        jz      L_return_0
        fild    dword ptr [esi + 0x17c]
        mov     ecx, dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + ecx*4 + 0x180]

        fcom dword ptr [DAT_0076c5b0]
        fst     dword ptr [esi + ecx*4 + 0x180]
        fnstsw  ax
        test    ah, 1
        jz      L_check_upper2
        fstp    st(0)
        mov     dword ptr [esi + ecx*4 + 0x180], 0
        jmp     L_after_clamp
L_check_upper2:
        fcomp   dword ptr [edi + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_after_clamp
        mov     edx, dword ptr [edi + 0x1c]
        mov     dword ptr [esi + ecx*4 + 0x180], edx
L_after_clamp:
        fld     dword ptr [esp + 0x10]
        mov     ecx, esi
        fadd    dword ptr [esi + 0x1b0]
        fstp    dword ptr [esi + 0x1b0]
        call    FUN_005f07c0
        fld     dword ptr [esp + 0x10]
        pop     edi
        fadd    dword ptr [eax + 0x3b8]
        pop     esi
        fstp    dword ptr [eax + 0x3b8]
        mov     al, 1
        ret     8
    }


}
