/*
 * FUN_004e0dd0 (196 B) — __cdecl init. Registers a class (vtable 0x773bb4)
 * via FUN_006f4710, allocates+constructs an object (0x217 bytes, vtable
 * 0x773b9c) into g_007dc6dc, registers three handler pairs via
 * FUN_0070f090, and conditionally builds a node via FUN_00411cb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc130;
extern int g_007dc6e4;
extern int g_007dc878;
extern int g_007dc6dc;
extern int g_007dc6e8;
extern void __stdcall FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __stdcall FUN_0070f090(void);
extern void __stdcall FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);

__declspec(naked) void FUN_004e0dd0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dc130]
        push    eax
        push    0x0
        push    0x773bb4
        call    FUN_006f4710
        push    0x20
        mov     dword ptr [g_007dc6e4], eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc_failed
        mov     ecx, dword ptr [g_007dc878]
        push    0x0
        push    0x0
        push    ecx
        push    0x773b9c
        push    0x217
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc6dc], eax
        jmp     L_reg
L_alloc_failed:
        mov     dword ptr [g_007dc6dc], 0x0
L_reg:
        push    0x0
        push    0x0
        push    0x4e0ed0
        push    0x4e0ea0
        push    0x773b6c
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    0x4e0ee0
        push    0x4e0eb0
        push    0x773b38
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    0x4e0ef0
        push    0x4e0ec0
        push    0x773b08
        call    FUN_0070f090
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      L_done
        push    0x76d9ec
        call    FUN_0040ecc0
        test    eax, eax
        jz      L_done
        push    0x0
        push    0x7dc6e8
        push    0x773b00
        mov     ecx, eax
        call    FUN_00411cb0
L_done:
        ret
    }
}
