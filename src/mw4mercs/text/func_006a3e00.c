/*
 * FUN_006a3e00 (260 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Calls several virtual/helper methods and does a chain of FPU range
 * checks, setting flags in this+4 / this+0x38 and returning a float
 * (usually DAT_0076d064) in ST0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_00799d48;
extern float DAT_00799d40;
extern float DAT_0076c5b0;
extern float DAT_0076d064;

extern float __cdecl FUN_006a4ae0(void *a, int b);
extern char __cdecl FUN_006a22f0(void *p);
extern float __cdecl FUN_006a29d0(void *p);
extern float __cdecl FUN_006a4b70(void *a, int b);
extern void __cdecl FUN_00663bb0(void *p);
extern void __cdecl FUN_006634e0(void *p);
extern void __cdecl FUN_00664b20(void *p);
extern void __cdecl FUN_006633f0(void *a, int b);

__declspec(naked) void __stdcall FUN_006a3e00(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x28]
        lea     ecx, [esi + 0x28]
        push    edi
        call    dword ptr [eax]
        fstp    st(0)
        mov     ecx, dword ptr [DAT_00799d48]
        push    ecx
        push    edi
        call    FUN_006a4ae0
        fcomp   dword ptr [DAT_00799d40]
        mov     ebx, 0x1
        add     esp, 0x8
        fnstsw  ax
        __emit 0x84 /* __emit: MSVC6 swaps reg8,ah operand order (emits 84 DC for 84 E3) */
        __emit 0xE3
        jnz     label_006a3e3a
        mov     byte ptr [esi + 0x4], bl
        jmp     label_006a3e3e

    label_006a3e3a:
        mov     byte ptr [esi + 0x4], 0x0

    label_006a3e3e:
        push    edi
        call    FUN_006a22f0
        add     esp, 0x4
        test    al, al
        jz      label_006a3ef8
        push    edi
        mov     ecx, esi
        call    FUN_006a29d0
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_006a3e74
        fld     dword ptr [DAT_0076d064]
        pop     edi
        mov     byte ptr [esi + 0x4], 0x0
        pop     esi
        pop     ebx
        ret     0x4

    label_006a3e74:
        push    0x43020000
        push    edi
        call    FUN_006a4b70
        fcomp   dword ptr [DAT_00799d40]
        add     esp, 0x8
        fnstsw  ax
        test    ah, 0x1
        jnz     label_006a3ea2
        cmp     dword ptr [esi + 0x38], ebx
        jz      label_006a3ecf
        push    edi
        mov     dword ptr [esi + 0x38], ebx
        call    FUN_00663bb0
        add     esp, 0x4
        jmp     label_006a3eca

    label_006a3ea2:
        push    0x438c0000
        push    edi
        call    FUN_006a4b70
        fsubr   dword ptr [DAT_0076d064]
        add     esp, 0x8
        fcomp   dword ptr [DAT_00799d40]
        fnstsw  ax
        test    ah, 0x1
        jnz     label_006a3eca
        mov     dword ptr [esi + 0x38], 0x0

    label_006a3eca:
        cmp     dword ptr [esi + 0x38], ebx
        jnz     label_006a3eea

    label_006a3ecf:
        push    edi
        call    FUN_006634e0
        push    edi
        call    FUN_00664b20
        fld     dword ptr [DAT_0076d064]
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4

    label_006a3eea:
        push    0x0
        push    edi
        call    FUN_006633f0
        add     esp, 0x8
        mov     byte ptr [esi + 0x4], bl

    label_006a3ef8:
        fld     dword ptr [DAT_0076d064]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
