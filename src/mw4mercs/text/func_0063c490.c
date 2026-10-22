/*
 * FUN_0063c490 (63 B) — __thiscall destructor.
 *
 * Calls FUN_0041fcb0() on this+0x15c, FUN_0041fcd0(arg) on this+0x15c,
 * then walks a linked list at this+0x154 calling FUN_004154d0().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(unsigned int arg);
extern void __cdecl FUN_004154d0(void *ptr);

__declspec(naked) void FUN_0063c490(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x15c]
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        lea     edi, [esi + 0x154]
    L_loop:
        mov     esi, dword ptr [edi]
        test    esi, esi
        jz      L_done
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L_done
        push    edi
        call    FUN_004154d0
        __emit 0xEB  /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-2) due to call-reloc between branch and target */
        __emit 0xEB
    L_done:
        pop     edi
        pop     esi
        ret     0x4
    }
}
