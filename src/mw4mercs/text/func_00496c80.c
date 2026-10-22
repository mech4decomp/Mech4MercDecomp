/*
 * FUN_00496c80 (729 B) — MLR flare/particle object constructor.
 * __thiscall, RET 0x8.
 *
 * Initializes a large particle/flare object: allocates sub-objects via
 * FUN_004ae3c0, sets up curve channels, and calls virtual methods
 * (vtable+0x20) on a source object to copy parameters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00493660(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004ae5a0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004979e0(void);

__declspec(naked) void FUN_00496c80(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    ebx
        push    edi
        mov     esi, ecx
        push    0x52f
        call    FUN_00493660
        mov     dword ptr [esi + 0x60], 0x0
        lea     ebp, [esi + 0x60]
        mov     dword ptr [esi + 0x68], 0x0
        mov     dword ptr [esi + 0x70], 0x0
        lea     ecx, [esi + 0x7c]
        mov     dword ptr [esi + 0x78], 0x6
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x88], 0x2
        lea     ecx, [esi + 0xa4]
        mov     dword ptr [esi + 0xa0], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xb0]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xc4]
        mov     dword ptr [esi + 0xc0], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xd0]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xe4]
        mov     dword ptr [esi + 0xe0], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xf0]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x104]
        mov     dword ptr [esi + 0x100], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x110]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x124]
        mov     dword ptr [esi + 0x120], 0x5
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
        xor     eax, eax
        mov     dword ptr [esi + 0x17c], eax
        push    ebx
        mov     dword ptr [esi + 0x180], eax
        mov     dword ptr [esi + 0x184], eax
        push    edi
        mov     ecx, ebp
        mov     dword ptr [esi + 0x188], eax
        mov     dword ptr [esi], 0x7701c8
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi + 0x68]
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi + 0x70]
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi + 0x7c]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x88]
        call    FUN_004adf70
        mov     eax, dword ptr [edi]
        push    0x1
        lea     ecx, [esi + 0x9c]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0xa4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0xb0]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0xbc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0xc4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0xd0]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0xdc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0xe4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0xf0]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0xfc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x104]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x110]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x11c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x124]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x130]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x13c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x140]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x14c]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x158]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x164]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x170]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [esi + 0x178]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [esi + 0x179]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, esi
        mov     dword ptr [esi + 0x174], edx
        call    FUN_004979e0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
