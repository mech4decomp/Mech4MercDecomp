/*
 * FUN_004ef1b0 (69 B) — MLR/Adept application core, __thiscall with one
 * stack arg (RET 0x4). Performs three chained virtual calls (vtable[0x20])
 * to fetch a sub-object, then calls __thiscall FUN_004f0e50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f0e50(void);

__declspec(naked) void FUN_004ef1b0(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        push    esi
        mov     ecx, edi
        call    FUN_004f0e50
        pop     edi
        pop     esi
        add     esp, 0x8
        ret     0x4
    }
}
