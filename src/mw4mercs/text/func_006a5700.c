/*
 * FUN_006a5700 (107 B) — Comparison helper returning a float flag.
 *
 * Calls FUN_00637b40/FUN_00637a20/_ftol twice, then invokes a virtual
 * method (offset 0x90) on param_1 twice and compares the results against
 * the two ftol values, producing a 0/1 float result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00637b40(int a);
extern int __cdecl FUN_00637a20(int a);
extern int __cdecl FUN_0075db4a(void);

__declspec(naked) float FUN_006a5700(int *param_1, int param_2, int param_3)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        call    FUN_0075db4a
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     edi, eax
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        call    FUN_0075db4a
        mov     esi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     ebx, eax
        call    dword ptr [edx + 0x90]
        cmp     eax, edi
        jl      l_575b
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x90]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x14], 1
        jle     l_5763
    l_575b:
        mov     dword ptr [esp + 0x14], 0
    l_5763:
        fild    dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
