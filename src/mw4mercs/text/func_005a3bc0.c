/*
 * FUN_005a3bc0 (262 B) — Internal Structure armor scaling.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: int type).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005f07c0(void);
extern int __fastcall FUN_00416b60(void *param);

__declspec(naked) int __fastcall FUN_005a3bc0(void)
{
    

extern int DAT_0076d064;
__asm {
push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        fild    dword ptr [esi + 0x17C]
        mov     edi, dword ptr [esp + 0x10]
        mov     ecx, edi
        sub     ecx, 0
        jz      L_case_0
        dec     ecx
        jz      L_case_1
        dec     ecx
        jz      L_case_2
        pop     edi
        fstp    st(0)
        or      eax, -1
        pop     esi
        pop     ecx
        ret     4
L_case_2:
        mov     ecx, dword ptr [eax + 0x50]
        mov     dword ptr [esi + 0x17c], ecx
        jmp     L_after_switch
L_case_1:
        mov     edx, dword ptr [eax + 0x54]
        mov     dword ptr [esi + 0x17c], edx
        jmp     L_after_switch
L_case_0:
        mov     eax, dword ptr [eax + 0x4c]
        mov     dword ptr [esi + 0x17c], eax
L_after_switch:
        fidivr  dword ptr [esi + 0x17C]
        lea     eax, [esi + 0x180]
        mov     ecx, 9
L_scale_loop:
        fld     st(0)
        add     eax, 4
        dec     ecx
        fmul    dword ptr [eax - 4]
        fstp    dword ptr [eax - 4]
        jnz     L_scale_loop

        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_done
        mov     dword ptr [esp + 8], 0
L_clamp_loop:
        mov     ecx, esi
        call    FUN_005f07c0
        lea     ecx, [esp + 8]
        add     eax, 0x370
        push    ecx
        mov     ecx, eax
        call    FUN_00416b60
        mov     edx, dword ptr [esp + 8]
        fld     dword ptr [esi + edx*4 + 0x180]
        mov     ecx, eax
        fcomp   dword ptr [ecx + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_skip_clamp
        fld     dword ptr [esi + edx*4 + 0x180]
        mov     eax, dword ptr [ecx + 0x1c]
        fsub    dword ptr [ecx + 0x1c]
        mov     ecx, esi
        fidiv   dword ptr [esi + 0x17C]
        mov     dword ptr [esi + edx*4 + 0x180], eax
        fstp    dword ptr [esp + 0x10]
        call    FUN_005f07c0
        fld     dword ptr [eax + 0x3B8]
        fsub    dword ptr [esp + 0x10]
        fstp    dword ptr [eax + 0x3b8]
        mov     edx, dword ptr [esp + 8]
L_skip_clamp:
        inc     edx
        cmp     edx, 8
        mov     dword ptr [esp + 8], edx
        jle     L_clamp_loop
L_done:
        mov     dword ptr [esi + 0x1a4], edi
        pop     edi
        mov     eax, 1
        pop     esi
        pop     ecx
        ret     4
    }


}
