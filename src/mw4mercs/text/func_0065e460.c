/*
 * FUN_0065e460 (190 B) — __stdcall, 2 params (param_1 = out ptr, param_2 = type).
 *
 * Switch on param_2 (0xFA1..0xFA4) via jump table at 0x65e520: allocates an
 * object of a size via FUN_004084d0 and constructs it (thiscall). Stores the
 * result (|1) into *param_1, then does a bitfield-based virtual dispatch
 * (vtable+0x18) with arg 3 or 1 depending on low bits.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __stdcall FUN_006a1900(void);          /* __thiscall: ECX=obj */
extern void __stdcall FUN_006a01e0(void);          /* __thiscall: ECX=obj */
extern void __stdcall FUN_0069ff90(void);          /* __thiscall: ECX=obj */
extern void __stdcall FUN_0069f660(void);          /* __thiscall: ECX=obj */

__declspec(naked) void *__stdcall FUN_0065e460(void *param_1, int param_2)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        add     ecx, 0xfffff05f
        xor     eax, eax
        cmp     ecx, 0x3
        ja      L_E4D9
        jmp     dword ptr [ecx*4 + 0x65e520]
L_E478:
        push    0xd0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_E4D7
        mov     ecx, eax
        call    FUN_006a1900
        jmp     L_E4D9
L_E492:
        push    0x10
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_E4D7
        mov     ecx, eax
        call    FUN_006a01e0
        jmp     L_E4D9
L_E4A9:
        push    0x1c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_E4D7
        mov     ecx, eax
        call    FUN_0069ff90
        jmp     L_E4D9
L_E4C0:
        push    0x18
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_E4D7
        mov     ecx, eax
        call    FUN_0069f660
        jmp     L_E4D9
L_E4D7:
        xor     eax, eax
L_E4D9:
        or      eax, 0x1
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     dword ptr [esi], eax
        and     eax, 0xfffffffe
        mov     edx, eax
        and     edx, 0x1
        cmp     dl, 0x1
        jnz     L_E51A
        mov     ecx, eax
        and     ecx, 0x2
        cmp     cl, 0x2
        jnz     L_E50C
        and     eax, 0xfffffffc
        jz      L_E51A
        mov     edx, dword ptr [eax]
        push    0x3
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
        mov     eax, esi
        pop     esi
        ret
L_E50C:
        and     eax, 0xfffffffc
        jz      L_E51A
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
L_E51A:
        mov     eax, esi
        pop     esi
        ret
    }
}
