/*
 * FUN_005ef680 (93 B) — __thiscall (ECX = this), RET 0x14 (5 stack params).
 *
 * Calls FUN_005ef5a0; if true, optionally dispatches through a virtual
 * method (this+0xbc) with several args, then calls FUN_005efd60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005ef5a0(void);
extern void * __stdcall FUN_005f07c0(void);
extern void __stdcall FUN_005efd60(void);

__declspec(naked) void __stdcall FUN_005ef680(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005ef5a0
        test    al, al
        jz      done
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        test    edi, edi
        jz      L1
        mov     ecx, esi
        call    FUN_005f07c0
        test    eax, eax
        jz      L1
        mov     ecx, esi
        call    FUN_005f07c0
        mov     edx, dword ptr [eax]
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0xec]
L1:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0xbc]
        mov     ecx, esi
        call    FUN_005efd60
        pop     edi
done:
        pop     esi
        ret     0x14
    }
}
