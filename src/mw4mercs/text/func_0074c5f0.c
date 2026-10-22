/*
 * FUN_0074c5f0 (158 B) — __stdcall, RET 4 (1 param).
 *
 * Formats a material struct (13 floats) into a global buffer via sprintf:
 * sprintf(&DAT_008babf4, "Diffuse=...", 13 doubles). Returns &DAT_008babf4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b420;  /* sprintf IAT */

__declspec(naked) void __stdcall FUN_0074c5f0(float *param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        fld     dword ptr [eax + 0x40]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [eax + 0x38]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        fld     dword ptr [eax + 0x34]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x10]
        sub     esp, 0x8
        fld     dword ptr [eax + 0x30]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x18]
        sub     esp, 0x8
        fld     dword ptr [eax + 0x18]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x20]
        sub     esp, 0x8
        fld     dword ptr [eax + 0x14]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x28]
        sub     esp, 0x8
        fld     dword ptr [eax + 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x30]
        fld     dword ptr [eax + 0x28]
        fstp    qword ptr [esp + 0x28]
        fld     dword ptr [eax + 0x24]
        fstp    qword ptr [esp + 0x20]
        fld     dword ptr [eax + 0x20]
        fstp    qword ptr [esp + 0x18]
        fld     dword ptr [eax + 0x8]
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x4]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [eax]
        fstp    qword ptr [esp]
        push    0x7ab5a4
        push    0x8babf4
        call    dword ptr [g_0076b420]
        add     esp, 0x70
        mov     eax, 0x8babf4
        ret     0x4
    }
}
