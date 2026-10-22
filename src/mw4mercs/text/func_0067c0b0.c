/*
 * FUN_0067c0b0 (52 B) — Constructor: zero-initializes object fields.
 *
 * __fastcall (ECX = this). Zeroes this[0..0x2C] (with two 16-byte
 * sub-ranges via ESI) and sets this+0x30 = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0067c0b0(void)
{
    __asm {
        push    esi
        mov     eax, ecx
        xor     edx, edx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        lea     esi, [eax + 0x4]
        mov     dword ptr [esi], edx
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi + 0xc], edx
        mov     dword ptr [eax + 0x14], ecx
        lea     esi, [eax + 0x18]
        mov     dword ptr [esi], edx
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi + 0xc], edx
        mov     dword ptr [eax + 0x2c], ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     byte ptr [eax + 0x30], 1
        pop     esi
        ret
    }
}
