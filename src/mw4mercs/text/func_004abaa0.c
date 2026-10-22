/*
 * FUN_004abaa0 (529 B) — MLR subsystem constructor variant (__thiscall).
 * Calls base FUN_00493880, initializes member fields (many zeroed, some
 * float constants 0x3f800000/0x40a00000), and constructs sub-objects via
 * FUN_004aeb30 / FUN_004ade00 / FUN_004adfb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00493880(void);
extern void __cdecl FUN_004aeb30(int);
extern void __cdecl FUN_004ade00(int);
extern void __cdecl FUN_004adfb0(int);

__declspec(naked) void FUN_004abaa0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        call    FUN_00493880
        xor     ebx, ebx
        push    0x40a00000
        lea     ecx, [esi + 0x68]
        mov     dword ptr [esi + 0x64], ebx
        call    FUN_004aeb30
        push    ebx
        lea     ecx, [esi + 0x74]
        call    FUN_004ade00
        push    ebx
        lea     ecx, [esi + 0x80]
        call    FUN_004ade00
        push    ebx
        lea     ecx, [esi + 0x8c]
        call    FUN_004ade00
        push    ebx
        lea     ecx, [esi + 0xa0]
        mov     dword ptr [esi + 0x9c], ebx
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0xb8]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xc4]
        mov     byte ptr [esi + 0xd0], bl
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xd8]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xe4]
        mov     byte ptr [esi + 0xf8], bl
        call    FUN_004adfb0
        push    ebx
        lea     ecx, [esi + 0x154]
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0x168]
        mov     byte ptr [esi + 0x174], bl
        call    FUN_004ade00
        push    ebx
        lea     ecx, [esi + 0x17c]
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0x190]
        mov     byte ptr [esi + 0x19c], bl
        call    FUN_004ade00
        push    ebx
        lea     ecx, [esi + 0x1a4]
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0x1b8]
        mov     byte ptr [esi + 0x1c4], bl
        call    FUN_004ade00
        mov     dword ptr [esi + 0x104], ebx
        push    0x3f800000
        lea     ecx, [esi + 0x108]
        mov     byte ptr [esi + 0x114], bl
        call    FUN_004ade00
        mov     dword ptr [esi + 0x120], ebx
        push    0x3f800000
        lea     ecx, [esi + 0x124]
        mov     byte ptr [esi + 0x130], bl
        call    FUN_004ade00
        mov     dword ptr [esi + 0x13c], ebx
        push    0x3f800000
        lea     ecx, [esi + 0x140]
        mov     byte ptr [esi + 0x14c], bl
        call    FUN_004ade00
        push    ebx
        lea     ecx, [esi + 0x1cc]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x1d8]
        mov     byte ptr [esi + 0x1e4], bl
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x1ec]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x1f8]
        mov     byte ptr [esi + 0x204], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0x20c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x218]
        mov     byte ptr [esi + 0x224], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0x22c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x238]
        mov     byte ptr [esi + 0x244], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0x24c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x258]
        mov     byte ptr [esi + 0x264], bl
        call    FUN_004ade00
        pop     esi
        pop     ebx
        ret
    }
}
