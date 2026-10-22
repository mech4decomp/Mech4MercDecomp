/*
 * FUN_005e6590 (49 B) — returns param if non-null, else 0; if a global
 * flag check (FUN_00415230) passes and [param+0x280] is non-zero, returns
 * [param+0x280] instead.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __stdcall FUN_00415230(void *param);

__declspec(naked) void *__stdcall FUN_005e6590(void *param)
{
    

extern int DAT_007f26a4;
__asm {
push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jnz     L1
        xor     eax, eax
        pop     esi
        ret     4
L1:
        mov eax, dword ptr [DAT_007f26a4]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L2
        mov     eax, dword ptr [esi + 0x280]
        test    eax, eax
        jnz     L3
L2:
        mov     eax, esi
L3:
        pop     esi
        ret     4
    }


}
