/*
 * FUN_006A7E30 (34 B) — __thiscall copy.
 *
 * Copies 4 dwords from param2 into this+0x00..0x0C, and the first dword
 * of param1 into this+0x00. RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006a7e30(void *param1, void *param2)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], ecx
        ret     8
    }
}
