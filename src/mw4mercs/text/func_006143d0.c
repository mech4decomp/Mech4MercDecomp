/*
 * FUN_006143d0 (38 B) — Constructor.
 *
 * __thiscall (ECX = this). Sets vtable pointer at this to 0x78c2c0,
 * calls virtual method at this+0x10's vtable+8, then calls
 * FUN_004169c0 on this+0x10 and FUN_00415380 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004169c0(void *this);
extern void __fastcall FUN_00415380(void *this);

__declspec(naked) void __fastcall FUN_006143d0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        push    edi
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        mov     dword ptr [esi], 0x78c2c0
        call    dword ptr [eax + 0x8]
        mov     ecx, edi
        call    FUN_004169c0
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
