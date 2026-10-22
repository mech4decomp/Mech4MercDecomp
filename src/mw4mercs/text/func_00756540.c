/*
 * FUN_00756540 (80 B) — __fastcall (ECX = this) critical-section guarded
 * helper. Enters a critical section (IAT 0x76B110), and if [this+0x9C] != 5
 * calls FUN_00756350(this); otherwise sets [this+0x83]=1 and calls
 * FUN_00749C30([this->0x70 + 0xEC], 2). Leaves the critical section
 * (IAT 0x76B100) in both paths.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76B110;   /* IAT: EnterCriticalSection */
extern void *g_76B100;   /* IAT: LeaveCriticalSection */
extern void __cdecl FUN_00749C30(void);
extern void __cdecl FUN_00756350(void);

__declspec(naked) void __fastcall FUN_00756540(void)
{
    __asm {
        push    esi
        push    0x858AC8
        mov     esi, ecx
        call    dword ptr [g_76B110]
        cmp     dword ptr [esi + 0x9C], 5
        mov     byte ptr [esi + 0x83], 1
        jne     block2
        mov     eax, dword ptr [esi + 0x70]
        mov     ecx, dword ptr [eax + 0xEC]
        push    2
        push    ecx
        call    FUN_00749C30
        push    0x858AC8
        call    dword ptr [g_76B100]
        pop     esi
        ret
block2:
        mov     ecx, esi
        call    FUN_00756350
        push    0x858AC8
        call    dword ptr [g_76B100]
        pop     esi
        ret
    }
}
