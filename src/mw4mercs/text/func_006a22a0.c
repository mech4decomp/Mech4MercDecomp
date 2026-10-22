/*
 * FUN_006a22a0 (13 B) — __fastcall constructor: sets [this+0x4]=1 and installs
 * vtable 0x799d50 at [this].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a22a0(void)
{
    __asm {
        mov     eax, ecx
        mov     byte ptr [eax + 0x4], 0x1
        mov     dword ptr [eax], 0x799d50
        ret
    }
}
