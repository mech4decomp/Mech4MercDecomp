/*
 * FUN_0040b4b0 (34 B) — __fastcall destructor. Sets vtable 0x76cfdc,
 * destroys the sub-objects at +0x20 and +0x10 via FUN_004174f0, then
 * calls FUN_00415380 on the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004174f0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0040b4b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi], 0x76cfdc
        call    FUN_004174f0
        lea     ecx, [esi + 0x10]
        call    FUN_004174f0
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
