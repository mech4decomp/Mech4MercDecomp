/*
 * FUN_10045a57 (101 B) — __cdecl, RET.
 * Same slot/bitmap lookup as FUN_1004089d; if the bit is set calls
 * FUN_10043f78, FUN_10045abc(param_1,param_2,param_3), FUN_10043fd7 and
 * returns the result. Otherwise sets error 9 and returns -1.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076ba0;
extern unsigned int g_10076aa0[];
extern void __cdecl FUN_10043f78(void);
extern void __cdecl FUN_10045abc(void);
extern void __cdecl FUN_10043fd7(void);
extern void __cdecl FUN_1004277d(void);
extern void __cdecl FUN_10042786(void);

__declspec(naked) void __cdecl FUN_10045a57(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        cmp     esi, dword ptr [g_10076ba0]
        jnc     L_a4
        mov     ecx, esi
        mov     eax, esi
        sar     ecx, 0x5
        and     eax, 0x1f
        mov     ecx, dword ptr [ecx*4 + g_10076aa0]
        lea     eax, [eax + eax*8]
        test    byte ptr [ecx + eax*4 + 0x4], 0x1
        jz      L_a4
        push    edi
        push    esi
        call    FUN_10043f78
        push    dword ptr [esp + 0x18]
        push    dword ptr [esp + 0x18]
        push    esi
        call    FUN_10045abc
        push    esi
        mov     edi, eax
        call    FUN_10043fd7
        add     esp, 0x14
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    L_a4:
        call    FUN_1004277d
        mov     dword ptr [eax], 0x9
        call    FUN_10042786
        and     dword ptr [eax], 0x0
        or      eax, 0xffffffff
        pop     esi
        ret
    }
}
