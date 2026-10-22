/*
 * FUN_005abfc0 (53 B) — __fastcall destructor (vtable init + sub-object teardown).
 *
 * Sets *this = 0x785958, calls FUN_004179f0(this+0x14), then
 * FUN_0041fc90(this+0x44), FUN_0041fc90(this+0x3c), FUN_00417980(this+0x14),
 * FUN_00415380(this).
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004179f0(void);
extern void FUN_0041fc90(void);
extern void FUN_00417980(void);
extern void FUN_00415380(void);

__declspec(naked) void __fastcall FUN_005abfc0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x14]
        mov     ecx, edi
        mov     dword ptr [esi], 0x785958
        call    FUN_004179f0
        lea     ecx, [esi + 0x44]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x3c]
        call    FUN_0041fc90
        mov     ecx, edi
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
