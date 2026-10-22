/*
 * FUN_006a49e0 (35 B) — virtual call returning a float constant.
 *
 * Calls [this->vtable+0x88](0x40800000); if the byte result == 1 returns
 * the float at 0x0076d064, else the float at 0x0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076c5b0;

__declspec(naked) void FUN_006a49e0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx]
        push    0x40800000
        call    dword ptr [eax + 0x88]
        cmp     al, 0x1
        jnz     L_ret2
        fld     dword ptr [g_0076d064]
        ret
    L_ret2:
        fld     dword ptr [g_0076c5b0]
        ret
    }
}
