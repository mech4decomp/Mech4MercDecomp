/* FUN_00590DF0 - __thiscall, 194 bytes */
/* Animation/math update function with FPU operations */

extern int DAT_0076c5b0;
extern int DAT_0076d064;
extern int DAT_00781594;
extern float __stdcall FUN_00707e70(int);

__declspec(naked) void FUN_00590DF0(void)
{
    __asm {
        push    esi
        mov     esi, ecx               /* esi = this */
        mov     al, [esi + 0x620]      /* al = this->field_620 (flag) */
        test    al, al
        jnz     already_initialized

        /* First-time initialization path */
        fld     dword ptr [esi + 0x630] /* ST(0) = this->field_630 */
        mov     byte ptr [esi + 0x620], 1 /* flag = 1 */
        fld     dword ptr [esi + 0x62C] /* ST(0) = this->field_62C, ST(1) = field_630 */
        fcomp   dword ptr [esi + 0x628] /* compare field_62C vs field_628 */
        fnstsw  ax
        test    ah, 1                  /* C0: check if field_62C < field_628 */
        jnz     less_than

        /* field_62C >= field_628 */
        fstp    st(0)                  /* pop ST(0) (field_630) */
        fld     dword ptr [esi + 0x634] /* ST(0) = field_634 */
        jmp     store_result

less_than:
        /* field_62C < field_628 */
        fld     dword ptr [esi + 0x62C] /* ST(0) = field_62C, ST(1) = field_630 */
        fcomp   dword ptr [DAT_0076c5b0] /* compare field_62C vs 0.0f */
        fnstsw  ax
        test    ah, 0x40               /* C2: check if unordered (NaN) */
        jnz     store_result           /* if NaN, skip computation */

        /* Compute interpolation */
        fstp    st(0)                  /* pop ST(0) (field_630) */
        fld     dword ptr [esi + 0x62C] /* ST(0) = field_62C */
        fdiv    dword ptr [esi + 0x628] /* ST(0) = field_62C / field_628 */
        fld     dword ptr [DAT_0076d064] /* ST(0) = 1.0f, ST(1) = ratio */
        fsub    st(0), st(1)           /* ST(0) = 1.0 - ratio */
        fmul    dword ptr [esi + 0x630] /* ST(0) = (1-ratio) * field_630 */
        fxch    st(1)                  /* ST(0) = ratio, ST(1) = (1-ratio)*field_630 */
        fmul    dword ptr [esi + 0x634] /* ST(0) = ratio * field_634 */
        faddp   st(1), st(0)           /* ST(0) = ratio*field_634 + (1-ratio)*field_630 */

store_result:
        fstp    dword ptr [esi + 0x630] /* this->field_630 = result */
        mov     dword ptr [esi + 0x628], 0x3E4CCCCD /* field_628 = 0.2f */
        mov     dword ptr [esi + 0x62C], 0          /* field_62C = 0.0f */
        mov     dword ptr [esi + 0x634], 0x3F800000 /* field_634 = 1.0f */
        jmp     do_random

already_initialized:
        fld     dword ptr [esi + 0x624] /* ST(0) = field_624 */
        fcomp   dword ptr [DAT_0076c5b0] /* compare with 0.0f */
        fnstsw  ax
        test    ah, 0x40               /* C2: check if equal to 0.0f (NaN) */
        jnz     skip_random            /* if NaN/equal, skip */

do_random:
        push    0
        call    FUN_00707e70
        fadd    dword ptr [DAT_00781594] /* ST(0) += DAT_00781594 */
        fstp    dword ptr [esi + 0x624] /* this->field_624 = result */

skip_random:
        pop     esi
        ret
    }
}
