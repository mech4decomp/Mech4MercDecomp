/*
 * FUN_0069beb0 (135 B) — cdecl, no stack params, plain RET.
 *
 * Initializes via FUN_00649150/FUN_00649fb0/FUN_0064d170, conditionally
 * calls FUN_00562f40, then runs a state loop driven by the global
 * DAT_008058ac (0x25 exit, 0xe inner loop), calling FUN_0069c6b0 /
 * FUN_00649150 / FUN_006498f0, and finally FUN_0069ae70 + FUN_0064a020.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_0080d9b0;
extern unsigned int g_008058ac;
extern void __cdecl FUN_00649150(void);
extern int __cdecl FUN_00649fb0(int a);
extern int __cdecl FUN_0064d170(void);
extern void __cdecl FUN_00562f40(int a);
extern void __cdecl FUN_0069ae70(int a, int b);
extern void __cdecl FUN_0069c6b0(void);
extern char __cdecl FUN_006498f0(const char *s);
extern void __cdecl FUN_0064a020(int a);

__declspec(naked) void __stdcall FUN_0069beb0(void)
{
    __asm {
        push    esi
        call    FUN_00649150
        push    0x0
        call    FUN_00649fb0
        add     esp, 0x4
        mov     esi, eax
        call    FUN_0064d170
        cmp     eax, dword ptr [g_0080d9b0]
        jz      L_d9
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
L_d9:
        push    0x35
        push    0x21
        call    FUN_0069ae70
        mov     eax, dword ptr [g_008058ac]
        add     esp, 0x8
        cmp     eax, 0x25
        jz      L_23
L_ef:
        call    FUN_0069c6b0
        mov     eax, dword ptr [g_008058ac]
        cmp     eax, 0xe
        jnz     L_0d
L_fe:
        call    FUN_00649150
        mov     eax, dword ptr [g_008058ac]
        cmp     eax, 0xe
        jz      L_fe
L_0d:
        cmp     eax, 0x25
        jz      L_23
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_ef
L_23:
        push    0x30
        push    0x25
        call    FUN_0069ae70
        push    esi
        call    FUN_0064a020
        add     esp, 0xc
        pop     esi
        ret
    }
}
