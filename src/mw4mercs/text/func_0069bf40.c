/*
 * FUN_0069BF40 (246 B) — __cdecl, no params.
 * State-machine driver keyed on global 0x008058ac. Runs polling loops
 * via FUN_0069c6b0 / FUN_00649150, logs via FUN_00562f40 / FUN_0069ae70,
 * and dispatches through FUN_0064a020.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_80d9b0;   /* 0x0080d9b0 */
extern unsigned long g_8058ac;   /* 0x008058ac */
extern char g_7b5890[];          /* 0x007b5890 */

extern void __cdecl FUN_00649150(void);
extern int __cdecl FUN_00649fb0(int a);
extern int __cdecl FUN_0064d170(void);
extern void __cdecl FUN_00562f40(int a);
extern void __cdecl FUN_0069ae70(int a, int b);
extern void __cdecl FUN_0069c6b0(void);
extern char __cdecl FUN_006498f0(void *a);
extern void __cdecl FUN_0064a020(int a);

__declspec(naked) void __stdcall FUN_0069BF40(void)
{
    __asm {
        push    esi
        call    FUN_00649150
        push    0x0
        call    FUN_00649fb0
        add     esp, 0x4
        mov     esi, eax
        call    FUN_0064d170
        cmp     eax, dword ptr [g_80d9b0]
        jz      L_BF69
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
L_BF69:
        push    0x21
        push    0x35
        call    FUN_0069ae70
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x8
        cmp     eax, 0x24
        jz      L_BFBD
        cmp     eax, 0x23
        jz      L_BFBD
L_BF84:
        call    FUN_0069c6b0
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0xe
        jnz     L_BFA2
L_BF93:
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0xe
        jz      L_BF93
L_BFA2:
        cmp     eax, 0x24
        jz      L_BFBD
        cmp     eax, 0x23
        jz      L_BFBD
        push    offset g_7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_BF84
L_BFBD:
        push    esi
        call    FUN_0064a020
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x4
        cmp     eax, 0x23
        jnz     L_C028
        call    FUN_00649150
        push    0x0
        call    FUN_00649fb0
        mov     esi, eax
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x4
        cmp     eax, 0x24
        jz      L_C01F
L_BFEB:
        call    FUN_0069c6b0
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0xe
        jnz     L_C009
L_BFFA:
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0xe
        jz      L_BFFA
L_C009:
        cmp     eax, 0x24
        jz      L_C01F
        push    offset g_7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_BFEB
L_C01F:
        push    esi
        call    FUN_0064a020
        add     esp, 0x4
L_C028:
        push    0x2f
        push    0x24
        call    FUN_0069ae70
        add     esp, 0x8
        pop     esi
        ret
    }
}
