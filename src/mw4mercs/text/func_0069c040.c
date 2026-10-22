/*
 * FUN_0069c040 (336 B) — State-machine driver keyed on global 0x008058ac.
 *
 * Calls FUN_00649150 / FUN_00649fb0, then dispatches on DAT_008058ac (1 /
 * 0x36 / 0x26 / 0xe / other), building a value via FUN_0064fc80 /
 * FUN_00649ec0 / FUN_0064c950, calling FUN_0064c9e0 twice, looping through
 * FUN_0069c6b0 / FUN_006498f0, and finally FUN_0064a020.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_8058ac;   /* 0x008058ac */
extern int g_80d9bc;             /* 0x0080d9bc */
extern void __cdecl FUN_00649150(void);
extern int __cdecl FUN_00649fb0(int a);
extern void __cdecl FUN_0064fc80(void *a);
extern void __cdecl FUN_00649ec0(int a);
extern void __cdecl FUN_00562f40(int a);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_0069ae70(int a, int b);
extern int __cdecl FUN_0064d170(void);
extern int __cdecl FUN_0064c9e0(void *a, void *b);
extern void __cdecl FUN_0069c6b0(void);
extern char __cdecl FUN_006498f0(int a);
extern void __cdecl FUN_0064a020(int a);

__declspec(naked) void __cdecl FUN_0069c040(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        call    FUN_00649150
        push    0x0
        call    FUN_00649fb0
        mov     edi, eax
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x4
        cmp     eax, 0x1
        jnz     L_C0C4
        lea     eax, [esp + 0x8]
        push    eax
        mov     dword ptr [esp + 0xc], 0x0
        call    FUN_0064fc80
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        call    FUN_00649ec0
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + 0x18]
        add     esp, 0x8
        cmp     eax, 0x3
        jz      L_C093
        push    0x22
        call    FUN_00562f40
        add     esp, 0x4
L_C093:
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax + 0x3c]
        push    ecx
        call    FUN_0064c950
        add     esp, 0x4
        mov     esi, eax
        call    FUN_00649150
        cmp     esi, dword ptr [g_80d9bc]
        jz      L_C0D3
        cmp     dword ptr [esi + 0x4], 0x2
        jz      L_C0D3
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
        jmp     L_C0D3
L_C0C4:
        push    0x23
        call    FUN_00562f40
        add     esp, 0x4
        mov     esi, 0x80da38
L_C0D3:
        push    0x13
        push    0xa
        call    FUN_0069ae70
        call    FUN_0064d170
        push    eax
        push    esi
        call    FUN_0064c9e0
        add     esp, 0x10
        test    eax, eax
        jnz     L_C0F9
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
L_C0F9:
        cmp     dword ptr [g_8058ac], 0x36
        jnz     L_C109
        call    FUN_00649150
        jmp     L_C113
L_C109:
        push    0x24
        call    FUN_00562f40
        add     esp, 0x4
L_C113:
        call    FUN_0064d170
        push    eax
        push    esi
        call    FUN_0064c9e0
        add     esp, 0x8
        test    eax, eax
        jnz     L_C130
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
L_C130:
        push    0x35
        push    0x21
        call    FUN_0069ae70
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x8
        cmp     eax, 0x26
        jz      L_C17A
L_C146:
        call    FUN_0069c6b0
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0xe
        jnz     L_C164
L_C155:
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0xe
        jz      L_C155
L_C164:
        cmp     eax, 0x26
        jz      L_C17A
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_C146
L_C17A:
        push    0x31
        push    0x26
        call    FUN_0069ae70
        push    edi
        call    FUN_0064a020
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
