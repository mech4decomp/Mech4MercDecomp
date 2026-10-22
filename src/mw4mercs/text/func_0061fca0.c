/*
 * FUN_0061fca0 (39 B) — Field copy.
 *
 * __thiscall (ECX = this, 1 stack param). Copies several fields from
 * param into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0061fca0(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax + 0x34]
        mov     dword ptr [ecx + 0x8], edx
        mov     edx, dword ptr [eax + 0x30]
        mov     dword ptr [ecx + 0x4], edx
        mov     dl, byte ptr [eax + 0x3d]
        mov     dword ptr [ecx], eax
        mov     al, byte ptr [eax + 0x3c]
        mov     byte ptr [ecx + 0x14], dl
        mov     byte ptr [ecx + 0x16], al
        mov     byte ptr [ecx + 0x15], al
        mov     byte ptr [ecx + 0x13], al
        ret     4
    }
}
