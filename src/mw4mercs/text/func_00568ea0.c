/*
 * FUN_00568EA0 (95 B) — Object dispatch helper.
 *
 * Takes a pointer, dereferences field_0x170 to get an inner object,
 * checks a condition via a method call, then forwards params to a
 * larger handler if the condition passes.
 *
 * __stdcall (params on stack), returns int (-2 on failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00568EA0(void)
{
    

extern int DAT_007f268c;
extern void __cdecl FUN_100415219(void);
extern void __cdecl FUN_00653387(void);
__asm {
mov     eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        je      fail
        mov     esi, dword ptr [eax + 0x170]
        test    esi, esi
        je      fail
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_100415219
        cmp     al, 1
        jne     fail
        mov     eax, dword ptr [esi + 0x3d4]
        test    eax, eax
        je      fail
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edx
        push    esi
        call FUN_00653387
        add     esp, 0x1c
        pop     esi
        ret

fail:
        mov     eax, 0xfffffffe
        pop     esi
        ret
    }


}
