/*
 * FUN_10043e8f (66 B) — __cdecl, 1 stack param.
 * If param_1 < g_10076ba0 and the bit at the indexed slot is set, return the
 * slot value; else set error 9 and return -1.
 *
 * CFLAGS: /O1
 */

extern int g_10076ba0;
extern int g_10076aa0;
extern void __cdecl FUN_1004277d(void);
extern void __cdecl FUN_10042786(void);

__declspec(naked) void FUN_10043e8f(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, dword ptr [g_10076ba0]
        jnc     Lba
        mov     ecx, eax
        and     eax, 0x1f
        sar     ecx, 0x5
        lea     eax, [eax + eax*0x8]
        mov     ecx, dword ptr [ecx*0x4 + g_10076aa0]
        test    byte ptr [ecx + eax*0x4 + 0x4], 0x1
        lea     eax, [ecx + eax*0x4]
        jz      Lba
        mov     eax, dword ptr [eax]
        ret
    Lba:
        call    FUN_1004277d
        mov     dword ptr [eax], 0x9
        call    FUN_10042786
        and     dword ptr [eax], 0x0
        or      eax, 0xffffffff
        ret
    }
}
