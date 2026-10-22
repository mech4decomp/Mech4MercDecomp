/*
 * FUN_0048bc10 (55 B) — __thiscall (ECX = this), RET 4.
 * Copies 8 dwords (32 bytes) from src to this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0048bc10(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x04]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x04]
        mov     dword ptr [eax + 0x04], edx
        mov     edx, dword ptr [ecx + 0x08]
        mov     dword ptr [eax + 0x08], edx
        mov     edx, dword ptr [ecx + 0x0c]
        mov     dword ptr [eax + 0x0c], edx
        mov     edx, dword ptr [ecx + 0x10]
        mov     dword ptr [eax + 0x10], edx
        mov     edx, dword ptr [ecx + 0x14]
        mov     dword ptr [eax + 0x14], edx
        mov     edx, dword ptr [ecx + 0x18]
        mov     ecx, dword ptr [ecx + 0x1c]
        mov     dword ptr [eax + 0x18], edx
        mov     dword ptr [eax + 0x1c], ecx
        ret     0x04
    }
}
