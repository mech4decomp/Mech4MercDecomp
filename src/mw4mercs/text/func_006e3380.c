/*
 * FUN_006E3380 (105 B) — __thiscall: clamp and copy sub-region.
 *
 * ECX = this, 3 stack params (param_1, offset, count). Clamps offset
 * and count to non-negative, bounds-checks against this[0][-8],
 * calls FUN_006E2840, FUN_006E2A10, FUN_006E2850, FUN_006E29E0.
 * Returns param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006e2840(void);
extern void __fastcall FUN_006e2a10(void);
extern void __fastcall FUN_006e2850(void);
extern void __fastcall FUN_006e29e0(void);

__declspec(naked) void __fastcall FUN_006e3380(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        mov     ebx, ecx
        jge     l_ok1
        xor     edi, edi
    l_ok1:
        mov     esi, dword ptr [esp + 0x18]
        test    esi, esi
        jge     l_ok2
        xor     esi, esi
    l_ok2:
        mov     eax, dword ptr [ebx]
        mov     eax, dword ptr [eax - 8]
        lea     ecx, [edi + esi]
        cmp     ecx, eax
        jle     l_ok3
        mov     esi, eax
        sub     esi, edi
    l_ok3:
        cmp     edi, eax
        jle     l_ok4
        xor     esi, esi
    l_ok4:
        lea     ecx, [esp + 0x14]
        call    FUN_006e2840
        push    0
        push    edi
        push    esi
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, ebx
        call    FUN_006e2a10
        mov     esi, dword ptr [esp + 0x10]
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    FUN_006e2850
        lea     ecx, [esp + 0x14]
        call    FUN_006e29e0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
