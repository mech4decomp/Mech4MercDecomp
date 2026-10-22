/*
 * FUN_1002f170 (49 B) — __stdcall (RET 0x4).
 * InterlockedDecrement(param_1 + 3); if result==0 && param_1: FUN_1002f020(param_1); FUN_10001d60(param_1).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002f020(void);
extern void __cdecl FUN_10001d60(void);
extern void *g_100491bc;

__declspec(naked) void __stdcall FUN_1002f170(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        lea     eax, [esi + 0xc]
        push    eax
        call    dword ptr [g_100491bc]
        mov     edi, eax
        test    edi, edi
        jnz     done
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_1002f020
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    done:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
