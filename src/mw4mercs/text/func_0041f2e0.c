/*
 * FUN_0041f2e0 (26 B) — __thiscall serializer: sscanf(this+0x18, "%x",
 * param_1) — parses a hex value from the string into the output arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sscanf_0076b2dc)(const char *, const char *, ...);
extern char g_fmt_76d830[];

__declspec(naked) void FUN_0041f2e0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        mov     ecx, dword ptr [ecx+0x18]
        push    eax
        push    offset g_fmt_76d830
        push    ecx
        call    dword ptr [g_sscanf_0076b2dc]
        add     esp, 0xc
        ret     0x4
    }
}
