/*
 * FUN_00403790 (237 B) — engine/init region. __stdcall (RET 0xc).
 * Reads a global init flag; if unset, initializes options/archive state;
 * otherwise loads options.ini "Server" section. Then validates the
 * default server name and dispatches to FUN_00402f90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b7dd0;
extern int g_008589b4;
extern int g_007b7e6c;
extern int g_007b7dc0;
extern int g_007b7dc8;

extern void __cdecl FUN_00402d70(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_0040e4a0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00402e60(void);
extern char __cdecl FUN_00401b80(void);
extern void __cdecl FUN_00402f90(void);

__declspec(naked) void FUN_00403790(void)
{
    __asm {
        mov     eax, dword ptr [g_007b7dd0]
        sub     esp, 0x50
        test    eax, eax
        jnz     L1
        push    0x0
        push    0x0
        push    0x0
        call    FUN_00402d70
        mov     dword ptr [g_008589b4], 0x4
        mov     dword ptr [g_007b7e6c], 0x0
        mov     dword ptr [g_007b7dc0], 0x0
        jmp     L2
L1:
        push    0x1
        push    0x0
        push    0x77826c
        lea     ecx, [esp+0xc]
        call    FUN_0040dca0
        push    0x778288
        lea     ecx, [esp+0x4]
        call    FUN_0040eda0
        mov     ecx, dword ptr [g_007b7dd0]
        push    ecx
        push    0x778300
        mov     ecx, eax
        call    FUN_00411c40
        __emit 0x8D  /* lea ecx,[esp+0] — MSVC6 drops the 00 disp byte (8D 0C 24) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040e4a0
        __emit 0x8D  /* lea ecx,[esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040de20
L2:
        mov     eax, dword ptr [g_007b7dc8]
        test    eax, eax
        jnz     L3
        push    0x0
        push    0x0
        push    0x0
        call    FUN_00402e60
L3:
        mov     edx, dword ptr [g_007b7dd0]
        push    edx
        call    FUN_00401b80
        add     esp, 0x4
        test    al, al
        jnz     L4
        mov     eax, 0x5
        add     esp, 0x50
        ret     0xc
L4:
        mov     eax, dword ptr [g_007b7e6c]
        test    eax, eax
        jz      L6
        push    eax
        call    FUN_00401b80
        add     esp, 0x4
        test    al, al
        jnz     L5
        mov     eax, 0x5
        add     esp, 0x50
        ret     0xc
L5:
        mov     eax, dword ptr [g_007b7e6c]
L6:
        mov     ecx, dword ptr [g_007b7dd0]
        push    eax
        mov     eax, dword ptr [g_007b7dc8]
        push    eax
        push    ecx
        call    FUN_00402f90
        add     esp, 0x50
        ret     0xc
    }
}
