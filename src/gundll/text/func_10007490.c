/*
 * FUN_10007490 (47 B) - __fastcall. Destructor: destroys crypto key
 * (IAT 0x1004905c), releases crypto context (IAT 0x1004904c), frees
 * buffer via FUN_10001d60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * gundll FUN_10007490 (43 B) -- __fastcall teardown: CryptDestroyKey/CryptReleaseContext/FUN_10001d60
 */

extern void *g_1004905c;   /* IAT: CryptDestroyKey */
extern void *g_1004904c;   /* IAT: CryptReleaseContext */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10007490(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L_a1
        push    eax
        call    dword ptr [g_1004905c]
L_a1:
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        jz      L_b1
        push    0
        push    eax
        call    dword ptr [g_1004904c]
L_b1:
        mov     eax, dword ptr [esi + 4]
        push    eax
        call    FUN_10001d60
        add     esp, 4
        pop     esi
        ret
    }
}
