/*
 * FUN_00613d80 (38 B) - __thiscall (ECX = this) destructor, RET (no cleanup).
 *
 * Sets vtable [this] = 0x78c284, calls virtual method [this->[0x10]+8],
 * then FUN_004169c0 on this+0x10 and FUN_00415380 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004169c0(void);
extern void __stdcall FUN_00415380(void);

__declspec(naked) void __stdcall FUN_00613d80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        push    edi
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        mov     dword ptr [esi], 0x78c284
        call    dword ptr [eax + 8]
        mov     ecx, edi
        call    FUN_004169c0
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
