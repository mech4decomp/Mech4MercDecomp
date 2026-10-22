/*
 * FUN_10007950 (167 B) - __stdcall, RET 0x10. SEH-guarded crypto object
 * setup: allocates an 8-byte object (FUN_10001d50), constructs it
 * (FUN_10007d70), imports key material (FUN_10007da0), with a
 * __try/__finally cleanup (FUN_10007d90 + FUN_10001d60).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10007ac0(void);   /* __stdcall RET 8 */
extern void __cdecl FUN_10001d50(void);   /* __cdecl */
extern void __cdecl FUN_10007d70(void);   /* __thiscall */
extern void __cdecl FUN_10007d90(void);   /* __fastcall */
extern void __cdecl FUN_10001d60(void);   /* __cdecl */
extern void __cdecl FUN_10007da0(void);   /* __stdcall RET 0xc */

__declspec(naked) void __stdcall FUN_10007950(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x1004722b
        push    eax
        mov     dword ptr fs:[0], esp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        push    1
        push    esi
        call    FUN_10007ac0
        test    eax, eax
        jl      L_c6
        push    8
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x18], eax
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        jz      L_99d
        push    esi
        mov     ecx, eax
        call    FUN_10007d70
        mov     esi, eax
        jmp     L_99f
L_99d:
        xor     esi, esi
L_99f:
        test    esi, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        jnz     L_d9
        mov     edi, 0x8007000e
L_b0:
        test    esi, esi
        jz      L_c4
        mov     ecx, esi
        call    FUN_10007d90
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_c4:
        mov     eax, edi
L_c6:
        mov     ecx, dword ptr [esp + 8]
        pop     edi
        mov     dword ptr fs:[0], ecx
        pop     esi
        add     esp, 0xc
        ret     0x10
L_d9:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        push    eax
        push    ecx
        push    esi
        call    FUN_10007da0
        mov     edi, eax
        test    edi, edi
        jl      L_b0
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [edx], esi
        jmp     L_c4
    }
}
