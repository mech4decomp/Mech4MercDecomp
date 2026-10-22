/*
 * FUN_006746a0 (23 B) — __thiscall ctor: stores arg ptr + *arg into
 * [this+4]/[this+8], sets vtable ptr 0x7888fc at [this].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006746a0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        mov     dword ptr [eax+0x4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax+0x8], ecx
        mov     dword ptr [eax], 0x7888fc
        ret     0x4
    }
}
