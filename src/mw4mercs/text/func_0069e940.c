/*
 * FUN_0069e940 (41 B) — __fastcall (ECX = this). Zeroes a set of fields at
 * offsets 0x78..0x90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0069e940(void *param)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0x78], ecx
        mov     dword ptr [eax + 0x80], ecx
        mov     dword ptr [eax + 0x88], ecx
        mov     dword ptr [eax + 0x7c], ecx
        mov     dword ptr [eax + 0x84], ecx
        mov     byte ptr [eax + 0x90], cl
        mov     dword ptr [eax + 0x8c], ecx
        ret
    }
}
