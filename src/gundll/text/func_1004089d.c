/*
 * FUN_1004089d (101 B) — __cdecl, RET.
 * Looks up a slot in a bitmap/table (g_10076aa0 indexed by param_1>>5,
 * bit test at +4 of the entry). If the bit is set, calls FUN_10043f78,
 * FUN_10040902(param_1,param_2,param_3), FUN_10043fd7 and returns the
 * result. Otherwise sets error 9 (FUN_1004277d/FUN_10042786) and returns -1.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076ba0;
extern unsigned int g_10076aa0[];
extern void __cdecl FUN_10043f78(void);
extern void __cdecl FUN_10040902(void);
extern void __cdecl FUN_10043fd7(void);
extern void __cdecl FUN_1004277d(void);
extern void __cdecl FUN_10042786(void);

__declspec(naked) void __cdecl FUN_1004089d(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        cmp     esi, dword ptr [g_10076ba0]
        jnc     L_ea
        mov     ecx, esi
        mov     eax, esi
        sar     ecx, 0x5
        and     eax, 0x1f
        mov     ecx, dword ptr [ecx*4 + g_10076aa0]
        lea     eax, [eax + eax*8]
        test    byte ptr [ecx + eax*4 + 0x4], 0x1
        jz      L_ea
        push    edi
        push    esi
        call    FUN_10043f78
        push    dword ptr [esp + 0x18]
        push    dword ptr [esp + 0x18]
        push    esi
        call    FUN_10040902
        push    esi
        mov     edi, eax
        call    FUN_10043fd7
        add     esp, 0x14
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    L_ea:
        call    FUN_1004277d
        mov     dword ptr [eax], 0x9
        call    FUN_10042786
        and     dword ptr [eax], 0x0
        or      eax, 0xffffffff
        pop     esi
        ret
    }
}
