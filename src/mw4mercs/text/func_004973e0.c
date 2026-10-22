/*
 * FUN_004973e0 (340 B) - MLR particle/flare object constructor.
 * __thiscall (ECX = this).
 *
 * Initializes curve channels (FUN_004aeb30 / FUN_004adfb0) with default
 * values (1.0f = 0x3f800000), sets channel flags, and calls FUN_004979e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00493880(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_004adfb0(void);
extern void __cdecl FUN_004979e0(void);

__declspec(naked) void FUN_004973e0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        call    FUN_00493880
        xor     ebx, ebx
        mov     dword ptr [esi + 0x64], 0x3b83126f
        mov     dword ptr [esi + 0x6c], ebx
        push    ebx
        lea     ecx, [esi + 0x7c]
        mov     dword ptr [esi + 0x74], ebx
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x88]
        mov     byte ptr [esi + 0x9c], bl
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0xa4]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xb0]
        mov     byte ptr [esi + 0xbc], bl
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xc4]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xd0]
        mov     byte ptr [esi + 0xdc], bl
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xe4]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xf0]
        mov     byte ptr [esi + 0xfc], bl
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x104]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x110]
        mov     byte ptr [esi + 0x11c], bl
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x124]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x130]
        mov     byte ptr [esi + 0x13c], bl
        call    FUN_004aeb30
        push    ebx
        lea     ecx, [esi + 0x140]
        call    FUN_004aeb30
        push    ebx
        lea     ecx, [esi + 0x14c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x158]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x164]
        call    FUN_004aeb30
        mov     eax, 0x2
        mov     ecx, esi
        mov     dword ptr [esi + 0x170], eax
        mov     dword ptr [esi + 0x174], eax
        mov     byte ptr [esi + 0x178], bl
        mov     byte ptr [esi + 0x179], bl
        call    FUN_004979e0
        pop     esi
        pop     ebx
        ret
    }
}
