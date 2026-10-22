/*
 * FUN_00701000 (42 B) — __thiscall (ECX = this) constructor.
 *
 * Sets vtable ptr 0x7a1194, zeroes fields at +4/+8/+0x10, sets byte
 * at +0xC to 1, and clears three globals at 0x00856864/68/6c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_856864;
extern int g_856868;
extern int g_85686c;

__declspec(naked) void __fastcall FUN_00701000(void *this)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], 0x7a1194
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     byte ptr [eax + 0xC], 1
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [g_856864], ecx
        mov     dword ptr [g_856868], ecx
        mov     dword ptr [g_85686c], ecx
        ret
    }
}
