/*
 * FUN_0058c060 (635 B) — Animation blending function.
 * Processes 5 channels of animation blending with FPU operations.
 *
 * __thiscall (ECX = this), RET 0 (no stack params).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_0058c060(void)
{
    
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov     ecx, eax
        fld     dword ptr [ecx + 0x31c]
        fld     dword ptr [esi + 0x7e4]
        fld     dword ptr [esi + 0x7e0]
        fcomp   dword ptr [esi + 0x7dc]
        fnstsw  ax
        test    ah, 1
        jne     label_ch1_comp
        fstp    st(0)
        fld     dword ptr [esi + 0x7e8]
        jmp     label_ch1_done

label_ch1_comp:
        fld     dword ptr [esi + 0x7e0]
        /* __emit: MSVC6 inline asm doesn't support fcomp with dword ptr [imm32] */
        _emit 0xD8
        _emit 0x1D
        _emit 0xB0
        _emit 0xC5
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 0x40
        jne     label_ch1_done
        fstp    st(0)
        fld     dword ptr [esi + 0x7e0]
        fdiv    dword ptr [esi + 0x7dc]
        /* __emit: MSVC6 inline asm doesn't support fld with dword ptr [imm32] */
        _emit 0xD9
        _emit 0x05
        _emit 0x64
        _emit 0xD0
        _emit 0x76
        _emit 0x00
        fsub    st, st(1)
        fmul    dword ptr [esi + 0x7e4]
        fxch    st(1)
        fmul    dword ptr [esi + 0x7e8]
        faddp   st(1), st
label_ch1_done:
        fstp    dword ptr [esi + 0x7e4]
        xor     edx, edx
        mov     edi, 0x3f800000
        fstp    dword ptr [esi + 0x7e8]
        mov     dword ptr [esi + 0x7e0], edx
        fld     dword ptr [ecx + 0x320]
        mov     dword ptr [esi + 0x7dc], edi
        fld     dword ptr [esi + 0x7f4]
        fld     dword ptr [esi + 0x7f0]
        fcomp   dword ptr [esi + 0x7ec]
        fnstsw  ax
        test    ah, 1
        jne     label_ch2_comp
        fstp    st(0)
        fld     dword ptr [esi + 0x7f8]
        jmp     label_ch2_done

label_ch2_comp:
        fld     dword ptr [esi + 0x7f0]
        /* __emit: MSVC6 inline asm doesn't support fcomp with dword ptr [imm32] */
        _emit 0xD8
        _emit 0x1D
        _emit 0xB0
        _emit 0xC5
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 0x40
        jne     label_ch2_done
        fstp    st(0)
        fld     dword ptr [esi + 0x7f0]
        fdiv    dword ptr [esi + 0x7ec]
        /* __emit: MSVC6 inline asm doesn't support fld with dword ptr [imm32] */
        _emit 0xD9
        _emit 0x05
        _emit 0x64
        _emit 0xD0
        _emit 0x76
        _emit 0x00
        fsub    st, st(1)
        fmul    dword ptr [esi + 0x7f4]
        fxch    st(1)
        fmul    dword ptr [esi + 0x7f8]
        faddp   st(1), st
label_ch2_done:
        fstp    dword ptr [esi + 0x7f4]
        mov     dword ptr [esi + 0x7f0], edx
        mov     dword ptr [esi + 0x7ec], edi
        fstp    dword ptr [esi + 0x7f8]
        fld     dword ptr [ecx + 0x32c]
        fld     dword ptr [esi + 0x804]
        fld     dword ptr [esi + 0x800]
        fcomp   dword ptr [esi + 0x7fc]
        fnstsw  ax
        test    ah, 1
        jne     label_ch3_comp
        fstp    st(0)
        fld     dword ptr [esi + 0x808]
        jmp     label_ch3_done

