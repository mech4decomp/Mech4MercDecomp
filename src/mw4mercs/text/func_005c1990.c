/*
 * FUN_005c1990 (77 B) — __fastcall (ECX = this).
 *
 * Calls FUN_006f4950(DAT_007f2460), then if (this->field_598 & 1) clears
 * the low bits and frees via FUN_004084e0. Zeroes field_598, calls
 * FUN_005c44c0() and FUN_006f49a0().
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005c1990(int param_1)
{
    

extern int DAT_007f2460;
extern void __cdecl FUN_006f494c(void);
extern void __cdecl FUN_1004084b8(void);
extern void __cdecl FUN_005c4484(void);
extern void __cdecl FUN_006f495f(void);
__asm {
        mov eax, dword ptr [DAT_007f2460]
        push    esi
        push    eax
        mov     esi, ecx
        call FUN_006f494c
        mov     eax, dword ptr [esi + 0x598]
        mov     ecx, eax
        and     ecx, 0x1
        cmp     cl, 0x1
        jnz     l_c5
        mov     edx, eax
        and     eax, 0xfffffffc
        push    eax
        and     edx, 0x2
        mov     dword ptr [esi + 0x598], eax
        call FUN_1004084b8
        add     esp, 0x4
    l_c5:
        mov     ecx, esi
        mov     dword ptr [esi + 0x598], 0x0
        call FUN_005c4484
        call FUN_006f495f
        pop     esi
        ret
    }


}
