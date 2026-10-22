/*
 * FUN_00717d90 (96 B) — Guarded dispatcher. If global byte 0x008b2868
 * is set and esi (param0) is within a valid range (0x008b2874 .. +0x29040)
 * and the object flag bit 2 is clear, calls FUN_006FAB90(esi, 0x007a2780)
 * and traps (int 3) on failure. Then forwards 7 params to FUN_007537D0.
 *
 * NOTE: Ghidra only disassembled the first instruction; the full body
 * was recovered from the raw reference bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_8b2868;   /* 0x008b2868 enable flag */
extern unsigned int  g_8b2874;   /* 0x008b2874 range base */

extern void __cdecl FUN_006FAB90(void *a, void *b);
extern void __cdecl FUN_007537D0(void *this_, void *p1, void *p2, void *p3,
                                 void *p4, void *p5, void *p6);

__declspec(naked) void FUN_00717d90(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [g_8b2868]
        test    al, al
        push    esi
        mov     esi, dword ptr [ebp + 8]
        jz      LDB9
        mov     eax, dword ptr [g_8b2874]
        cmp     esi, eax
        jb      LDB9
        lea     ecx, [esi - 0x29040]
        cmp     ecx, eax
        jae     LDB9
        test    byte ptr [esi + 4], 4
        jnz     LDCB
LDB9:
        push    esi
        push    0x007a2780
        call    FUN_006FAB90
        add     esp, 8
        test    eax, eax
        jz      LDCB
        int     3
LDCB:
        mov     edx, dword ptr [ebp + 0x20]
        mov     eax, dword ptr [ebp + 0x1C]
        mov     ecx, dword ptr [ebp + 0x18]
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xC]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_007537D0
        pop     esi
        pop     ebp
        ret     0x1C
    }
}
