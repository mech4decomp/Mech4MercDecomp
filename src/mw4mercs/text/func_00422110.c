/*
 * FUN_00422110 (237 B) — MLR object ctor (__thiscall, RET 0x1c).
 * Calls base ctor FUN_00422510, sets vtable 0x76dd8c, allocates an
 * array of handles (FUN_004084d0) and fills them via sprintf (IAT
 * 0x0076b420) + FUN_004906f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b2234;
extern void (*g_0076b420)(void);   /* IAT: sprintf */
extern void FUN_00422510(void);
extern void FUN_004084d0(void);
extern void FUN_004906f0(void);

__declspec(naked) void FUN_00422110(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x14]
        sub     esp, 0x400
        push    ebx
        push    ebp
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0x418]
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x428]
        push    ecx
        mov     ecx, dword ptr [esp + 0x418]
        push    edx
        push    -0x1
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_00422510
        mov     eax, dword ptr [g_007b2234]
        xor     esi, esi
        cmp     eax, esi
        mov     dword ptr [ebx], 0x76dd8c
        mov     dword ptr [ebx + 0x3c], esi
        mov     dword ptr [ebx + 0x40], esi
        jz      L69
        mov     edx, dword ptr [esp + 0x418]
        mov     dword ptr [ebx + 0x48], edx
        jmp     L70
L69:
        mov     dword ptr [ebx + 0x48], 0x1
L70:
        mov     ebp, dword ptr [ebx + 0x48]
        cmp     ebp, esi
        mov     eax, dword ptr [esp + 0x41c]
        mov     dword ptr [ebx + 0x44], esi
        mov     dword ptr [ebx + 0x38], eax
        mov     dword ptr [ebx + 0x4c], esi
        jle     LEF
        __emit 0x8D  /* __emit: lea ecx,[ebp*4+0] no-base SIB form (8D 0C AD) */
        __emit 0x0C
        __emit 0xAD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        xor     ecx, ecx
        cmp     ebp, esi
        mov     dword ptr [ebx + 0x4c], eax
        jle     LEF
        push    edi
        mov     edi, eax
LA3:
        mov     edx, dword ptr [esp + 0x418]
        lea     esi, [ecx + 0x1]
        push    esi
        push    edx
        lea     eax, [esp + 0x18]
        push    0x76dd98
        push    eax
        call    dword ptr [g_0076b420]
        mov     eax, dword ptr [ebx + 0x30]
        add     esp, 0x10
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10034]
        call    FUN_004906f0
        mov     dword ptr [edi], eax
        mov     ecx, esi
        add     edi, 0x4
        cmp     ecx, ebp
        jl      LA3
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x400
        ret     0x1c
LEF:
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x400
        ret     0x1c
    }
}
