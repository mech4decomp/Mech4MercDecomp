/*
 * FUN_005C7DF0 (217 B) — __thiscall, RET 4.
 * Walks a linked list of entries (via FUN_005faee0), looking for one whose
 * handle matches a decoded global. On match, copies 3 floats/ints into the
 * output param and returns 1; otherwise returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005faee0(void);
extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064df20(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064dda0(void);

__declspec(naked) int __cdecl FUN_005c7df0(void *param_1, void *param_2)
{
    
__asm {
sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, [ecx + 0x170]
        push    esi
        push    edi
        mov     ecx, ebp
        call    FUN_005faee0
        mov     ebx, [eax]
        mov     ecx, ebp
        call    FUN_005faee0
        cmp     ebx, [eax + 4]
        jz      l_done_false

    l_loop:
        _emit   0xA1            /* __emit: mov eax,[imm32] -> MSVC6 emits immediate load, not A1 deref */
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     ecx, [eax]
        _emit   0xA1            /* __emit: mov eax,[imm32] -> A1 moffs form */
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     edi, [ebx]
        xor     ecx, eax
        mov     esi, [ecx + 0x20]
        xor     esi, 0x85739531
        push    edi
        mov     ecx, esi
        call    FUN_00600940
        mov     ecx, eax
        call    FUN_0064e600
        cmp     al, 1
        jnz     l_continue
        push    edi
        mov     ecx, esi
        call    FUN_00600940
        mov     ecx, eax
        call    FUN_0064e5a0
        mov     esi, eax
        mov     ecx, esi
        call    FUN_0064df20
        cmp     al, 1
        jnz     l_continue
        mov     ecx, esi
        call    FUN_0064e100
        mov     eax, [eax]
        mov     edx, [eax]
        push    edx
        mov     ecx, esi
        call    FUN_0064dda0
        test    eax, eax
        jz      l_continue
        cmp     eax, ebp
        jnz     l_found

    l_continue:
        mov     ecx, ebp
        add     ebx, 4
        call    FUN_005faee0
        cmp     ebx, [eax + 4]
        jnz     l_loop

    l_done_false:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xc
        ret     4

    l_found:
        mov     eax, [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        fld     dword ptr [eax + 0x1c]
        mov     eax, [eax + 0x2c]
        mov     [esp + 0x18], eax
        fxch
        mov     eax, [esp + 0x20]
        mov     ecx, [esp + 0x18]
        fstp    dword ptr [eax]
        pop     edi
        pop     esi
        fstp    dword ptr [eax + 4]
        pop     ebp
        mov     [eax + 8], ecx
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
    }


}
