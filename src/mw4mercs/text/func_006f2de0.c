/*
 * FUN_006f2de0 (212 B) — __thiscall indexed float getter. Returns one of the
 * camera/spectator settings (a float at [this+offset]) selected by the index
 * argument via a jump table at 0x6f2eb4 (data, outside the diff range).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;          /* 0x0076c5b0 (default value) */
extern int g_6f2eb4[];          /* 0x006f2eb4 (jump table, data) */

__declspec(naked) void __fastcall FUN_006f2de0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        add     eax, -3
        cmp     eax, 0x13
        ja      L2eab
        jmp     dword ptr [eax*4 + g_6f2eb4]
L2df7:
        fld     dword ptr [ecx + 0x140]
        ret     4
L2e00:
        fld     dword ptr [ecx + 0x144]
        ret     4
L2e09:
        fld     dword ptr [ecx + 0x148]
        ret     4
L2e12:
        fld     dword ptr [ecx + 0x14c]
        ret     4
L2e1b:
        fld     dword ptr [ecx + 0x150]
        ret     4
L2e24:
        fld     dword ptr [ecx + 0x154]
        ret     4
L2e2d:
        fld     dword ptr [ecx + 0x164]
        ret     4
L2e36:
        fld     dword ptr [ecx + 0x168]
        ret     4
L2e3f:
        fld     dword ptr [ecx + 0x16c]
        ret     4
L2e48:
        fld     dword ptr [ecx + 0x158]
        ret     4
L2e51:
        fld     dword ptr [ecx + 0x15c]
        ret     4
L2e5a:
        fld     dword ptr [ecx + 0x160]
        ret     4
L2e63:
        fld     dword ptr [ecx + 0x170]
        ret     4
L2e6c:
        fld     dword ptr [ecx + 0x174]
        ret     4
L2e75:
        fld     dword ptr [ecx + 0x178]
        ret     4
L2e7e:
        fld     dword ptr [ecx + 0x17c]
        ret     4
L2e87:
        fld     dword ptr [ecx + 0x180]
        ret     4
L2e90:
        fld     dword ptr [ecx + 0x184]
        ret     4
L2e99:
        fld     dword ptr [ecx + 0x188]
        ret     4
L2ea2:
        fld     dword ptr [ecx + 0x18c]
        ret     4
L2eab:
        fld     dword ptr [g_76c5b0]
        ret     4
    }
}
