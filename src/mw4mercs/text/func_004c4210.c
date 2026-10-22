/*
 * FUN_004C4210 (44 B) — Fastcall helper with stack frame.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004911e0(void *this);
extern void FUN_004916d0(void *this, int a, int b, int c);

__declspec(naked) void __fastcall FUN_004c4210(int param_1)
{
    __asm {
        sub     esp, 8
        push    esi
        mov     esi, ecx

        lea     ecx, [esp + 4]
        call    FUN_004911e0

        mov     ecx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 8]
        push    0
        push    0
        push    ecx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], eax
        call    FUN_004916d0

        pop     esi
        add     esp, 8
        ret
    }
}
