/*
 * FUN_10009ad0 (493 B) - version-check / config-write routine. Reads
 * "Version.ZS" and "Version.Schema" from the registry (FUN_1000b210),
 * compares against expected values, and if they don't match writes a
 * batch of default config values via FUN_1000b450 / FUN_1000b4d0.
 *
 * __stdcall, 1 param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_1000b210(void *, void *, void *);
extern int __cdecl FUN_1000b450(void *, void *, void *);
extern int __cdecl FUN_1000b4d0(void *, void *, void *);
extern void __cdecl FUN_1000a0d0(void);
extern void *g_1002114c;   /* wcsncmp IAT @ 0x1002114c */
extern void *g_100210dc;   /* _wtoi IAT @ 0x100210dc */

__declspec(naked) void __cdecl FUN_10009ad0(void)
{
    __asm {
        sub     esp, 0x200
        __emit 0x8D  /* __emit: MSVC6 drops the 00 disp on lea eax,[esp+0] (encodes 8D 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    esi
        mov     esi, dword ptr [esp + 0x208]
        push    0x100
        push    eax
        mov     ecx, dword ptr [esi + 0x1c]
        push    0x100260e4
        push    ecx
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jl      L_write
        push    0x100
        lea     edx, [esp + 0x8]
        push    0x100260d8
        push    edx
        call    dword ptr [g_1002114c]
        add     esp, 0xc
        test    eax, eax
        jnz     L_write
        mov     ecx, dword ptr [esi + 0x1c]
        lea     eax, [esp + 0x4]
        push    0x100
        push    eax
        push    0x100260b8
        push    ecx
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jl      L_write
        lea     edx, [esp + 0x4]
        push    edx
        call    dword ptr [g_100210dc]
        mov     ecx, dword ptr [esi + 0x18]
        add     esp, 4
        cmp     eax, ecx
        jz      L_done
L_write:
        push    0x10026080
        call    FUN_1000a0d0
        mov     eax, dword ptr [esi + 0x18]
        mov     ecx, dword ptr [esi + 0x1c]
        push    eax
        push    0x100260b8
        push    ecx
        call    FUN_1000b450
        mov     edx, dword ptr [esi + 0x1c]
        push    0x100260d8
        push    0x100260e4
        push    edx
        call    FUN_1000b4d0
        mov     eax, dword ptr [esi + 0x1c]
        push    0x1002607c
        push    0x10026068
        push    eax
        call    FUN_1000b4d0
        mov     ecx, dword ptr [esi + 0x1c]
        push    0x1002607c
        push    0x10026054
        push    ecx
        call    FUN_1000b4d0
        mov     edx, dword ptr [esi + 0x1c]
        push    0x1002607c
        push    0x1002603c
        push    edx
        call    FUN_1000b4d0
        mov     eax, dword ptr [esi + 0x1c]
        add     esp, 0x40
        push    0x1002607c
        push    0x1002602c
        push    eax
        call    FUN_1000b4d0
        mov     ecx, dword ptr [esi + 0x1c]
        push    0x1002607c
        push    0x10026014
        push    ecx
        call    FUN_1000b4d0
        mov     edx, dword ptr [esi + 0x1c]
        push    0x7a120
        push    0x10025ffc
        push    edx
        call    FUN_1000b450
        mov     eax, dword ptr [esi + 0x1c]
        push    0x127500
        push    0x10025fe4
        push    eax
        call    FUN_1000b450
        mov     ecx, dword ptr [esi + 0x1c]
        push    0x0
        push    0x10025fd0
        push    ecx
        call    FUN_1000b450
        mov     edx, dword ptr [esi + 0x1c]
        push    0x1
        push    0x10025fb4
        push    edx
        call    FUN_1000b450
        mov     eax, dword ptr [esi + 0x1c]
        add     esp, 0x48
        push    0x1002607c
        push    0x10025f9c
        push    eax
        call    FUN_1000b4d0
        mov     ecx, dword ptr [esi + 0x1c]
        push    0x1002607c
        push    0x10025f84
        push    ecx
        call    FUN_1000b4d0
        mov     edx, dword ptr [esi + 0x1c]
        push    0x1002607c
        push    0x10025f70
        push    edx
        call    FUN_1000b4d0
        mov     eax, dword ptr [esi + 0x1c]
        push    0x1002607c
        push    0x10025f54
        push    eax
        call    FUN_1000b4d0
        push    0x0
        mov     ecx, dword ptr [esi + 0x1c]
        push    0x10025f40
        push    ecx
        call    FUN_1000b450
        mov     edx, dword ptr [esi + 0x1c]
        push    0x1002607c
        push    0x10025f2c
        push    edx
        call    FUN_1000b4d0
        mov     eax, dword ptr [esi + 0x1c]
        add     esp, 0x48
        push    0x1002607c
        push    0x10025f10
        push    eax
        call    FUN_1000b4d0
        add     esp, 0xc
L_done:
        pop     esi
        add     esp, 0x200
        ret     4
    }
}
