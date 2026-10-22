/*
 * FUN_10013670 (44 B) — __stdcall, RET 0x8.
 * If [this+0xc] != 0 return 0xc112000d; else call FUN_1001c760(this, arg)
 * and set [this+4]=1 on success.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_1001c760(void);

__declspec(naked) void __stdcall FUN_10013670(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      do_call
        mov     eax, 0xc112000d
        pop     esi
        ret     0x8
    do_call:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      done
        mov     byte ptr [esi + 0x4], 0x1
    done:
        pop     esi
        ret     0x8
    }
}
