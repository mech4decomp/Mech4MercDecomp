/*
 * FUN_00630fa0 (32 B) — __thiscall: if the child object at [this+0x18]
 * exists, release it (FUN_0041fcb0); then clear byte [this+0x20].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);

__declspec(naked) void FUN_00630fa0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x18]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_fb9
        mov     ecx, edi
        call    FUN_0041fcb0
L_fb9:
        pop     edi
        mov     byte ptr [esi + 0x20], 0x0
        pop     esi
        ret
    }
}
