/*
 * FUN_00621280 (69 B) — ABL interpreter __thiscall helper. Reinitializes a
 * global string buffer and re-enters a parser state; calls FUN_0061fe40 /
 * FUN_0061fc80 (thiscall) and an IAT function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007f29a4;
extern int  g_007f2ba4;
extern int  g_0076b0f4;   /* IAT */
extern void __cdecl FUN_0061fe40(void);
extern void __cdecl FUN_0061fc80(void);

__declspec(naked) void FUN_00621280(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0xc]
        test    eax, eax
        jz      L_6212c3
        mov     eax, dword ptr [esi]
        push    0x7f29a4
        mov     dword ptr [esi+0xc], eax
        mov     byte ptr [g_007f29a4], 0
        call    FUN_0061fe40
        push    0x7f29a4
        mov     ecx, esi
        call    FUN_0061fc80
        mov     ecx, dword ptr [g_007f2ba4]
        push    -0x1
        push    ecx
        mov     byte ptr [esi+0x17], 0x1
        call    dword ptr [g_0076b0f4]
        mov     byte ptr [esi+0x17], 0x0
L_6212c3:
        pop     esi
        ret
    }
}
