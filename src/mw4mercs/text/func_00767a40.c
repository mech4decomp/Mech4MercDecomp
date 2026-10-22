/*
 * FUN_00767a40 (17 B) — __thiscall (ECX = this).
 * Sets vtable pointer 0x7afd28 at [this], zeroes [this+4] and [this+8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00767a40(void *this)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], 0x7afd28
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 4], ecx
        ret
    }
}
