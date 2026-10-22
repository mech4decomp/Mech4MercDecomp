/*
 * FUN_0041f6e0 (110 B) — __thiscall Motion serializer: sprintf(
 * g_buf_7b9358, "%f %f %f %f %f %f", 6 doubles from param_1[0..5]).
 * Then calls FUN_00412780 (thiscall, ecx=&this+0x18) with the buffer,
 * and sets a dirty flag at this->[0x10]->[0x10]+4 = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sprintf_0076b420)(const char *, const char *, ...);
extern char g_fmt_76d8e4[];
extern char g_buf_7b9358[];
extern void FUN_00412780(void);

__declspec(naked) void FUN_0041f6e0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        fld     dword ptr [eax+0x14]
        push    esi
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [eax+0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp+0x8]
        sub     esp, 0x8
        fld     dword ptr [eax+0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp+0x10]
        sub     esp, 0x8
        fld     dword ptr [eax+0x8]
        mov     esi, ecx
        fstp    qword ptr [esp+0x10]
        fld     dword ptr [eax+0x4]
        fstp    qword ptr [esp+0x8]
        fld     dword ptr [eax]
        fstp    qword ptr [esp]
        push    offset g_fmt_76d8e4
        push    offset g_buf_7b9358
        call    dword ptr [g_sprintf_0076b420]
        add     esp, 0x38
        push    offset g_buf_7b9358
        lea     ecx, [esi+0x18]
        call    FUN_00412780
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [eax+0x10]
        mov     byte ptr [ecx+0x4], 0x1
        pop     esi
        ret     0x4
    }
}
