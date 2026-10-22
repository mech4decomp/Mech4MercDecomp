/*
 * FUN_0061ae40 (72 B) — Object initializer.
 *
 * __fastcall (ECX = this). Fills a struct with constants from three
 * globals (0x007b8d88/8c/90), zeroes several fields, and clears a
 * 0x30-byte (12 dword) array at this+0x24 via rep stosd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b8d88;
extern int DAT_007b8d8c;
extern int DAT_007b8d90;

__declspec(naked) void __fastcall FUN_0061ae40(void *param_1)
{
    __asm {
        mov     edx, dword ptr [DAT_007b8d88]
        xor     eax, eax
        mov     dword ptr [ecx], 0x2
        mov     dword ptr [ecx + 0x8], edx
        mov     edx, dword ptr [DAT_007b8d8c]
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [ecx + 0xc], edx
        mov     edx, dword ptr [DAT_007b8d90]
        push    edi
        mov     dword ptr [ecx + 0x10], edx
        mov     dword ptr [ecx + 0x14], eax
        mov     byte ptr [ecx + 0x54], al
        mov     byte ptr [ecx + 0x55], al
        mov     byte ptr [ecx + 0x56], al
        mov     dword ptr [ecx + 0x18], eax
        mov     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [ecx + 0x20], eax
        lea     edi, [ecx + 0x24]
        mov     ecx, 0xc
        rep stosd
        pop     edi
        ret
    }
}
