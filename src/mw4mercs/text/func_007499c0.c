/*
 * FUN_007499c0 (49 B) — __thiscall (ECX = this). If global flags
 * (g_8b79ec set, g_858990 clear) and this->[0] != 0 and this->[0xc] == 2,
 * calls FUN_0075b040(this->[0], 1) then advances this->[0xc] to this->[0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_8b79ec;
extern unsigned char g_858990;
extern void __stdcall FUN_0075b040(void *a, int b);

__declspec(naked) void __fastcall FUN_007499c0(void)
{
    __asm {
        mov     al, byte ptr [g_8b79ec]
        test    al, al
        push    esi
        mov     esi, ecx
        jz      L_ef
        mov     al, byte ptr [g_858990]
        test    al, al
        jnz     L_ef
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_ef
        cmp     dword ptr [esi + 0xc], 0x2
        jnz     L_ef
        push    0x1
        push    eax
        call    FUN_0075b040
        mov     eax, dword ptr [esi + 0x10]
        mov     dword ptr [esi + 0xc], eax
    L_ef:
        pop     esi
        ret
    }
}