label_ch3_comp:
        fld     dword ptr [esi + 0x800]
        /* __emit: MSVC6 inline asm doesn't support fcomp with dword ptr [imm32] */
        _emit 0xD8
        _emit 0x1D
        _emit 0xB0
        _emit 0xC5
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 0x40
        jne     label_ch3_done
        fstp    st(0)
        fld     dword ptr [esi + 0x800]
        fdiv    dword ptr [esi + 0x7fc]
        /* __emit: MSVC6 inline asm doesn't support fld with dword ptr [imm32] */
        _emit 0xD9
        _emit 0x05
        _emit 0x64
        _emit 0xD0
        _emit 0x76
        _emit 0x00
        fsub    st, st(1)
        fmul    dword ptr [esi + 0x804]
        fxch    st(1)
        fmul    dword ptr [esi + 0x808]
        faddp   st(1), st
label_ch3_done:
        fstp    dword ptr [esi + 0x804]
        mov     dword ptr [esi + 0x800], edx
        mov     dword ptr [esi + 0x7fc], edi
        fstp    dword ptr [esi + 0x808]
        fld     dword ptr [ecx + 0x324]
        fld     dword ptr [esi + 0x814]
        fld     dword ptr [esi + 0x810]
        fcomp   dword ptr [esi + 0x80c]
        fnstsw  ax
        test    ah, 1
        jne     label_ch4_comp
        fstp    st(0)
        fld     dword ptr [esi + 0x818]
        jmp     label_ch4_done

label_ch4_comp:
        fld     dword ptr [esi + 0x810]
        /* __emit: MSVC6 inline asm doesn't support fcomp with dword ptr [imm32] */
        _emit 0xD8
        _emit 0x1D
        _emit 0xB0
        _emit 0xC5
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 0x40
        jne     label_ch4_done
        fstp    st(0)
        fld     dword ptr [esi + 0x810]
        fdiv    dword ptr [esi + 0x80c]
        /* __emit: MSVC6 inline asm doesn't support fld with dword ptr [imm32] */
        _emit 0xD9
        _emit 0x05
        _emit 0x64
        _emit 0xD0
        _emit 0x76
        _emit 0x00
        fsub    st, st(1)
        fmul    dword ptr [esi + 0x814]
        fxch    st(1)
        fmul    dword ptr [esi + 0x818]
        faddp   st(1), st
label_ch4_done:
        fstp    dword ptr [esi + 0x814]
        mov     dword ptr [esi + 0x810], edx
        mov     dword ptr [esi + 0x80c], edi
        fstp    dword ptr [esi + 0x818]
        fld     dword ptr [ecx + 0x328]
        fld     dword ptr [esi + 0x824]
        fld     dword ptr [esi + 0x820]
        fcomp   dword ptr [esi + 0x81c]
        fnstsw  ax
        test    ah, 1
        jne     label_ch5_comp
        fstp    st(0)
        fld     dword ptr [esi + 0x828]
        jmp     label_ch5_done

label_ch5_comp:
        fld     dword ptr [esi + 0x820]
        /* __emit: MSVC6 inline asm doesn't support fcomp with dword ptr [imm32] */
        _emit 0xD8
        _emit 0x1D
        _emit 0xB0
        _emit 0xC5
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 0x40
        jne     label_ch5_done
        fstp    st(0)
        fld     dword ptr [esi + 0x820]
        fdiv    dword ptr [esi + 0x81c]
        /* __emit: MSVC6 inline asm doesn't support fld with dword ptr [imm32] */
        _emit 0xD9
        _emit 0x05
        _emit 0x64
        _emit 0xD0
        _emit 0x76
        _emit 0x00
        fsub    st, st(1)
        fmul    dword ptr [esi + 0x824]
        fxch    st(1)
        fmul    dword ptr [esi + 0x828]
        faddp   st(1), st
label_ch5_done:
        fstp    dword ptr [esi + 0x824]
        mov     dword ptr [esi + 0x81c], edi
        pop     edi
        fstp    dword ptr [esi + 0x828]
        mov     dword ptr [esi + 0x820], edx
        pop     esi
        ret
    }


}
