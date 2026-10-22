/*
 * FUN_10007880 (157 B) - __stdcall, RET 0x8.  SEH-guarded crypto helper:
 * acquires a provider via FUN_10007ac0, allocates an 8-byte object via
 * FUN_10001d50 and constructs it via FUN_10007c00, then finalizes via
 * FUN_10007c30, storing the result into *arg2.  On failure tears down via
 * FUN_10007c20 / FUN_10001d60.  Returns an HRESULT-style code.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10007ac0(void);   /* rel32 call, RET 0x8 (2 args) */
extern void __cdecl FUN_10001d50(void);     /* rel32 call (allocator, 1 arg) */
extern void __cdecl FUN_10007c00(void);     /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10007c20(void);     /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10001d60(void);     /* rel32 call (shared_free) */
extern void __stdcall FUN_10007c30(void);   /* rel32 call, RET 0x4 (1 arg) */

__declspec(naked) void __stdcall FUN_10007880(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x1004720b
        push    eax
        mov     dword ptr fs:[0], esp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        push    1
        push    esi
        call    FUN_10007ac0
        test    eax, eax
        jl      L_78f6
        push    8
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x18], eax
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        je      L_78cd
        push    esi
        mov     ecx, eax
        call    FUN_10007c00
        mov     esi, eax
        jmp     L_78cf
L_78cd:
        xor     esi, esi
L_78cf:
        test    esi, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        jne     L_7909
        mov     edi, 0x8007000e
L_78e0:
        test    esi, esi
        je      L_78f4
        mov     ecx, esi
        call    FUN_10007c20
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_78f4:
        mov     eax, edi
L_78f6:
        mov     ecx, dword ptr [esp + 8]
        pop     edi
        mov     dword ptr fs:[0], ecx
        pop     esi
        add     esp, 0xc
        ret     0x8
L_7909:
        push    esi
        call    FUN_10007c30
        mov     edi, eax
        test    edi, edi
        jl      L_78e0
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], esi
        jmp     L_78f4
    }
}
