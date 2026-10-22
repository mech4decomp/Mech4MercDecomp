/*
 * FUN_0041f270 (22 B) — __thiscall serializer: parses the string at
 * this+0x18 via atof and stores the resulting float to *param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double (__cdecl *g_atof_0076b2d8)(const char *);

__declspec(naked) void FUN_0041f270(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x18]
        push    eax
        call    dword ptr [g_atof_0076b2d8]
        mov     ecx, dword ptr [esp+0x8]
        fstp    dword ptr [ecx]
        add     esp, 0x4
        ret     0x4
    }
}
