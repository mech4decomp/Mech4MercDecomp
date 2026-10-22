/*
 * FUN_00747900 (200 B) — __cdecl, no args, returns uint.
 *
 * Computes a global timer value (0x007b76b0) from a flag in 0x008b2520,
 * calls FUN_0074b5b0 / FUN_007479d0(1), then conditionally runs a nested
 * probe loop calling FUN_007477f0 (a __stdcall 2-arg helper) to detect
 * hardware, and finally returns (0x008b7a28 != 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_008b2520;
extern unsigned int g_007b76b0;
extern unsigned int g_008b2888;
extern unsigned int g_008b79e4;
extern unsigned int g_008b7a28;
extern void __stdcall FUN_0074b5b0(void);
extern void __stdcall FUN_007479d0(int);
extern unsigned int __stdcall FUN_007477f0(int, int);

__declspec(naked) unsigned int __cdecl FUN_00747900(void)
{
    __asm {
        mov     eax, dword ptr [g_008b2520]
        and     eax, 0x2000000
        neg     eax
        sbb     eax, eax
        and     eax, 0xfffffe0c
        push    esi
        add     eax, 0x3e8
        push    edi
        mov     dword ptr [g_007b76b0], eax
        call    FUN_0074b5b0
        push    0x1
        call    FUN_007479d0
        test    dword ptr [g_008b2520], 0x400000
        mov     dword ptr [g_008b2888], 0x0
        jz      L_7479b7
        mov     eax, dword ptr [g_008b79e4]
        test    eax, eax
        jnz     L_7479b7
        xor     al, al
        mov     edi, 0x100
    L_747951:
        test    al, al
        jnz     L_747973
        xor     esi, esi
    L_747957:
        test    al, al
        jnz     L_747968
        push    edi
        push    esi
        call    FUN_007477f0
        inc     esi
        cmp     esi, 0x3
        jl      L_747957
    L_747968:
        sar     edi, 0x1
        cmp     edi, 0x8
        jg      L_747951
        test    al, al
        jz      L_747978
    L_747973:
        pop     edi
        xor     al, al
        pop     esi
        ret
    L_747978:
        push    0x10
        push    0x2
        call    FUN_007477f0
        push    0x10
        push    0x2
        call    FUN_007477f0
        push    0x10
        push    0x2
        call    FUN_007477f0
        push    0x10
        push    0x2
        call    FUN_007477f0
        push    0x20
        push    0x2
        call    FUN_007477f0
        push    0x20
        push    0x2
        call    FUN_007477f0
        push    0x20
        push    0x2
        call    FUN_007477f0
    L_7479b7:
        mov     edx, dword ptr [g_008b7a28]
        xor     ecx, ecx
        cmp     ecx, edx
        sbb     eax, eax
        pop     edi
        neg     eax
        pop     esi
        ret
    }
}
