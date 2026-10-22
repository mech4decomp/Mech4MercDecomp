/*
 * FUN_006100a0 (34 B) — __thiscall (ECX=this). Animation-blend accessor:
 * if the flag byte at [this+0x2c] is set, call a helper then subtract the
 * doubles at [this+0] and [this+0x10] from the FPU stack; otherwise load
 * [this+0x20] and subtract both. Returns the FPU result on the stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_006100a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi+0x2c]
        test    al, al
        jz      load
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi]
        fsub    qword ptr [esi+0x10]
        pop     esi
        ret
    load:
        fld     qword ptr [esi+0x20]
        fsub    qword ptr [esi]
        fsub    qword ptr [esi+0x10]
        pop     esi
        ret
    }
}
