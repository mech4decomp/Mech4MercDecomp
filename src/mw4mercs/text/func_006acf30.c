/*
 * FUN_006ACF30 (124 B) — __cdecl, RET (no stack cleanup).
 *
 * Zeroes a local, calls FUN_0041eb40(&local,1), conditionally zeroes
 * [obj+0x17c], then increments a counter in a table indexed by a stack
 * param and increments [base+0xc00].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041eb40(int *a, int b);

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void __stdcall FUN_006acf30(int param1)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    0x1
        lea     eax, [esp + 0x4]
        push    eax
        mov     dword ptr [esp + 0x8], 0x0
        call    FUN_0041eb40
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx + 0x3dc]
        test    eax, eax
        jz      l_72
        cmp     dword ptr [eax + 0x180], -0x1
        jz      l_72
        __emit 0x8B   /* __emit: zero-disp [esp] mem op — MSVC6 drops the 00 disp byte */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        test    ecx, ecx
        jnz     l_72
        mov     dword ptr [eax + 0x17c], 0x0
    l_72:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx + 0x1814]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax + ecx*4 + 0x848c]
        add     eax, 0x8484
        inc     edx
        mov     dword ptr [eax + ecx*4 + 0x8], edx
        inc     dword ptr [eax + 0xc00]
        pop     ecx
        ret
    }
}
