/*
 * FUN_0075BB40 (30 B) — __thiscall method: if [this+6]&8, calls
 * FUN_0075BB60(0,0,0) and returns; else if [this+0x1c] is non-zero,
 * tail-jumps to FUN_0075C050, otherwise returns.
 *
 * Match: target 100%
 */

extern void __stdcall FUN_0075BB60(int a, int b, int c);
extern void __fastcall FUN_0075C050(void *this);

__declspec(naked) void FUN_0075BB40(void)
{
    __asm {
        test    byte ptr [ecx + 0x6], 0x8
        jz      L_bb52
        push    0
        push    0
        push    0
        call    FUN_0075BB60
    L_bb51:
        ret
    L_bb52:
        mov     eax, dword ptr [ecx + 0x1c]
        test    eax, eax
        jz      L_bb51
        jmp     FUN_0075C050
    }
}
