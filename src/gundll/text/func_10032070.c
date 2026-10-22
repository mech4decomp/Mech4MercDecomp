/*
 * FUN_10032070 (95 B) — __stdcall, RET 0xC.
 * Dispatch on *param_3: 4 -> FUN_100327a0, 5 -> FUN_100328f0; else E_FAIL.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_100328f0(void);
extern int __cdecl FUN_10001d60(void);
extern int __cdecl FUN_100327a0(void);

__declspec(naked) void __stdcall FUN_10032070(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        sub     eax, 0x4
        push    edi
        mov     edi, 0x80004005
        jz      case4
        dec     eax
        jnz     common
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        lea     ecx, [eax - 0x8]
        call    FUN_100328f0
        push    esi
        mov     edi, eax
        call    FUN_10001d60
        add     esp, 0x4
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0xc
    case4:
        movzx   ecx, word ptr [esi + 0x8]
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        push    eax
        add     ecx, -0x8
        call    FUN_100327a0
        mov     edi, eax
    common:
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0xc
    }
}
