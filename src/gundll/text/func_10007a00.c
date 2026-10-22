/*
 * FUN_10007A00 (178 B) - __stdcall, RET 0xc.  SEH-guarded crypto helper:
 * acquires a provider via FUN_10007ac0, derives a key via FUN_10007b90,
 * allocates an 8-byte object via FUN_10001d50 and constructs it via
 * FUN_10007d70, then finalizes via FUN_10007e70, storing the result into
 * *arg2.  On failure tears down via FUN_10007d90 / FUN_10001d60.  Returns
 * an HRESULT-style code.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10007ac0(void);   /* rel32 call, RET 0x8 (2 args) */
extern void __stdcall FUN_10007b90(void);   /* rel32 call, RET 0x4 (1 arg) */
extern void __cdecl FUN_10001d50(void);     /* rel32 call (allocator, 1 arg) */
extern void __cdecl FUN_10007d70(void);     /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10007d90(void);     /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10001d60(void);     /* rel32 call (shared_free) */
extern void __stdcall FUN_10007e70(void);   /* rel32 call, RET 0xc (3 args) */

__declspec(naked) void __stdcall FUN_10007A00(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x1004724b
        push    eax
        mov     dword ptr fs:[0], esp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        push    1
        push    esi
        call    FUN_10007ac0
        test    eax, eax
        jl      L_7a80
        push    esi
        call    FUN_10007b90
        test    eax, eax
        jl      L_7a80
        push    8
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x18], eax
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        je      L_7a57
        push    esi
        mov     ecx, eax
        call    FUN_10007d70
        mov     esi, eax
        jmp     L_7a59
L_7a57:
        xor     esi, esi
L_7a59:
        test    esi, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        jne     L_7a93
        mov     edi, 0x8007000e
L_7a6a:
        test    esi, esi
        je      L_7a7e
        mov     ecx, esi
        call    FUN_10007d90
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_7a7e:
        mov     eax, edi
L_7a80:
        mov     ecx, dword ptr [esp + 8]
        pop     edi
        mov     dword ptr fs:[0], ecx
        pop     esi
        add     esp, 0xc
        ret     0xc
L_7a93:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 4]
        push    ecx
        push    edx
        push    esi
        call    FUN_10007e70
        mov     edi, eax
        test    edi, edi
        jl      L_7a6a
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], esi
        jmp     L_7a7e
    }
}
