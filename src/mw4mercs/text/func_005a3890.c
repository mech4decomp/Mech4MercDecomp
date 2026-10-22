/*
 * FUN_005a3890 (447 B) — Internal Structure damage processing.
 *
 * __fastcall (ECX = this), returns AL=1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005f07c0(void);
extern int __fastcall FUN_00416b60(void *param);

__declspec(naked) int __fastcall FUN_005a3890(void)
{
    

extern int DAT_0076c5b0;
__asm {
sub     esp, 0x34

        fld dword ptr [DAT_0076c5b0]
        push    esi
        mov     esi, ecx
        mov     ecx, 9
        push    edi
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x10], 0
        lea     eax, [esi + 0x180]
        mov     dword ptr [esp + 8], ecx
L_loop1:
        fadd    dword ptr [eax]
        mov     dword ptr [eax], 0
        add     eax, 4
        dec     ecx
        jnz     L_loop1
        mov     eax, dword ptr [esi + 0x78]
        fstp    dword ptr [esp + 0x14]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [eax + 0x38]
        mov     edx, ecx
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [eax + 0x34]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, ecx
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [eax + 0x3c]
        mov     dword ptr [esp + 0x28], edx
        mov     edx, ecx
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [eax + 0x40]
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [eax + 0x48]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x38], edx
        call    FUN_005f07c0
        lea     edi, [eax + 0x370]
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 8
        call    FUN_00416b60
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax + 0x1c]
        xor     eax, eax
        mov     dword ptr [esi + 0x1a0], ecx
        fstp    dword ptr [esp + 0x14]
        mov     dword ptr [esp + 8], eax
L_loop2:
        fld     dword ptr [esp + 0x14]
        lea     edx, [esp + 8]
        fmul    dword ptr [esp + eax*4 + 0x1c]
        push    edx
        mov     ecx, edi
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00416b60
        fld     dword ptr [esp + 0x18]
        mov     ecx, eax
        fcom    dword ptr [ecx + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_skip_add
        fld     st(0)
        fsub    dword ptr [ecx + 0x1c]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
L_skip_add:

        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_check_upper
        fstp    st(0)

        fld dword ptr [DAT_0076c5b0]
        jmp     L_store
L_check_upper:
        fcom    dword ptr [ecx + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_store
        fstp    st(0)
        fld     dword ptr [ecx + 0x1c]
L_store:
        mov     eax, dword ptr [esp + 8]
        fld     st(0)
        fstp    dword ptr [esi + eax*4 + 0x180]
        inc     eax
        cmp     eax, 8
        fadd    dword ptr [esp + 0x10]
        mov     dword ptr [esp + 8], eax
        fstp    dword ptr [esp + 0x10]
        jl      L_loop2
        mov     dword ptr [esp + 8], 7
L_loop3:
        lea     eax, [esp + 8]
        push    eax
        mov     ecx, edi
        call    FUN_00416b60
        fld     dword ptr [esp + 0xC]
        fld     dword ptr [esp + 0xC]
        mov     ecx, eax
        fcomp   dword ptr [ecx + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_skip_sub2
        fld     dword ptr [esp + 0xC]
        fsub    dword ptr [ecx + 0x1c]
        fstp    dword ptr [esp + 0xc]
        jmp     L_check_bounds2
L_skip_sub2:
        mov     dword ptr [esp + 0xc], 0
L_check_bounds2:

        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_check_upper2
        fstp    st(0)

        fld dword ptr [DAT_0076c5b0]
        jmp     L_store2
L_check_upper2:
        fcom    dword ptr [ecx + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_store2
        fstp    st(0)
        fld     dword ptr [ecx + 0x1c]
L_store2:
        mov     eax, dword ptr [esp + 8]
        fld     st(0)
        fadd    dword ptr [esi + eax*4 + 0x180]
        dec     eax
        mov     dword ptr [esp + 8], eax
        fstp    dword ptr [esi + eax*4 + 0x184]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        jns     L_loop3
        pop     edi
        mov     al, 1
        pop     esi
        add     esp, 0x34
        ret
    }


}
