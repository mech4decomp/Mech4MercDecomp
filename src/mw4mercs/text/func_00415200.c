/*
 * FUN_00415200 (44 B) — archive/database subsystem: __fastcall registered-
 * class unregister. If id (this[0]) != 0x11, unlinks this from the list
 * (this[4]+8 = this[3]) and clears the table slot; else clears the 0x11
 * slot. this=ECX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c0c;

__declspec(naked) void FUN_00415200(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        cmp     eax, 0x11
        jz      special
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [edx + 0x8], ecx
        mov     edx, dword ptr [g_007b8c0c]
        mov     dword ptr [edx + eax*4], 0
        ret
    special:
        mov     ecx, dword ptr [g_007b8c0c]
        mov     dword ptr [ecx + eax*4], 0
        ret
    }
}
