/*
 * FUN_00749980 (50 B) — __fastcall (ECX = this). If global flags
 * (g_8b79ec set, g_858990 clear) and this->[0] != 0 and this->[0xc] != 2,
 * calls FUN_0075b040(this->[0], 0) then sets this->[0xc] = 2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_8b79ec;
extern unsigned char g_858990;
extern void __stdcall FUN_0075b040(void *a, int b);

__declspec(naked) void __fastcall FUN_00749980(void)
{
    __asm {
        mov     al, byte ptr [g_8b79ec]
        test    al, al
        push    esi
        mov     esi, ecx
        jz      L_b0
        mov     al, byte ptr [g_858990]
        test    al, al
        jnz     L_b0
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_b0
        cmp     dword ptr [esi + 0xc], 0x2
        jz      L_b0
        push    0x0
        push    eax
        call    FUN_0075b040
        mov     dword ptr [esi + 0xc], 0x2
    L_b0:
        pop     esi
        ret
    }
}
