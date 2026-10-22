/*
 * FUN_1001aee0 (60 B) -- __stdcall.
 * InterlockedDecrement on a global; on negative result, InterlockedExchange
 * a pointer global, clear a byte, and if non-null call two helpers.
 *
 * CFLAGS: /O1
 */

extern void *g_100491bc;   /* IAT: InterlockedDecrement */
extern void *g_1004908c;   /* IAT: InterlockedExchange */
extern char g_10055055;
extern void __cdecl FUN_1000c3a0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1001aee0(void)
{
    __asm {
        push    esi
        push    0x10050648
        call    dword ptr [g_100491bc]
        test    eax, eax
        jge     L_done
        push    0
        push    0x10055050
        call    dword ptr [g_1004908c]
        mov     esi, eax
        test    esi, esi
        mov     byte ptr [g_10055055], 0
        jz      L_done
        mov     ecx, esi
        call    FUN_1000c3a0
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_done:
        pop     esi
        ret
    }
}
