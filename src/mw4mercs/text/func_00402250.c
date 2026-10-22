/*
 * FUN_00402250 (35 B) — calls FUN_006f89f0, then FUN_006f7950 with a
 * member pointer; on failure returns -1, else dispatches a virtual call
 * (vtable slot +0xc) and returns 0.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f7950(void);

__declspec(naked) void FUN_00402250(void)
{
    __asm {
        call    FUN_006f89f0
        mov     ecx, dword ptr [eax + 0x3c]
        call    FUN_006f7950
        test    eax, eax
        jne     label1
        or      eax, 0xffffffff
        ret     0xc
label1:
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0xc]
        xor     eax, eax
        ret     0xc
    }
}
