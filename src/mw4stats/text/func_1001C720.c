/*
 * FUN_1001c720 (22 B) - calls FUN_1001bf20(ECX+0x18, 1), then FUN_1001be70(ECX).
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1001bf20(void);
extern void FUN_1001be70(void);

__declspec(naked) void __cdecl FUN_1001c720(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x1
        lea     ecx, [esi + 0x18]
        call    FUN_1001bf20
        mov     ecx, esi
        call    FUN_1001be70
        pop     esi
        ret
    }
}
