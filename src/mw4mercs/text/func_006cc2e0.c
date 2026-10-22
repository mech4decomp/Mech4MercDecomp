/*
 * FUN_006cc2e0 (278 B) — Script teardown. Validates the current script
 * (DAT_0082f338) is in the active list (DAT_0082f348), frees its resources
 * (children, panes, script data) via FUN_006f4230, unlinks it from the
 * active list, and decrements the script count (DAT_0082eaf0).
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_0082f348;
extern unsigned int g_0082f338;
extern unsigned int g_00859b90;
extern unsigned int g_0082eaf0;

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006cc250(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_006cc2e0(void)
{
    __asm {
        mov     eax, dword ptr [g_0082f348]
        test    eax, eax
        jz      L_c2ff
        mov     ecx, dword ptr [g_0082f338]
L_c2ef:
        cmp     eax, ecx
        jz      L_c2fb
        mov     eax, dword ptr [eax]
        test    eax, eax
        jnz     L_c2ef
        jmp     L_c2ff
L_c2fb:
        test    eax, eax
        jnz     L_c316
L_c2ff:
        push    0x79e2c0
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_c3f6
        int     3
        ret
L_c316:
        mov     eax, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [ecx]
        and     edx, 0xff00
        cmp     edx, 0x2000
        jnz     L_c332
        dec     dword ptr [g_00859b90]
L_c332:
        push    esi
        push    eax
        call    FUN_006cc250
        mov     ecx, dword ptr [g_0082f338]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L_c35a
L_c346:
        mov     esi, dword ptr [eax]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        mov     eax, esi
        jnz     L_c346
        mov     ecx, dword ptr [g_0082f338]
L_c35a:
        push    edi
        mov     edi, dword ptr [ecx + 0x14]
        test    edi, edi
        jz      L_c38b
L_c362:
        mov     esi, dword ptr [edi + 0x4]
        test    esi, esi
        jz      L_c377
L_c369:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jnz     L_c369
L_c377:
        mov     eax, edi
        mov     edi, dword ptr [edi]
        push    eax
        call    FUN_006f4230
        test    edi, edi
        jnz     L_c362
        mov     ecx, dword ptr [g_0082f338]
L_c38b:
        mov     eax, dword ptr [g_0082f348]
        xor     edx, edx
        test    eax, eax
        pop     edi
        jz      L_c3b7
L_c397:
        cmp     eax, ecx
        jz      L_c3a5
        mov     edx, eax
        mov     eax, dword ptr [eax]
        test    eax, eax
        jnz     L_c397
        jmp     L_c3b7
L_c3a5:
        test    edx, edx
        jz      L_c3af
        mov     eax, dword ptr [eax]
        mov     dword ptr [edx], eax
        jmp     L_c3b7
L_c3af:
        mov     edx, dword ptr [eax]
        mov     dword ptr [g_0082f348], edx
L_c3b7:
        mov     eax, dword ptr [ecx + 0x18]
        test    eax, eax
        jz      L_c3dc
L_c3be:
        mov     eax, dword ptr [ecx + 0x18]
        mov     esi, dword ptr [eax + 0xfde8]
        mov     ecx, eax
        push    ecx
        call    FUN_006f4230
        test    esi, esi
        mov     ecx, dword ptr [g_0082f338]
        mov     dword ptr [ecx + 0x18], esi
        jnz     L_c3be
L_c3dc:
        mov     esi, dword ptr [ecx]
        push    ecx
        call    FUN_006f4230
        mov     eax, dword ptr [g_0082eaf0]
        dec     eax
        mov     dword ptr [g_0082f338], esi
        mov     dword ptr [g_0082eaf0], eax
        pop     esi
L_c3f6:
        ret
    }
}
