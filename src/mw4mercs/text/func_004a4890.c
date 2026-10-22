/*
 * FUN_004a4890 (177 B) — MLR subsystem constructor (vtable 0x770354).
 * Initializes sub-objects and fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a9380(void);
extern void __cdecl FUN_004ae3c0(void);

__declspec(naked) void FUN_004a4890(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x526
        call    FUN_004a9380
        lea     ecx, [esi + 0x2b8]
        mov     dword ptr [esi + 0x2b4], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x2c4]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x2d8]
        mov     dword ptr [esi + 0x2d4], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x2e4]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x2f8]
        mov     dword ptr [esi + 0x2f4], 0x6
        call    FUN_004ae3c0
        xor     eax, eax
        mov     dword ptr [esi + 0x304], 0x2
        mov     dword ptr [esi + 0x31c], eax
        mov     dword ptr [esi + 0x324], eax
        mov     dword ptr [esi + 0x32c], eax
        mov     dword ptr [esi + 0x334], eax
        mov     byte ptr [esi + 0x33c], al
        mov     dword ptr [esi], 0x770354
        mov     byte ptr [esi + 0x33d], 0x1
        mov     dword ptr [esi + 0x26c], 0xd8
        mov     dword ptr [esi + 0x270], 0x78
        mov     eax, esi
        pop     esi
        ret
    }
}
