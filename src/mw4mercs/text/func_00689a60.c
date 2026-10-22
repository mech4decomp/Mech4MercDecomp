/*
 * FUN_00689a60 (18 B) — __thiscall constructor. Sets vtable to 0x798d50,
 * zeroes field at +0x20, then tail-calls FUN_006b06d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* g_00798d50;                 /* vtable PTR_FUN_00798d50 */
extern void __cdecl FUN_006b06d0(void);

__declspec(naked) void FUN_00689a60(void)
{
    __asm {
        mov     dword ptr [ecx], offset g_00798d50
        mov     dword ptr [ecx+0x20], 0
        jmp     FUN_006b06d0
    }
}
