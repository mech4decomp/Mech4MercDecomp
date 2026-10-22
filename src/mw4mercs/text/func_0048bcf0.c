/*
 * FUN_0048bcf0 (34 B) — __fastcall (ECX = this), returns this.
 * Calls FUN_00491280(this+4), then zeroes fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00491280(void *param_1);

__declspec(naked) void * __fastcall FUN_0048bcf0(void *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x04]
        mov     ecx, edi
        call    FUN_00491280
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi], eax
        mov     dword ptr [edi], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x1c], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    }
}
