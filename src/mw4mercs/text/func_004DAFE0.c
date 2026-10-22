/*
 * FUN_004DAFE0 (61 B) — __thiscall (RET 0x10). Builds a small stack
 * struct and calls FUN_004E2F40 with (this, &struct, g_7dc728).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7dc728;
extern void __cdecl FUN_004e2f40(void);

__declspec(naked) void FUN_004DAFE0(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x10], ecx
        /* __emit: MSVC6 drops the 00 disp byte for lea [esp+0] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit  0x8D
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        /* __emit: MSVC6 drops the 00 disp byte for mov [esp],eax (89 04 24); ref needs 89 44 24 00 */
        __emit  0x89
        __emit  0x44
        __emit  0x24
        __emit  0x00
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [g_7dc728]
        mov     dword ptr [esp + 8], edx
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x18], eax
        call    FUN_004e2f40
        add     esp, 0x18
        ret     0x10
    }
}
