/*
 * FUN_00680fc0 (37 B) — __fastcall constructor.
 *
 * this->vtable = 0x798A38; then calls FUN_004179f0(this+0x18),
 * FUN_00417980(this+0x18), FUN_00415380(this).
 *
 * __fastcall (ECX = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_00798a38;                    /* 0x00798A38 - vtable pointer */
extern void __fastcall FUN_004179f0(void);
extern void __fastcall FUN_00417980(void);
extern void __fastcall FUN_00415380(void);

__declspec(naked) void __fastcall FUN_00680fc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x18]
        mov     ecx, edi
        mov     dword ptr [esi], offset DAT_00798a38
        call    FUN_004179f0
        mov     ecx, edi
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
