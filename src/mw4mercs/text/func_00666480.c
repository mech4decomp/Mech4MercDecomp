/*
 * FUN_00666480 (68 B) — __cdecl, one byte param. Compares a value derived
 * from FUN_0064d170/FUN_0064c950 against a global; if different, calls
 * FUN_00562f40(0x10). Then dispatches to FUN_0069ae70 based on param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_80d9bc;      /* 0x0080d9bc */

extern int  __cdecl FUN_0064d170(void);
extern int  __cdecl FUN_0064c950(int arg);
extern void __cdecl FUN_00562f40(int arg);
extern void __cdecl FUN_0069ae70(int a, int b);

__declspec(naked) void __cdecl FUN_00666480(char param)
{
    __asm {
        call    FUN_0064d170
        push    eax
        call    FUN_0064c950
        mov     ecx, dword ptr [g_80d9bc]
        add     esp, 0x4
        cmp     eax, ecx
        jz      L_skip
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
L_skip:
        mov     al, byte ptr [esp + 0x4]
        test    al, al
        jz      L_else
        push    0xb
        push    0x7
        call    FUN_0069ae70
        add     esp, 0x8
        ret
L_else:
        push    0x37
        push    0x11
        call    FUN_0069ae70
        add     esp, 0x8
        ret
    }
}
