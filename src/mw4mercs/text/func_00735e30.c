/*
 * FUN_00735e30 (205 B) — __fastcall method (ECX = this).
 *
 * Compares/copies a structure at 0x8b27f8, manipulates flags, and calls
 * several helpers. Recurses on itself.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008b2804;
extern unsigned short g_008b27f8;
extern unsigned short g_008b27fa;
extern unsigned short g_008b27fc;
extern unsigned short g_008b27fe;
extern int g_008b280c;
extern int g_00849320;
extern void __stdcall FUN_00740db0(int);
extern int __stdcall FUN_007539e0(int a, int b, int c);
extern void __stdcall FUN_006f4940(int a, int b);

__declspec(naked) void __fastcall FUN_00735e30(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0xc]
        cmp     dword ptr [ebx + 0x8], eax
        jz      L_5EEE
        cmp     ebx, 0x8b27f8
        jz      L_5ECD
        mov     ecx, dword ptr [g_008b2804]
        test    ecx, ecx
        jz      L_5EA2
        mov     cx, word ptr [ebx]
        cmp     cx, word ptr [g_008b27f8]
        jnz     L_5E98
        mov     dx, word ptr [ebx + 0x2]
        cmp     dx, word ptr [g_008b27fa]
        jnz     L_5E98
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0x6]
        xor     cx, word ptr [g_008b27fe]
        test    ecx, 0x801
        jnz     L_5E98
        xor     edx, edx
        mov     dx, word ptr [ebx + 0x4]
        xor     dx, word ptr [g_008b27fc]
        test    edx, 0x1c08
        jz      L_5ECD
L_5E98:
        mov     ecx, 0x8b27f8
        call    FUN_00735e30
L_5EA2:
        push    esi
        push    edi
        mov     esi, ebx
        mov     ecx, 0xe
        mov     edi, 0x8b27f8
        rep movsd
        __asm _emit 0x66 __asm _emit 0x81 __asm _emit 0x63 __asm _emit 0x04 __asm _emit 0xEF __asm _emit 0xFF /* __emit: and word ptr [ebx+4],0xffef - MSVC6 uses imm8 (66 83 63 04 EF) but ref uses imm16 (66 81 63 04 EF FF) */
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0xc], 0
        mov     dword ptr [g_008b280c], 0x7a66a4
        pop     ebx
        ret
L_5ECD:
        push    eax
        call    FUN_00740db0
        push    1
        push    2
        push    0
        mov     ecx, ebx
        call    FUN_007539e0
        neg     eax
        push    eax
        mov     eax, dword ptr [g_00849320]
        push    eax
        call    FUN_006f4940
L_5EEE:
        __asm _emit 0x66 __asm _emit 0x81 __asm _emit 0x63 __asm _emit 0x04 __asm _emit 0xEF __asm _emit 0xFF /* __emit: and word ptr [ebx+4],0xffef - MSVC6 uses imm8 (66 83 63 04 EF) but ref uses imm16 (66 81 63 04 EF FF) */
        mov     dword ptr [ebx + 0xc], 0
        pop     ebx
        ret
    }
}
