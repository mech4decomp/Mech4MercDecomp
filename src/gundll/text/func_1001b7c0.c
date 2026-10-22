/*
 * FUN_1001b7c0 (64 B) — __fastcall (ECX = this).
 * Releases three members: calls FUN_10004ba0 (thiscall) then FUN_10001d60.
 */

extern void __cdecl FUN_10004ba0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __fastcall FUN_1001b7c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi]
        test    edi, edi
        jz      L1001b7da
        mov     ecx, edi
        call    FUN_10004ba0
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L1001b7da:
        mov     edi, dword ptr [esi + 0x4]
        test    edi, edi
        jz      L1001b7f1
        mov     ecx, edi
        call    FUN_10004ba0
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L1001b7f1:
        mov     eax, dword ptr [esi + 0x8]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        pop     edi
        pop     esi
        ret
    }
}
