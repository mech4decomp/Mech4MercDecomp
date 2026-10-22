/*
 * FUN_00662290 (31 B) — __cdecl, returns float (ST0). ABL predicate: returns
 * _DAT_0076d064 if virtual method 0xc4 returns 1, else _DAT_0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076c5b0;

__declspec(naked) void FUN_00662290(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xc4]
        cmp     eax, 0x1
        jnz     L_622a8
        fld     dword ptr [g_0076d064]
        ret
L_622a8:
        fld     dword ptr [g_0076c5b0]
        ret
    }
}
