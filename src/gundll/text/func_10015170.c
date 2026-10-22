/*
 * FUN_10015170 (89 B) — __stdcall, RET 0x10.
 * Object init helper: checks a flag, calls FUN_1001c760 / FUN_10001dd0,
 * stores results into the object.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_10001dd0(void);

__declspec(naked) void __stdcall FUN_10015170(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        jz      L_10015187
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
    L_10015187:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_100151c4
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jnz     L_100151b2
        test    edi, edi
        jz      L_100151b2
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x10
    L_100151b2:
        mov     edx, dword ptr [esp + 0x14]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x24], eax
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x20], edx
        mov     eax, ecx
    L_100151c4:
        pop     edi
        pop     esi
        ret     0x10
    }
}
