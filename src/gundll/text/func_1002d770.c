/*
 * FUN_1002d770 (31 B) — __stdcall dtor, RET 0x8.
 * If arg2 != 0: FUN_1001b7c0(arg2) then FUN_10001d60(arg2). Returns 0.
 */

extern void __fastcall FUN_1001b7c0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1002d770(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_1001b7c0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    done:
        xor     eax, eax
        pop     esi
        ret     0x8
    }
}
