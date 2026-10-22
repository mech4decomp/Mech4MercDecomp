/*
 * FUN_00490c70 (43 B) — __fastcall (ECX = param_1), void return.
 * Destructor: frees field_1c if non-null, then calls FUN_004906a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0040de20(void);
extern void __fastcall FUN_004084e0(void);
extern void __fastcall FUN_004906a0(void);

__declspec(naked) void __fastcall FUN_00490c70(void *param_1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x1c]
        test    esi, esi
        mov     dword ptr [edi], 0x7700a8
        jz      l_call_dtor
        mov     ecx, esi
        call    FUN_0040de20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    l_call_dtor:
        mov     ecx, edi
        call    FUN_004906a0
        pop     edi
        pop     esi
        ret
    }
}
