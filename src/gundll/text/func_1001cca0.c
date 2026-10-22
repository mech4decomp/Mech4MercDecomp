/*
 * FUN_1001cca0 (31 B) — __stdcall dtor, RET 0x4.
 * If arg != 0: FUN_1001d170(arg) then FUN_10001d60(arg). Returns 0.
 */

extern void __fastcall FUN_1001d170(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1001cca0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_1001d170
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    done:
        xor     eax, eax
        pop     esi
        ret     0x4
    }
}
