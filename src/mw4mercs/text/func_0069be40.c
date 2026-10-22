/*
 * FUN_0069be40 (100 B) — __cdecl, no params. State-machine loop driven by
 * DAT_008058ac: calls FUN_0069c6b0 / FUN_00649150 until state 0x37, then
 * FUN_0069ae70(0x37,0x20), FUN_0064d170, and optionally FUN_00562f40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008058ac;
extern int g_0080d9b0;
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0069c6b0(void);
extern char __cdecl FUN_006498f0(char *str);
extern void __cdecl FUN_0069ae70(int a, int b);
extern int __cdecl FUN_0064d170(void);
extern void __cdecl FUN_00562f40(int a);

__declspec(naked) void FUN_0069be40(void)
{
    __asm {
        call    FUN_00649150
        cmp     dword ptr [g_008058ac], 0x37
        jz      L_afterloop
L_loop:
        call    FUN_0069c6b0
        mov     eax, dword ptr [g_008058ac]
        cmp     eax, 0xe
        jnz     L_check
L_inner:
        call    FUN_00649150
        mov     eax, dword ptr [g_008058ac]
        cmp     eax, 0xe
        jz      L_inner
L_check:
        cmp     eax, 0x37
        jz      L_afterloop
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_loop
L_afterloop:
        push    0x20
        push    0x37
        call    FUN_0069ae70
        add     esp, 0x8
        call    FUN_0064d170
        cmp     eax, dword ptr [g_0080d9b0]
        jz      L_done
        push    0x10
        call    FUN_00562f40
        pop     ecx
L_done:
        ret
    }
}
