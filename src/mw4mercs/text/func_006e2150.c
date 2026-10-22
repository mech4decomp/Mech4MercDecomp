/*
 * FUN_006E2150 (128 B) — Critical-section guarded function dispatch.
 *
 * Enters a critical section at this+0x14. If byte at this+0x38 is
 * non-zero, calls FUN_006E2A70(param), FUN_006E2840(), sets up
 * stack variables, calls FUN_006E2B60, FUN_006E29E0, FUN_006E1C70,
 * and FUN_006E29E0. Then leaves the critical section.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e2a70(void);
extern void __cdecl FUN_006e2840(void);
extern void __cdecl FUN_006e2b60(void);
extern void __cdecl FUN_006e29e0(void);
extern void __cdecl FUN_006e1c70(void);

__declspec(naked) void FUN_006e2150(void)
{
    __asm {
        sub     esp, 0x78
        push    esi
        push    edi
        mov     esi, ecx
        lea     edi, [esi + 0x14]
        push    edi
        _emit   0xFF
        _emit   0x15
        _emit   0x10
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        mov     al, byte ptr [esi + 0x38]
        test    al, al
        jz      l_leave
        mov     eax, dword ptr [esp + 0x84]
        push    eax
        lea     ecx, [esp + 0x0C]
        call    FUN_006e2a70
        lea     ecx, [esp + 0x0C]
        call    FUN_006e2840
        lea     ecx, [esp + 8]
        push    ecx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x80], 0
        call    FUN_006e2b60
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x10], 1
        call    FUN_006e29e0
        lea     edx, [esp + 0x0C]
        push    edx
        mov     ecx, esi
        call    FUN_006e1c70
        lea     ecx, [esp + 0x0C]
        call    FUN_006e29e0
    l_leave:
        push    edi
        _emit   0xFF
        _emit   0x15
        _emit   0x00
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        pop     edi
        pop     esi
        add     esp, 0x78
        ret     4
    }
}
