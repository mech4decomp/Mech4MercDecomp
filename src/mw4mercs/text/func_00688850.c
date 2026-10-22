/*
 * FUN_00688850 (22 B) — __thiscall constructor. Sets vtable to 0x798d08,
 * zeroes fields at +0x20/+0x24/+0x28, then tail-calls FUN_006b06d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* g_00798d08;                 /* vtable PTR_FUN_00798d08 */
extern void __cdecl FUN_006b06d0(void);

__declspec(naked) void FUN_00688850(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx], offset g_00798d08
        mov     dword ptr [ecx+0x20], eax
        mov     dword ptr [ecx+0x28], eax
        mov     dword ptr [ecx+0x24], eax
        jmp     FUN_006b06d0
    }
}
