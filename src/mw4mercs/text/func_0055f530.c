/*
 * FUN_0055f530 (51 B) — FPU: loads two floats, multiplies by constant, stores to ecx+0x04/0x08.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0055f530(void)
{
    

extern int DAT_0076d064;
__asm {
fld     dword ptr [esp+4]
        fcom dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne     skip_div1
        fdiv    dword ptr [ecx+0x14]
skip_div1:
        fld     dword ptr [esp+8]
        fcom dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne     skip_div2
        fdiv    dword ptr [ecx+0x18]
skip_div2:
        fxch    st(1)
        fstp    dword ptr [ecx+4]
        fstp    dword ptr [ecx+8]
        ret     8
    }


}
