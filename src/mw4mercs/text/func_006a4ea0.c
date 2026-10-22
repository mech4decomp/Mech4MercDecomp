/*
 * FUN_006a4ea0 (27 B) — __cdecl helper. Calls virtual method at vtable+0x10
 * on the object (param_1); if the byte result == 1 returns float 0x0076d064,
 * else returns float 0x0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076c5b0;

__declspec(naked) void FUN_006a4ea0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        cmp     al, 0x1
        jnz     L_else
        fld     dword ptr [g_0076d064]
        ret
L_else:
        fld     dword ptr [g_0076c5b0]
        ret
    }
}
