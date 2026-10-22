/*
 * FUN_0049b220 (367 B) — MLR particle/flare object destructor (__fastcall).
 * Re-initializes curve sub-objects, frees two light lists, tears down
 * sub-objects, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004937b0(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0049d220(void);
extern void __cdecl FUN_0049d2e0(void);

__declspec(naked) void FUN_0049b220(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    0x52d
        call    FUN_004937b0
        xor     edi, edi
        mov     dword ptr [esi + 0x60], edi
        mov     ebp, 0x2
        mov     dword ptr [esi + 0x68], ebp
        lea     ecx, [esi + 0x80]
        mov     dword ptr [esi + 0x7c], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x8c]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xa0]
        mov     dword ptr [esi + 0x9c], 0x6
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0xac], ebp
        mov     dword ptr [esi + 0xc4], 0x8
        mov     dword ptr [esi + 0xc8], edi
        mov     ebx, 0x1
        mov     dword ptr [esi + 0xd0], ebx
        mov     dword ptr [esi + 0xe0], 0xa
        mov     dword ptr [esi + 0xe4], ebp
        mov     dword ptr [esi + 0xf8], ebx
        lea     ecx, [esi + 0x10c]
        mov     dword ptr [esi + 0x108], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x118]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x12c]
        mov     dword ptr [esi + 0x128], 0x4
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x138], ebx
        mov     dword ptr [esi + 0x148], 0x8
        mov     dword ptr [esi + 0x14c], edi
        mov     dword ptr [esi + 0x154], ebx
        mov     dword ptr [esi + 0x174], edi
        mov     dword ptr [esi + 0x170], edi
        mov     dword ptr [esi + 0x17c], edi
        lea     ebx, [esi + 0x180]
        mov     dword ptr [esi + 0x178], edi
        lea     ebp, [esi + 0x188]
        mov     dword ptr [ebx + 0x4], edi
        mov     dword ptr [ebx], edi
        mov     dword ptr [ebp + 0x4], edi
        cmp     dword ptr [esi + 0x174], edi
        mov     dword ptr [ebp], edi
        mov     dword ptr [esi + 0x190], edi
        mov     dword ptr [esi], 0x770230
        jz      short loc_49b355
        mov     eax, dword ptr [esi + 0x170]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x170], edi
        mov     dword ptr [esi + 0x174], edi
loc_49b355:
        cmp     dword ptr [esi + 0x17c], edi
        jz      short loc_49b378
        mov     ecx, dword ptr [esi + 0x178]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x178], edi
        mov     dword ptr [esi + 0x17c], edi
loc_49b378:
        push    edi
        mov     ecx, ebx
        call    FUN_0049d220
        push    edi
        mov     ecx, ebp
        call    FUN_0049d2e0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
