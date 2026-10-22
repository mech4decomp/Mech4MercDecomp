/*
 * FUN_006665f0 (76 B) — __cdecl, one byte param.
 *
 * Calls FUN_0064d170() then FUN_0064c950(result). If the result is
 * neither DAT_0080d9bc nor DAT_0080d9b4, calls FUN_00562f40(0x10).
 * Then if param != 0 calls FUN_0069ae70(7,0xb), else FUN_0069ae70(0x11,0x37).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0064d170(void);
extern int __cdecl FUN_0064c950(int);
extern void __cdecl FUN_00562f40(int);
extern void __cdecl FUN_0069ae70(int, int);

extern int g_0080d9bc;
extern int g_0080d9b4;

__declspec(naked) void __cdecl FUN_006665f0(char param)
{
    __asm {
        call    FUN_0064d170
        push    eax
        call    FUN_0064c950
        mov     ecx, dword ptr [g_0080d9bc]
        add     esp, 0x4
        cmp     eax, ecx
        jz      L_skip
        cmp     eax, dword ptr [g_0080d9b4]
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
