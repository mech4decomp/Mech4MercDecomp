/*
 * FUN_0041f290 (65 B) — __thiscall serializer: formats a float arg as
 * "%f" via sprintf, appends through FUN_00412780, sets a flag byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sprintf_0076b420)(char *, const char *, ...);
extern char g_fmt_76d82c[];
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_0041f290(void)
{
    __asm {
        fld     dword ptr [esp+0x4]
        sub     esp, 0x20
        push    esi
        sub     esp, 0x8
        fstp    qword ptr [esp]
        lea     eax, [esp+0xc]
        push    offset g_fmt_76d82c
        push    eax
        mov     esi, ecx
        call    dword ptr [g_sprintf_0076b420]
        add     esp, 0x10
        lea     ecx, [esp+0x4]
        push    ecx
        lea     ecx, [esi+0x18]
        call    FUN_00412780
        mov     edx, dword ptr [esi+0x10]
        mov     eax, dword ptr [edx+0x10]
        mov     byte ptr [eax+0x4], 0x1
        pop     esi
        add     esp, 0x20
        ret     0x4
    }
}
