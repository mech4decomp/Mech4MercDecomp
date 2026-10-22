/*
 * FUN_0067DC50 (45 B) — HUD map marker setter (__thiscall, RET 0x10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0067dc50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 0xc]
        mov     byte ptr [eax + ecx + 0x36d4], 0x1
        lea     eax, [eax + eax*2]
        lea     eax, [ecx + eax*4 + 0x20e4]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], ecx
        ret     0x10
    }
}
