/*
 * FUN_00493270 (217 B) — MLR subsystem init. Opens the gosFX log, calls
 * a series of per-subsystem init functions, initializes a set of global
 * float/vector constants, and tail-jumps to the final init.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00849304;
extern int g_007da920;
extern int g_007da8d4;
extern int g_007da8e4;
extern int g_007da8d8;
extern int g_007da8e8;
extern int g_007da8a4;
extern int g_007da8b4;
extern int g_007da8a8;
extern int g_007da8b8;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00493b00(void);
extern void __cdecl FUN_004ac090(void);
extern void __cdecl FUN_004aa520(void);
extern void __cdecl FUN_004a96a0(void);
extern void __cdecl FUN_004a8790(void);
extern void __cdecl FUN_004a70a0(void);
extern void __cdecl FUN_004a61d0(void);
extern void __cdecl FUN_004a4dd0(void);
extern void __cdecl FUN_004a40b0(void);
extern void __cdecl FUN_004a3a90(void);
extern void __cdecl FUN_004a2950(void);
extern void __cdecl FUN_004a1b70(void);
extern void __cdecl FUN_0049f6e0(void);
extern void __cdecl FUN_0049bfc0(void);
extern void __cdecl FUN_0049a990(void);
extern void __cdecl FUN_00498a30(void);
extern void __cdecl FUN_004960c0(void);
extern void __cdecl FUN_00494fe0(void);
extern void __cdecl FUN_00491db0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00493270(void)
{
    __asm {
        mov     eax, dword ptr [g_00849304]
        push    eax
        push    0x0
        push    0x7b2578
        call    FUN_006f4710
        push    eax
        mov     dword ptr [g_007da920], eax
        call    FUN_006f4950
        mov     ecx, dword ptr [esp + 0x4]
        push    ecx
        call    FUN_00493b00
        add     esp, 0x4
        call    FUN_004ac090
        call    FUN_004aa520
        call    FUN_004a96a0
        call    FUN_004a8790
        call    FUN_004a70a0
        call    FUN_004a61d0
        call    FUN_004a4dd0
        call    FUN_004a40b0
        call    FUN_004a3a90
        call    FUN_004a2950
        call    FUN_004a1b70
        call    FUN_0049f6e0
        call    FUN_0049bfc0
        call    FUN_0049a990
        call    FUN_00498a30
        call    FUN_004960c0
        call    FUN_00494fe0
        call    FUN_00491db0
        mov     dword ptr [g_007da8d4], 0x0
        mov     dword ptr [g_007da8e4], 0x3f800000
        mov     dword ptr [g_007da8d8], 0xbf800000
        mov     dword ptr [g_007da8e8], 0x0
        mov     dword ptr [g_007da8a4], 0x0
        mov     dword ptr [g_007da8b4], 0xbf800000
        mov     dword ptr [g_007da8a8], 0x3f800000
        mov     dword ptr [g_007da8b8], 0x0
        jmp     FUN_006f49a0
    }
}
