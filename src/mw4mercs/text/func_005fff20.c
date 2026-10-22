/*
 * FUN_005fff20 (29 B) — __fastcall/__thiscall: walks a linked list at
 * this+0x2250, calling FUN_005dca90 for each non-null node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dca90(void);

__declspec(naked) void FUN_005fff20(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx+0x2250]
        test    esi, esi
        jz      done
    lbl_loop:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+4]
        jz      done
        call    FUN_005dca90
        /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4
           because the call-reloc sits between branch and target) */
        __emit 0xEB
        __emit 0xEC
    done:
        pop     esi
        ret
    }
}
