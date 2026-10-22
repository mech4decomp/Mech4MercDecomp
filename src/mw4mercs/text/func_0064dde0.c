/*
 * FUN_0064dde0 (36 B) — Initializes a small struct at this: stores param
 * at +0, 1 at +4, 0 at +8/+0xC/+0x10, and param's low byte at +0x10.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0064dde0(void *param)
{
    __asm {
        mov     dl, byte ptr [esp + 0x4]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0x4], 0x1
        mov     dword ptr [eax + 0x8], ecx
        mov     byte ptr [eax + 0x10], dl
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        ret     0x4
    }
}
