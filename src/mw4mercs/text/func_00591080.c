/* FUN_00591080 - __thiscall, 332 bytes */
/* Complex FPU animation/math update on 3-element arrays at this+0x48, this+0x3C, etc. */

extern int DAT_0076c5b0;
extern int DAT_007b220c;

__declspec(naked) void FUN_00591080(void)
{
    __asm {
        add     ecx, 0x48            /* ecx = &this->field_48 (base of array) */
        mov     edx, 3               /* loop counter */

loop_start:
        /* Check if *ecx (field_48[i]) <= 0.0f */
        fld     dword ptr [ecx]      /* ST(0) = field_48[i] */
        fcomp   dword ptr [DAT_0076c5b0] /* compare with 0.0f */
        fnstsw  ax
        test    ah, 0x41             /* CF=1 or ZF=1 means <= 0.0f */
        jnz     check_negative       /* if > 0.0f, go to positive path */

        /* field_48[i] <= 0.0f */
        fld     dword ptr [ecx - 0x3C] /* ST(0) = field_0C[i] */
        fmul    dword ptr [esp + 4]  /* ST(0) *= param_1 */
        fsubr   dword ptr [ecx]      /* ST(0) = field_48[i] - ST(0) */
        fstp    dword ptr [ecx]      /* field_48[i] = result */
        fld     dword ptr [ecx]      /* ST(0) = field_48[i] */
        fcomp   dword ptr [DAT_0076c5b0] /* compare with 0.0f */
        fnstsw  ax
        test    ah, 1                /* C0: check if < 0.0f */
        jz      skip_clamp1
        mov     dword ptr [ecx], 0   /* field_48[i] = 0.0f */

skip_clamp1:
        fld     dword ptr [ecx]      /* ST(0) = field_48[i] */
        fmul    dword ptr [esp + 4]  /* ST(0) *= param_1 */
        fadd    dword ptr [ecx - 0xC] /* ST(0) += field_3C[i] */
        fstp    dword ptr [ecx - 0xC] /* field_3C[i] = result */
        fld     dword ptr [ecx - 0xC] /* ST(0) = field_3C[i] */
        fld     dword ptr [ecx - 0x48] /* ST(0) = field_00[i], ST(1) = field_3C[i] */
        fcompp                        /* compare */
        fnstsw  ax
        test    ah, 1                /* C0: check if field_3C[i] < field_00[i] */
        jz      skip_clamp2
        mov     eax, [ecx - 0x48]    /* eax = field_00[i] */
        mov     [ecx - 0xC], eax     /* field_3C[i] = field_00[i] */

skip_clamp2:
        fld     dword ptr [ecx - 0xC] /* ST(0) = field_3C[i] */
        fld     dword ptr [ecx - 0x48] /* ST(0) = field_00[i], ST(1) = field_3C[i] */
        fcompp                        /* compare */
        fnstsw  ax
        test    ah, 0x41             /* CF=1 or ZF=1 means field_3C[i] <= field_00[i] */
        jz      check_abs            /* if <=, skip clamping */
        mov     eax, [ecx - 0x48]    /* eax = field_00[i] */
        mov     [ecx - 0xC], eax     /* field_3C[i] = field_00[i] */
        mov     dword ptr [ecx], 0   /* field_48[i] = 0.0f */
        jmp     check_abs

check_negative:
        /* field_48[i] > 0.0f */
        fld     dword ptr [ecx]      /* ST(0) = field_48[i] */
        fcomp   dword ptr [DAT_0076c5b0] /* compare with 0.0f */
        fnstsw  ax
        test    ah, 1                /* C0: check if < 0.0f */
        jz      check_abs            /* if not < 0.0f, skip */

        /* field_48[i] < 0.0f (negative) */
        fld     dword ptr [ecx - 0x3C] /* ST(0) = field_0C[i] */
        fmul    dword ptr [esp + 4]  /* ST(0) *= param_1 */
        fadd    dword ptr [ecx]      /* ST(0) += field_48[i] */
        fstp    dword ptr [ecx]      /* field_48[i] = result */
        fld     dword ptr [ecx]      /* ST(0) = field_48[i] */
        fcomp   dword ptr [DAT_0076c5b0] /* compare with 0.0f */
        fnstsw  ax
        test    ah, 0x41             /* CF=1 or ZF=1 means <= 0.0f */
        jnz     skip_clamp3
        mov     dword ptr [ecx], 0   /* field_48[i] = 0.0f */

skip_clamp3:
        fld     dword ptr [ecx]      /* ST(0) = field_48[i] */
        fmul    dword ptr [esp + 4]  /* ST(0) *= param_1 */
        fadd    dword ptr [ecx - 0xC] /* ST(0) += field_3C[i] */
        fstp    dword ptr [ecx - 0xC] /* field_3C[i] = result */
        fld     dword ptr [ecx - 0x48] /* ST(0) = field_00[i] */
        fchs                          /* ST(0) = -field_00[i] */
        fld     dword ptr [ecx - 0xC] /* ST(0) = field_3C[i], ST(1) = -field_00[i] */
        fcomp                         /* compare field_3C[i] vs -field_00[i] */
        fnstsw  ax
        test    ah, 0x41             /* CF=1 or ZF=1 means field_3C[i] <= -field_00[i] */
        jz      skip_clamp4
        fstp    dword ptr [ecx - 0xC] /* field_3C[i] = ST(0) (already -field_00[i]) */
        mov     dword ptr [ecx], 0   /* field_48[i] = 0.0f */
        jmp     check_abs

skip_clamp4:
        fstp    st(0)                /* pop ST(0) */

check_abs:
        /* Check if |field_48[i]| <= DAT_007b220c */
        fld     dword ptr [ecx]      /* ST(0) = field_48[i] */
        fabs                          /* ST(0) = |field_48[i]| */
        fld     dword ptr [DAT_007b220c] /* ST(0) = threshold, ST(1) = |val| */
        fcompp                        /* compare */
        fnstsw  ax
        test    ah, 1                /* C0: check if |val| > threshold */
        jnz     next_element         /* if > threshold, skip to next element */

        /* |field_48[i]| <= threshold */
        fld     dword ptr [ecx - 0xC] /* ST(0) = field_3C[i] */
        fld     dword ptr [ecx - 0x18] /* ST(0) = field_30[i], ST(1) = field_3C[i] */
        fcompp                        /* compare field_3C[i] vs field_30[i] */
        fnstsw  ax
        test    ah, 1                /* C0: check if field_3C[i] < field_30[i] */
        jz      check_greater

        /* field_3C[i] < field_30[i] */
        fld     dword ptr [ecx - 0x30] /* ST(0) = field_18[i] */
        fmul    dword ptr [esp + 4]  /* ST(0) *= param_1 */
        fsubr   dword ptr [ecx - 0xC] /* ST(0) = field_3C[i] - ST(0) */
        fstp    dword ptr [ecx - 0xC] /* field_3C[i] = result */
        fld     dword ptr [ecx - 0xC] /* ST(0) = field_3C[i] */
        fld     dword ptr [ecx - 0x18] /* ST(0) = field_30[i], ST(1) = field_3C[i] */
        fcompp                        /* compare */
        fnstsw  ax
        test    ah, 0x41             /* CF=1 or ZF=1 means field_3C[i] <= field_30[i] */
        jnz     next_element         /* if > field_30[i], skip clamping */
        jmp     clamp_to_field30

check_greater:
        /* field_3C[i] >= field_30[i] */
        fld     dword ptr [ecx - 0xC] /* ST(0) = field_3C[i] */
        fld     dword ptr [ecx - 0x18] /* ST(0) = field_30[i], ST(1) = field_3C[i] */
        fcompp                        /* compare */
        fnstsw  ax
        test    ah, 0x41             /* CF=1 or ZF=1 means field_3C[i] <= field_30[i] */
        jnz     next_element         /* if field_3C[i] > field_30[i], skip */

        /* field_3C[i] > field_30[i] */
        fld     dword ptr [ecx - 0x30] /* ST(0) = field_18[i] */
        fmul    dword ptr [esp + 4]  /* ST(0) *= param_1 */
        fadd    dword ptr [ecx - 0xC] /* ST(0) += field_3C[i] */
        fstp    dword ptr [ecx - 0xC] /* field_3C[i] = result */
        fld     dword ptr [ecx - 0xC] /* ST(0) = field_3C[i] */
        fld     dword ptr [ecx - 0x18] /* ST(0) = field_30[i], ST(1) = field_3C[i] */
        fcompp                        /* compare */
        fnstsw  ax
        test    ah, 1                /* C0: check if field_3C[i] < field_30[i] */
        jz      next_element         /* if >=, skip clamping */

clamp_to_field30:
        mov     eax, [ecx - 0x18]    /* eax = field_30[i] */
        mov     [ecx - 0xC], eax     /* field_3C[i] = field_30[i] */

next_element:
        add     ecx, 4               /* advance to next element */
        dec     edx
        jnz     loop_start

        ret     4
    }
}
