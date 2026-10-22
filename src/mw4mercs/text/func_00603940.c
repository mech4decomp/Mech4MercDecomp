/*
 * FUN_00603940 (96 B) — allocates an object (0x24 bytes), stores it into
 * global 0x007f27a0 (or 0 on failure), then calls FUN_00604e50 and builds
 * a second object via FUN_006f4710 stored into global 0x007f27a4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc69c;
extern int g_007f27a0;
extern int g_007f27b4;
extern int g_007f27a4;
extern char g_78b7c8[];
extern char g_78b898[];
extern char g_78b884[];
extern void __cdecl FUN_004084d0(int);
extern int __cdecl FUN_004dd270(void);
extern void __cdecl FUN_00604e50(void);
extern int __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_00603940(void)
{
    __asm {
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_skip
        mov     ecx, dword ptr [g_007dc69c]
        push    0x0
        push    0x0
        push    offset g_78b7c8
        push    0x9
        push    ecx
        push    offset g_78b898
        push    0x46b
        mov     ecx, eax
        call    FUN_004dd270
        mov     dword ptr [g_007f27a0], eax
        jmp     L_cont
L_skip:
        mov     dword ptr [g_007f27a0], 0x0
L_cont:
        call    FUN_00604e50
        mov     edx, dword ptr [g_007f27b4]
        push    edx
        push    0x0
        push    offset g_78b884
        call    FUN_006f4710
        mov     dword ptr [g_007f27a4], eax
        ret
    }
}
