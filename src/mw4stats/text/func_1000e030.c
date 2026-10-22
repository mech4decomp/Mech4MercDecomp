/*
 * FUN_1000e030 (38 B) - __fastcall (this in ecx). Constructor: calls
 * FUN_10011f30(this+0xc, 0), zeroes fields +8/+0x44/+0x38/+0x4, sets the
 * vtable pointer @ 0x100214f8, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_10011f30(void);

__declspec(naked) void * __cdecl FUN_1000e030(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        xor     edi, edi
        push    edi
        lea     ecx, [esi + 0xc]
        call    FUN_10011f30
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0x44], edi
        mov     dword ptr [esi + 0x38], edi
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi], 0x100214f8
        mov     eax, esi
        pop     edi
        pop     esi
        ret
    }
}
