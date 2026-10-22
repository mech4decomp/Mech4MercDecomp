/*
 * FUN_005fc2f0 (359 B) — MechWarrior4::MWMover construction/init.
 * Allocates the MWMover object (0xa4 bytes), initializes it via
 * FUN_00501a20, then builds an ExecutionState and three tread state
 * objects (IsDark/LTread/RTread) and registers them via FUN_005016b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f26a0;
extern int g_007dc8c8;
extern int g_007f26a4;

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_00501500(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_005013f0(void);

__declspec(naked) void FUN_005fc2f0(void)
{
    __asm {
        push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      loc_5fc34b
        mov     ecx, dword ptr [g_007f26a0]
        mov     edx, dword ptr [g_007dc8c8]
        push    0x502c60
        push    0x5028b0
        push    0x507b30
        push    0x0
        push    0x507b10
        push    ecx
        push    0x692f40
        push    0x5fc490
        push    0x0
        push    0x0
        push    edx
        push    0x78addc
        push    0x421
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [g_007f26a4], eax
        jmp     loc_5fc355
loc_5fc34b:
        mov     dword ptr [g_007f26a4], 0x0
loc_5fc355:
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      loc_5fc37d
        push    0xe0
        push    0x422
        push    0x773250
        push    0x1
        mov     ecx, eax
        call    FUN_00501500
        jmp     loc_5fc37f
loc_5fc37d:
        xor     eax, eax
loc_5fc37f:
        push    esi
        push    eax
        mov     eax, dword ptr [g_007f26a4]
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      loc_5fc3bb
        push    0x210
        push    0x1
        push    0x78add4
        push    0xa
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x773234
        jmp     loc_5fc3bd
loc_5fc3bb:
        xor     esi, esi
loc_5fc3bd:
        mov     ecx, dword ptr [g_007f26a4]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      loc_5fc3f9
        push    0x214
        push    0x9
        push    0x78adcc
        push    0xb
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7895d8
        jmp     loc_5fc3fb
loc_5fc3f9:
        xor     esi, esi
loc_5fc3fb:
        mov     edx, dword ptr [g_007f26a4]
        push    esi
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      loc_5fc445
        push    0x244
        push    0x9
        push    0x78adc4
        push    0xc
        mov     ecx, esi
        call    FUN_005013f0
        mov     eax, dword ptr [g_007f26a4]
        push    esi
        lea     ecx, [eax + 0x44]
        mov     dword ptr [esi], 0x7895d8
        call    FUN_005016b0
        pop     esi
        ret
loc_5fc445:
        mov     eax, dword ptr [g_007f26a4]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0
        pop     esi
        ret
    }
}
