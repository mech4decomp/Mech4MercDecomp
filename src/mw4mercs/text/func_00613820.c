/*
 * FUN_00613820 (84 B) — Destructor-style: decrements refcounts on two
 * buffers (freeing when they hit 0), calls FUN_00415380, and frees this
 * if the low bit of the flag param is set.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: byte flag).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall FUN_00613820(void *this_, unsigned char flag)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jz      L1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      L2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L2
        push    eax
        call    FUN_004084e0
        add     esp, 4
L2:
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        jz      L3
        push    esi
        call    FUN_004084e0
        add     esp, 4
L3:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
