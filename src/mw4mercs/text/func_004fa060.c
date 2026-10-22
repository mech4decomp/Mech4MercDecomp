/*
 * FUN_004fa060 (53 B) — __thiscall. Clears flag at this+0x168, calls
 * FUN_004df2a0 if global set, then FUN_00704a80(0x2a,0,0,0) and stores
 * result into g_007b4360, then FUN_0072c090(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6b4;
extern char g_007b4360;

extern void FUN_004df2a0(void);
extern int FUN_00704a80(int, int, int, int);
extern void FUN_0072c090(int);

__declspec(naked) void FUN_004fa060(void)
{
    __asm {
        mov     byte ptr [ecx + 0x168], 0x0
        mov     ecx, dword ptr [g_007dc6b4]
        test    ecx, ecx
        jz      L_skip

        call    FUN_004df2a0

L_skip:
        push    0x0
        push    0x0
        push    0x0
        push    0x2a
        call    FUN_00704a80
        test    eax, eax
        setnz   al
        push    0x0
        mov     byte ptr [g_007b4360], al
        call    FUN_0072c090
        ret
    }
}
