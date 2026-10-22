/*
 * FUN_006664D0 (122 B) — __cdecl, one byte stack param.
 *
 * Calls FUN_00650080(&DAT_007f3254); if nonzero, calls FUN_0064d170 /
 * FUN_0064c950 and compares against DAT_0080d9bc (calling FUN_00562f40(0x10)
 * on mismatch); else calls a chain of no-arg helpers. Finally dispatches
 * FUN_0069ae70(7,0xb) or FUN_0069ae70(0x11,0x37) based on param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00650080(void *p);
extern int __cdecl FUN_0064d170(void);
extern int __cdecl FUN_0064c950(int v);
extern void __cdecl FUN_00562f40(int v);
extern void __cdecl FUN_00649eb0(void);
extern void __cdecl FUN_00649f10(void);
extern void __cdecl FUN_00649f90(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0069ae70(int a, int b);

extern int g_0080d9bc;

__declspec(naked) void __stdcall FUN_006664d0(char param)
{
    __asm {
        push    0x7f3254
        call    FUN_00650080
        add     esp, 0x4
        test    eax, eax
        jz      l_505
        call    FUN_0064d170
        push    eax
        call    FUN_0064c950
        mov     ecx, dword ptr [g_0080d9bc]
        add     esp, 0x4
        cmp     eax, ecx
        jz      l_528
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
        jmp     l_528
    l_505:
        call    FUN_00649eb0
        call    FUN_00649f10
        call    FUN_00649eb0
        call    FUN_00649eb0
        call    FUN_00649f90
        call    FUN_00649150
        call    FUN_00649eb0
    l_528:
        mov     al, byte ptr [esp + 0x4]
        test    al, al
        jz      l_53d
        push    0xb
        push    0x7
        call    FUN_0069ae70
        add     esp, 0x8
        ret
    l_53d:
        push    0x37
        push    0x11
        call    FUN_0069ae70
        add     esp, 0x8
        ret
    }
}
