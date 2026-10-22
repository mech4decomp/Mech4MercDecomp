/*
 * FUN_0066bef0 (143 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Calls FUN_004d2310 and three virtual methods (vtable+0x18/+0x20/+0x1c)
 * on the param object, then dispatches on a result value to one of
 * FUN_0066c320 / FUN_0066c370 / FUN_0066c1d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_0066c320(int a);
extern void __cdecl FUN_0066c370(int a);
extern void __cdecl FUN_0066c1d0(int a);

__declspec(naked) int __stdcall FUN_0066bef0(int param1)
{
    __asm {
        sub     esp, 0x64
        push    esi
        mov     esi, dword ptr [esp + 0x6c]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        call    FUN_004d2310
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
        mov     edx, dword ptr [esi]
        push    0x64
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x65
        mov     ecx, esi
        call    dword ptr [edx + 0x1c]
        mov     eax, dword ptr [esp + 0x8]
        cmp     eax, 0x1
        jnz     l_43
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jnz     l_75
        push    esi
        mov     ecx, edi
        call    FUN_0066c320
        pop     edi
        pop     esi
        add     esp, 0x64
        ret     4
    l_43:
        cmp     eax, 0x2
        jnz     l_75
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jnz     l_60
        push    esi
        mov     ecx, edi
        call    FUN_0066c370
        pop     edi
        pop     esi
        add     esp, 0x64
        ret     4
    l_60:
        cmp     eax, 0x1
        jnz     l_75
        push    esi
        mov     ecx, edi
        call    FUN_0066c1d0
        pop     edi
        pop     esi
        add     esp, 0x64
        ret     4
    l_75:
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x64
        ret     4
    }
}
