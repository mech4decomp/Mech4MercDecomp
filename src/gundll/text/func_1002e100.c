/*
 * FUN_1002e100 (183 B) - __stdcall, RET 0x10. Serializes an object via
 * virtual calls and helper encode functions, returns the encoded blob.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1003791a(void);   /* rel32 call */
extern void __cdecl FUN_10037940(void);   /* rel32 call */
extern void __cdecl FUN_10002660(void);   /* rel32 call */
extern void __cdecl FUN_1000c140(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1002e100(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8
        mov     edx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        lea     ecx, [ebp + 0xc]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    edx
        push    ecx
        push    edi
        mov     dword ptr [ebp - 0x4], 0x0
        call    dword ptr [eax + 0x30]
        mov     esi, eax
        test    esi, esi
        jl      L_e19e
        mov     edx, dword ptr [edi]
        lea     eax, [ebp + 0x8]
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        lea     ecx, [ebp - 0x8]
        push    ecx
        push    0x0
        push    eax
        push    edi
        call    dword ptr [edx + 0x8]
        mov     esi, eax
        test    esi, esi
        jl      L_e19e
        mov     ecx, dword ptr [ebp + 0x8]
        push    ecx
        call    FUN_1003791a
        mov     esi, eax
        add     eax, 0x3
        add     esp, 0x4
        and     eax, 0xfffffffc
        call    FUN_10037940
        mov     eax, dword ptr [ebp + 0x8]
        mov     edi, esp
        lea     edx, [ebp + 0x10]
        push    edx
        push    esi
        push    edi
        push    eax
        mov     dword ptr [ebp + 0x10], 0x0
        call    FUN_10002660
        mov     esi, eax
        test    esi, esi
        jl      L_e19e
        mov     ecx, dword ptr [ebp + 0x10]
        push    edi
        push    ecx
        lea     edx, [ebp - 0x4]
        push    edx
        call    FUN_1000c140
        mov     esi, eax
        test    esi, esi
        jl      L_e19e
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ebp - 0x4], 0x0
L_e19e:
        mov     edx, dword ptr [ebp - 0x4]
        push    edx
        call    FUN_10001d60
        add     esp, 0x4
        mov     eax, esi
        lea     esp, [ebp - 0x10]
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
