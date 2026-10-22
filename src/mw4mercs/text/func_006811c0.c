/*
 * FUN_006811c0 (196 B) — __thiscall destructor. Resets vtable 0x798a3c,
 * calls FUN_004179f0 on each sub-object pointer (0x70..0x94), then
 * FUN_00417980 on each sub-object (0x68..0x20), then FUN_00415380(this).
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179f0(void *obj);
extern void __cdecl FUN_00417980(void *obj);
extern void __cdecl FUN_00415380(void *obj);
extern unsigned long g_vtable_798a3c; /* PTR_FUN_00798a3c */

__declspec(naked) void __stdcall FUN_006811c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x70]
        mov     dword ptr [esi], offset g_vtable_798a3c
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x74]
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x78]
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x7c]
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x80]
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x84]
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x88]
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x8c]
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x90]
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x94]
        call    FUN_004179f0
        lea     ecx, [esi + 0x68]
        call    FUN_00417980
        lea     ecx, [esi + 0x60]
        call    FUN_00417980
        lea     ecx, [esi + 0x58]
        call    FUN_00417980
        lea     ecx, [esi + 0x50]
        call    FUN_00417980
        lea     ecx, [esi + 0x48]
        call    FUN_00417980
        lea     ecx, [esi + 0x40]
        call    FUN_00417980
        lea     ecx, [esi + 0x38]
        call    FUN_00417980
        lea     ecx, [esi + 0x30]
        call    FUN_00417980
        lea     ecx, [esi + 0x28]
        call    FUN_00417980
        lea     ecx, [esi + 0x20]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
