/*
 * FUN_005c1720 (65 B) — __thiscall (ECX = this), RET 4. Calls FUN_006f4950,
 * tears down an owned object if this+0x4e0 has low bits set, calls
 * FUN_005dd750(0), optionally FUN_005c6bd0 if param==1, then FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_005c44c0(void);
extern void __cdecl FUN_005dd750(int);
extern void __cdecl FUN_005c6bd0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_005c1720(void)
{
    

extern int DAT_007f2460;
__asm {
        mov eax, dword ptr [DAT_007f2460]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        test    dword ptr [esi + 0x4e0], 0xfffffffc
        jz      L1
        mov     ecx, esi
        call    FUN_005c44c0
L1:
        push    0x0
        mov     ecx, esi
        call    FUN_005dd750
        cmp     byte ptr [esp + 0x8], 0x1
        jnz     L2
        mov     ecx, esi
        call    FUN_005c6bd0
L2:
        call    FUN_006f49a0
        pop     esi
        ret     4
    }


}
