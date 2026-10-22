/*
 * FUN_10032ef0 (23 B) — __fastcall.
 * InterlockedIncrement on obj+0x78; track running max in obj+0x7c.
 *
 * CFLAGS: /O1
 */

extern void *g_10049120;   /* IAT: InterlockedIncrement */

__declspec(naked) void __fastcall FUN_10032ef0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     eax, [esi + 0x78]
        push    eax
        call    dword ptr [g_10049120]
        cmp     eax, dword ptr [esi + 0x7c]
        jle     done
        mov     dword ptr [esi + 0x7c], eax
    done:
        pop     esi
        ret
    }
}
