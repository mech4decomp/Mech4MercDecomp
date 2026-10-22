/*
 * FUN_0074CAE0 (64 B) — __stdcall; formats a string via FUN_0074CA50 and
 * IAT[0x76b420], returns pointer to g_8baa34.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b420;
extern void __cdecl FUN_0074CA50(void);

__declspec(naked) void __stdcall FUN_0074CAE0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0x15]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x14]
        push    eax
        push    ecx
        call    FUN_0074CA50
        mov     ecx, dword ptr [esi]
        xor     edx, edx
        mov     dx, word ptr [esi + 0x12]
        push    eax
        mov     eax, dword ptr [esi + 4]
        push    edx
        push    eax
        push    ecx
        push    0x7ab7c4
        push    0x8baa34
        call    dword ptr [g_76b420]
        add     esp, 0x18
        mov     eax, 0x8baa34
        pop     esi
        ret     4
    }
}
