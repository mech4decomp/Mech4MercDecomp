/*
 * FUN_00687d70 (41 B) — __thiscall swap of three dwords between [ECX] and
 * [param]. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00687d70(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        push    esi
        mov     esi, dword ptr [eax]
        mov     dword ptr [ecx], esi
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     esi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], esi
        mov     dword ptr [eax + 0x4], edx
        mov     esi, dword ptr [eax + 0x8]
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [ecx + 0x8], esi
        mov     dword ptr [eax + 0x8], edx
        pop     esi
        ret     4
    }
}
