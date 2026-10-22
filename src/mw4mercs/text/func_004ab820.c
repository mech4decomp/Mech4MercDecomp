/*
 * FUN_004ab820 (630 B) — MLR subsystem method (__thiscall, RET 0x4).
 * Calls base FUN_00493940, then constructs a series of sub-objects
 * (FUN_004add70 / FUN_004ae560 / FUN_004addb0 / FUN_004adf40) and makes
 * virtual calls through param_1's vtable slot +0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00493940(int);
extern void __cdecl FUN_004add70(int);
extern void __cdecl FUN_004ae560(int);
extern void __cdecl FUN_004addb0(int);
extern void __cdecl FUN_004adf40(int);

__declspec(naked) void FUN_004ab820(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00493940
        push    esi
        lea     ecx, [edi + 0x60]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x68]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x74]
        call    FUN_004addb0
        push    esi
        lea     ecx, [edi + 0x80]
        call    FUN_004addb0
        push    esi
        lea     ecx, [edi + 0x8c]
        call    FUN_004addb0
        push    esi
        lea     ecx, [edi + 0x98]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0xa0]
        call    FUN_004adf40
        push    esi
        lea     ecx, [edi + 0xb8]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xc4]
        call    FUN_004ae560
        mov     eax, dword ptr [esi]
        push    1
        lea     ecx, [edi + 0xd0]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea     ecx, [edi + 0xd8]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xe4]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0xf8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x100]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x108]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x114]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x11c]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x124]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x130]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x138]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x140]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x14c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x154]
        call    FUN_004adf40
        push    esi
        lea     ecx, [edi + 0x168]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x174]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x17c]
        call    FUN_004adf40
        push    esi
        lea     ecx, [edi + 0x190]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x19c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x1a4]
        call    FUN_004adf40
        push    esi
        lea     ecx, [edi + 0x1b8]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x1c4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x1cc]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x1d8]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x1e4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x1ec]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x1f8]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x204]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x20c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x218]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x224]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x22c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x238]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x244]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x24c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x258]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x264]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        add     edi, 0x268
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     4
    }
}
