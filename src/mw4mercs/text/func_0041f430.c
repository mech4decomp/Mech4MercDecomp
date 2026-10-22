/*
 * FUN_0041f430 (80 B) — __thiscall vector writer: sprintf(g_buf_7b9418,
 * "%f %f %f", (double)v[0], (double)v[1], (double)v[2]), appends the
 * buffer through FUN_00412780, sets a flag byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sprintf_0076b420)(char *, const char *, ...);
extern char g_fmt_76d860[];
extern char g_buf_7b9418[];
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_0041f430(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        fld     dword ptr [eax+0x8]
        push    esi
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [eax+0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp+0x8]
        mov     esi, ecx
        fld     dword ptr [eax]
        fstp    qword ptr [esp]
        push    offset g_fmt_76d860
        push    offset g_buf_7b9418
        call    dword ptr [g_sprintf_0076b420]
        add     esp, 0x20
        push    offset g_buf_7b9418
        lea     ecx, [esi+0x18]
        call    FUN_00412780
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [eax+0x10]
        mov     byte ptr [ecx+0x4], 0x1
        pop     esi
        ret     0x4
    }
}
