/*
 * FUN_00496f80 (300 B) - MLR particle/flare object constructor.
 * __thiscall (ECX = this), returns EAX = this.
 *
 * Allocates a series of curve-channel sub-objects via FUN_004ae3c0,
 * sets channel counts, and installs the vtable at 0x7701C8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004937b0(void);
extern void __cdecl FUN_004ae3c0(void);

__declspec(naked) void FUN_00496f80(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    0x52f
        call    FUN_004937b0
        xor     ebx, ebx
        mov     dword ptr [esi + 0x60], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [esi + 0x70], ebx
        lea     ecx, [esi + 0x7c]
        mov     dword ptr [esi + 0x78], 0x6
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x88], 0x2
        mov     edi, 0x5
        lea     ecx, [esi + 0xa4]
        mov     dword ptr [esi + 0xa0], edi
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xb0]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xc4]
        mov     dword ptr [esi + 0xc0], edi
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xd0]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xe4]
        mov     dword ptr [esi + 0xe0], edi
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xf0]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x104]
        mov     dword ptr [esi + 0x100], edi
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x110]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x124]
        mov     dword ptr [esi + 0x120], edi
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x130]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x140]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x14c]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x158]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x164]
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x17c], ebx
        mov     dword ptr [esi + 0x180], ebx
        mov     dword ptr [esi + 0x184], ebx
        pop     edi
        mov     dword ptr [esi + 0x188], ebx
        mov     dword ptr [esi + 0x170], ebx
        mov     dword ptr [esi + 0x174], ebx
        mov     byte ptr [esi + 0x178], bl
        mov     byte ptr [esi + 0x179], bl
        mov     dword ptr [esi], 0x7701c8
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
