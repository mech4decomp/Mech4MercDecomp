/*
 * FUN_00722230 (117 B) — __cdecl init routine.
 *
 * Calls FUN_006faa30(0,0), zeroes a 599-dword buffer at 0x857f40 via
 * rep stosd, calls FUN_00755280, then a series of init helpers, sets
 * several globals, calls FUN_006faa30(1,0) and two more helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006faa30(void);
extern void __cdecl FUN_00755280(void);
extern void __cdecl FUN_00723a10(void);
extern void __cdecl FUN_00723360(void);
extern void __cdecl FUN_007227f0(void);
extern void __cdecl FUN_00722390(void);
extern void __cdecl FUN_007222b0(void);

extern int g_858bfc;
extern int g_896cc0;
extern int g_7b7104;
extern int g_7b7108;
extern int g_7b710c;

__declspec(naked) void __cdecl FUN_00722230(void)
{
    __asm {
        push    edi
        push    0x0
        push    0x0
        call    FUN_006faa30
        xor     eax, eax
        push    eax
        push    0x857f40
        push    0x7a2850
        mov     ecx, 0x257
        mov     edi, 0x857f40
        rep stosd
        mov     eax, dword ptr [g_858bfc]
        push    0x700
        push    eax
        call    FUN_00755280
        call    FUN_00723a10
        call    FUN_00723360
        call    FUN_007227f0
        mov     eax, 0x2
        push    0x0
        push    0x1
        mov     dword ptr [g_896cc0], 0
        mov     dword ptr [g_7b7104], eax
        mov     dword ptr [g_7b7108], eax
        mov     dword ptr [g_7b710c], eax
        call    FUN_006faa30
        call    FUN_00722390
        call    FUN_007222b0
        pop     edi
        ret
    }
}
