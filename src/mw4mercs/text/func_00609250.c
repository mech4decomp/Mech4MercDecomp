/*
 * FUN_00609250 (423 B) — animation-blend/archive subsystem. Iterates an
 * object list (FUN_00416cc0), accumulating blend weights (FPU) and
 * dispatching per-item work (FUN_0059eb30/FUN_0059fac0/FUN_00617d10,
 * string compare via IAT _strcmpi).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_0076b41c;   /* IAT: _strcmpi */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_0059eb30(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0059fac0(void);
extern void __cdecl FUN_00617d10(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00609250(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        push    esi
        add     ecx, 0x28
        push    edi
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x28], 0x78bf24
        mov     dword ptr [esp + 0xc], 0
        call    FUN_00416cc0
        mov     ebx, eax
        test    ebx, ebx
        jz      L_6093c2
        push    ebp
L_609287:
        mov     eax, dword ptr [ebx + 0x30]
        fld     dword ptr [ebx + 0x18]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        fimul   dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        jle     L_6093ae
        mov     ebp, dword ptr [ebx + 0x10]
        mov     dword ptr [esp + 0x14], eax
L_6092ac:
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x2c]
        push    ebp
        call    FUN_0059eb30
        cmp     ebp, 0xc8
        jl      L_609347
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x38]
        add     eax, 0x10
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x20], 0x77a108
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      L_609336
L_609312:
        mov     edi, dword ptr [ebx + 0x14]
L_609315:
        mov     ecx, dword ptr [esi + 0x10]
        push    edi
        push    ecx
        call    dword ptr [g_0076b41c]
        add     esp, 0x8
        test    eax, eax
        jz      L_609336
        lea     ecx, [esp + 0x20]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     L_609315
L_609336:
        mov     ecx, dword ptr [esi + 0x6c]
        xor     edx, edx
        cmp     ecx, -1
        setnz   dl
        inc     edx
        mov     dword ptr [esi + 0x6c], edx
        jmp     L_6093a4
L_609347:
        cmp     ebp, 0x96
        jge     L_60937b
        mov     ecx, dword ptr [ebx + 0x14]
        mov     edx, dword ptr [g_007dab44]
        lea     eax, [esp + 0x18]
        push    eax
        mov     eax, dword ptr [edx]
        push    1
        push    ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x24]
        call    FUN_0059fac0
        jmp     L_6093a4
L_60937b:
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ebx + 0x14]
        push    0
        push    1
        lea     edx, [esp + 0x24]
        push    edx
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x44]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_00617d10
L_6093a4:
        dec     dword ptr [esp + 0x14]
        jnz     L_6092ac
L_6093ae:
        lea     ecx, [esp + 0x2c]
        call    FUN_00416cc0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_609287
        pop     ebp
L_6093c2:
        mov     eax, dword ptr [g_007dab44]
        fld     dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     esi, dword ptr [edx + 0x24]
        call    FUN_0075db4a
        sub     dword ptr [esi + 0x1c], eax
        lea     ecx, [esp + 0x28]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x30
        ret
    }
}
