/*
 * FUN_00610080 (30 B) — __thiscall (ECX=this). Animation-blend accessor:
 * if the flag byte at [this+0x2c] is set, call a helper then add the
 * double at [this+0x8] to the FPU stack; otherwise load [this+0x20] and
 * add [this+0x8]. Returns the FPU result on the stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00610080(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi+0x2c]
        test    al, al
        jz      load
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi+0x8]
        pop     esi
        ret
    load:
        fld     qword ptr [esi+0x20]
        fsub    qword ptr [esi+0x8]
        pop     esi
        ret
    }
}
