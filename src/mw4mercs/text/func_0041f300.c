/*
 * FUN_0041f300 (60 B) — __thiscall serializer: sprintf(local, "%x",
 * param_1), appends through FUN_00412780, sets a flag byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sprintf_0076b420)(char *, const char *, ...);
extern char g_fmt_76d830[];
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_0041f300(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        sub     esp, 0x20
        push    esi
        push    eax
        mov     esi, ecx
        lea     ecx, [esp+0x8]
        push    offset g_fmt_76d830
        push    ecx
        call    dword ptr [g_sprintf_0076b420]
        add     esp, 0xc
        lea     edx, [esp+0x4]
        push    edx
        lea     ecx, [esi+0x18]
        call    FUN_00412780
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [eax+0x10]
        mov     byte ptr [ecx+0x4], 0x1
        pop     esi
        add     esp, 0x20
        ret     0x4
    }
}
