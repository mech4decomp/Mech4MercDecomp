/*
 * FUN_0041f7b0 (80 B) — __thiscall RGBColor serializer: sprintf(
 * g_buf_7b9338, "%f %f %f", 3 doubles from param_1[0..2]). Then calls
 * FUN_00412780 (thiscall, ecx=&this+0x18) with the buffer, and sets a
 * dirty flag at this->[0x10]->[0x10]+4 = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sprintf_0076b420)(const char *, const char *, ...);
extern char g_fmt_76d860[];
extern char g_buf_7b9338[];
extern void FUN_00412780(void);

__declspec(naked) void FUN_0041f7b0(void)
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
        push    offset g_buf_7b9338
        call    dword ptr [g_sprintf_0076b420]
        add     esp, 0x20
        push    offset g_buf_7b9338
        lea     ecx, [esi+0x18]
        call    FUN_00412780
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [eax+0x10]
        mov     byte ptr [ecx+0x4], 0x1
        pop     esi
        ret     0x4
    }
}
