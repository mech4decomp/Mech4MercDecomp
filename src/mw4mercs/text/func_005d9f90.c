/*
 * FUN_005d9f90 (24 B) — __thiscall (ECX = this), RET 4. Copies a byte
 * from the param into [this+8], zeroes [this+0], [this+4], [this+8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d9f90(void *param)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 8], dl
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        ret     4
    }
}
