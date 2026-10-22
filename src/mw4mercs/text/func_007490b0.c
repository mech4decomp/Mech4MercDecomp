/*
 * FUN_007490b0 (220 B) — __stdcall, RET 0x8 (two params).
 *
 * Reads a global flag; if bit 0x40000 of g_008b2520 is clear, calls
 * FUN_007355d0. On failure (<0) builds a local buffer and calls
 * FUN_00735710 / FUN_00735230 / FUN_007355d0 / FUN_00740db0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_008b2520;
extern char  g_0087dd0a;
extern int   g_0085a230;

extern void __stdcall FUN_007355d0(void);
extern void __stdcall FUN_00735710(void);
extern void __stdcall FUN_00735230(void);
extern void __stdcall FUN_00740db0(void);

__declspec(naked) void __stdcall FUN_007490b0(void)
{
    __asm {
        mov     ecx, dword ptr [g_008b2520]
        sub     esp, 0x80
        push    ebx
        mov     ebx, dword ptr [esp + 0x8c]
        or      eax, -1
        test    ecx, 0x40000
        push    esi
        mov     esi, dword ptr [esp + 0x8c]
        mov     byte ptr [g_0087dd0a], 1
        jne     skip_call
        push    0
        push    0x1000000
        push    0
        push    ebx
        push    0
        push    esi
        call    FUN_007355d0
skip_call:
        test    eax, eax
        mov     byte ptr [g_0087dd0a], 0
        jge     done
        push    edi
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [esp + 0x10]
        rep stosd
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        mov     dword ptr [esp + 0x18], 0x7c
        call    FUN_00735710
        mov     eax, dword ptr [g_0085a230]
        push    0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        mov     dword ptr [esp + 0x24], 0x1007
        mov     dword ptr [esp + 0x88], 0x1800
        call    FUN_00735230
        mov     ecx, dword ptr [esp + 0xc]
        push    0
        push    0x1000000
        push    0
        push    ebx
        push    0
        push    ecx
        call    FUN_007355d0
        mov     edx, dword ptr [esp + 0xc]
        push    0
        push    0x1000000
        push    0
        push    edx
        push    0
        push    esi
        call    FUN_007355d0
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_00740db0
        pop     edi
done:
        pop     esi
        pop     ebx
        add     esp, 0x80
        ret     8
    }
}
