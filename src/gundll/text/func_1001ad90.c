/*
 * FUN_1001ad90 (60 B) - __stdcall. InterlockedDecrement on a refcount;
 * if it goes negative, InterlockedExchange the stored pointer to 0,
 * clear a flag, and if a non-null pointer was exchanged, tear it down
 * via FUN_1000c3a0 / FUN_10001d60.
 *
 * CFLAGS: /O1
 */

extern int g_10050644;
extern int g_1005504c;
extern char g_10055054;
extern void *g_100491bc;   /* IAT: InterlockedDecrement */
extern void *g_1004908c;   /* IAT: InterlockedExchange */
extern void __cdecl FUN_1000c3a0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1001ad90(void)
{
    __asm {
        push    esi
        push    offset g_10050644
        call    dword ptr [g_100491bc]
        test    eax, eax
        jge     L_done
        push    0x0
        push    offset g_1005504c
        call    dword ptr [g_1004908c]
        mov     esi, eax
        test    esi, esi
        mov     byte ptr [g_10055054], 0x0
        jz      L_done
        mov     ecx, esi
        call    FUN_1000c3a0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_done:
        pop     esi
        ret
    }
}
