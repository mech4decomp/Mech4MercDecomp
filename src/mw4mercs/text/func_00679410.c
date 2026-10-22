/*
 * FUN_00679410 (336 B) — __thiscall (ECX = this), RET 0x4 (one stack param).
 *
 * Serializes a set of named fields from `this` into the object ESI (param_1)
 * via a chain of property-setter methods (FUN_00411d40 / FUN_00411f50 /
 * FUN_00411c80), then conditionally handles a "RevealedState" string via
 * FUN_00412780 / FUN_00411c40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501d90(void);
extern void __cdecl FUN_00411d40(void);
extern void __cdecl FUN_00411f50(void);
extern void __cdecl FUN_00411c80(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00679410(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00501d90
        mov     eax, dword ptr [edi + 0x170]
        push    eax
        push    0x797f9c
        mov     ecx, esi
        call    FUN_00411d40
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x169]
        push    ecx
        push    0x797f94
        mov     ecx, esi
        call    FUN_00411f50
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x168]
        mov     ecx, esi
        push    edx
        push    0x797f8c
        call    FUN_00411f50
        xor     eax, eax
        mov     al, byte ptr [edi + 0x16a]
        mov     ecx, esi
        push    eax
        push    0x797f84
        call    FUN_00411f50
        mov     ecx, dword ptr [edi + 0x16c]
        push    ecx
        push    0x797f7c
        mov     ecx, esi
        call    FUN_00411d40
        push    -0x1
        push    0x797f70
        mov     ecx, esi
        call    FUN_00411d40
        push    -0x1
        push    0x797f64
        mov     ecx, esi
        call    FUN_00411d40
        push    -0x1
        push    0x797f58
        mov     ecx, esi
        call    FUN_00411d40
        push    -0x1
        push    0x797f4c
        mov     ecx, esi
        call    FUN_00411d40
        lea     edx, [edi + 0x570]
        push    edx
        push    0x797fd4
        mov     ecx, esi
        call    FUN_00411c80
        lea     eax, [edi + 0x66f]
        push    eax
        push    0x797fc4
        mov     ecx, esi
        call    FUN_00411c80
        lea     ecx, [edi + 0x76e]
        push    ecx
        push    0x797fb4
        mov     ecx, esi
        call    FUN_00411c80
        lea     edx, [edi + 0x86d]
        push    edx
        push    0x797fa4
        mov     ecx, esi
        call    FUN_00411c80
        mov     eax, dword ptr [edi + 0xe0]
        mov     eax, dword ptr [eax + 0x14]
        cmp     eax, 0x4
        mov     dword ptr [esp + 0xc], 0x0
        jnz     L_955B
        push    0x7868c8
        lea     ecx, [esp + 0x10]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_955B
        push    eax
        push    0x773250
        mov     ecx, esi
        call    FUN_00411c40
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_955B
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_955B
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_955B:
        pop     edi
        pop     esi
        ret     0x4
    }
}
