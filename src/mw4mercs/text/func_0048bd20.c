/*
 * FUN_0048bd20 (31 B) — __fastcall (ECX = this), returns this.
 * Calls FUN_00491280(this+0x18), then zeroes [this+0..0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00491280(void *param_1);

__declspec(naked) void * __fastcall FUN_0048bd20(void *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x18]
        call    FUN_00491280
        xor     eax, eax
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x04], eax
        mov     dword ptr [esi + 0x08], eax
        mov     dword ptr [esi + 0x0c], eax
        mov     dword ptr [esi + 0x10], eax
        mov     eax, esi
        pop     esi
        ret
    }
}
