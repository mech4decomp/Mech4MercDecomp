/*
 * FUN_00608710 (42 B) — __fastcall (ECX = this). Invokes three virtual
 * methods (slot 2) on sub-objects at offsets 0x00, 0x14, 0x28, then calls
 * FUN_00608740 and FUN_006088f0 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00608740(void);
extern void __cdecl FUN_006088f0(void);

__declspec(naked) void __fastcall FUN_00608710(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [esi + 0x14]
        lea     ecx, [esi + 0x14]
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [esi + 0x28]
        lea     ecx, [esi + 0x28]
        call    dword ptr [eax + 0x8]
        mov     ecx, esi
        call    FUN_00608740
        mov     ecx, esi
        call    FUN_006088f0
        pop     esi
        ret
    }
}
