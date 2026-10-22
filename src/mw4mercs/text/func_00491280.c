/*
 * FUN_00491280 (34 B) — __fastcall (ECX = param_1), returns param_1.
 * Initializes a 6-dword struct: zeroes fields 0,1,2,4; sets fields 3,5 to -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004911e0(void);

__declspec(naked) void * __fastcall FUN_00491280(void *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004911e0
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [esi + 0x14], ecx
        mov     eax, esi
        pop     esi
        ret
    }
}
