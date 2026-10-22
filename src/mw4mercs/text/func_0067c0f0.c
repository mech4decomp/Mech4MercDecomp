/*
 * FUN_0067c0f0 (50 B) — __thiscall. Zero-initializes fields of a struct
 * and sets byte [this+0x30] = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0067c0f0(void)
{
    __asm {
        push    esi
        xor     edx, edx
        xor     eax, eax
        mov     dword ptr [ecx], eax
        lea     esi, [ecx + 0x4]
        mov     dword ptr [esi], edx
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi + 0xc], edx
        mov     dword ptr [ecx + 0x14], eax
        lea     esi, [ecx + 0x18]
        mov     dword ptr [esi], edx
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi + 0xc], edx
        mov     dword ptr [ecx + 0x2c], eax
        mov     dword ptr [ecx + 0x28], eax
        mov     byte ptr [ecx + 0x30], 0x1
        pop     esi
        ret
    }
}
