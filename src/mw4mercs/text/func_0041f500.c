/*
 * FUN_0041f500 (99 B) — __thiscall YawPitchRoll serializer: sprintf(
 * g_buf_7b93d8, "%f %f %f", yaw*rad, pitch*rad, roll*rad) where each
 * component is scaled by g_0076d824. Then calls FUN_00412780 (thiscall,
 * ecx=&this+0x18) with the buffer, and sets a dirty flag at
 * this->[0x10]->[0x10]+4 = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sprintf_0076b420)(const char *, const char *, ...);
extern char g_fmt_76d860[];
extern char g_buf_7b93d8[];
extern float g_0076d824;
extern void FUN_00412780(void);

__declspec(naked) void FUN_0041f500(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        fld     dword ptr [eax+0x8]
        push    esi
        sub     esp, 0x8
        fmul    dword ptr [g_0076d824]
        sub     esp, 0x8
        sub     esp, 0x8
        fstp    qword ptr [esp+0x10]
        mov     esi, ecx
        fld     dword ptr [eax+0x4]
        fmul    dword ptr [g_0076d824]
        fstp    qword ptr [esp+0x8]
        fld     dword ptr [eax]
        fmul    dword ptr [g_0076d824]
        fstp    qword ptr [esp]
        push    offset g_fmt_76d860
        push    offset g_buf_7b93d8
        call    dword ptr [g_sprintf_0076b420]
        add     esp, 0x20
        push    offset g_buf_7b93d8
        lea     ecx, [esi+0x18]
        call    FUN_00412780
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [eax+0x10]
        mov     byte ptr [ecx+0x4], 0x1
        pop     esi
        ret     0x4
    }
}
