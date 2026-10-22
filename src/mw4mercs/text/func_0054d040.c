/*
 * FUN_0054d040 (51 B) — FPU: compares float param against [ecx+0x3A4], returns bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0077d054;
extern float DAT_0077d050;

__declspec(naked) void __stdcall func_0054d040(void)
{
    __asm {
        fld     dword ptr [esp + 4]
        fsub    dword ptr [ecx + 0x3A4]
        fcom    dword ptr [DAT_0077d054]
        fnstsw  ax
        test    ah, 1
        jne     L_ret_true_fstp
        fcomp   dword ptr [DAT_0077d050]
        fnstsw  ax
        test    ah, 0x41
        je      L_ret_true
        xor     eax, eax
        ret     4
L_ret_true_fstp:
        fstp    st(0)
L_ret_true:
        mov     eax, 1
        ret     4
    }
}
