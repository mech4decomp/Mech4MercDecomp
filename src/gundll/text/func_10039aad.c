/*
 * FUN_10039aad (108 B) — __stdcall, RET.
 * Cleanup: walks a table of critical sections at 0x10051ba0, deleting
 * each non-null/non-special entry, then deletes the four special ones.
 *
 * CFLAGS: /O1
 */

extern unsigned long g_100491a4;   /* DeleteCriticalSection fn ptr */
extern unsigned long g_10051bc4;
extern unsigned long g_10051bd4;
extern unsigned long g_10051be4;
extern unsigned long g_10051ba4;
extern void FUN_1003c2dc(void);

__declspec(naked) void __stdcall FUN_10039aad(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [g_100491a4]
        mov     esi, 10051BA0h
    L_aba:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_aeb
        cmp     esi, 10051BE4h
        jz      L_aeb
        cmp     esi, 10051BD4h
        jz      L_aeb
        cmp     esi, 10051BC4h
        jz      L_aeb
        cmp     esi, 10051BA4h
        jz      L_aeb
        push    eax
        call    edi
        push    dword ptr [esi]
        call    FUN_1003c2dc
        pop     ecx
    L_aeb:
        add     esi, 4
        cmp     esi, 10051C60h
        jl      L_aba
        push    dword ptr [g_10051bc4]
        call    edi
        push    dword ptr [g_10051bd4]
        call    edi
        push    dword ptr [g_10051be4]
        call    edi
        push    dword ptr [g_10051ba4]
        call    edi
        pop     edi
        pop     esi
        ret
    }
}
