/*
 * FUN_0074C360 (119 B) — __stdcall RET 0x4 (1 param). Reads 9 float
 * fields from the arg object, converts each to double on the stack, and
 * calls sprintf (IAT 0x76b420) with format string 0x7ab418 into buffer
 * 0x8bae04, returning the buffer pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b420;   /* IAT: sprintf */

__declspec(naked) void FUN_0074C360(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        fld     dword ptr [eax + 0x2c]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [eax + 0x28]
        sub     esp, 8
        fstp    qword ptr [esp + 8]
        sub     esp, 8
        fld     dword ptr [eax + 0x24]
        sub     esp, 8
        fstp    qword ptr [esp + 0x10]
        sub     esp, 8
        fld     dword ptr [eax + 0x1c]
        sub     esp, 8
        fstp    qword ptr [esp + 0x18]
        sub     esp, 8
        fld     dword ptr [eax + 0x18]
        sub     esp, 8
        fstp    qword ptr [esp + 0x20]
        fld     dword ptr [eax + 0x14]
        fstp    qword ptr [esp + 0x18]
        fld     dword ptr [eax + 0xc]
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [eax + 8]
        fstp    qword ptr [esp + 8]
        fld     dword ptr [eax + 4]
        fstp    qword ptr [esp]
        push    0x7ab418
        push    0x8bae04
        call    dword ptr [g_0076b420]
        add     esp, 0x50
        mov     eax, 0x8bae04
        ret     4
    }
}
