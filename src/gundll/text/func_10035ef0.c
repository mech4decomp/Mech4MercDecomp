/*
 * FUN_10035ef0 (424 B) — __thiscall, RET 0x4.
 * CoCreateInstance + COM interface setup/teardown for a device object
 * (variant of FUN_10030460 with different vtable slots).
 *
 * CFLAGS: /O1
 */

extern int g_10049234;    /* CoCreateInstance fn ptr */
extern int *g_10049100;   /* IAT: MultiByteToWideChar */
extern void __cdecl FUN_1003791a(void);

__declspec(naked) void FUN_10035ef0(void)
{
    __asm {
        sub     esp, 0xd8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [g_10049234]
        lea     eax, [esp + 0x14]
        push    eax
        push    0x1004ae8c
        xor     ebp, ebp
        push    0x17
        push    ebp
        mov     ebx, ecx
        push    0x1004ae9c
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x30], ebp
        call    edi
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1003608f
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    0x1004addc
        push    eax
        call    dword ptr [ecx + 0x34]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1003608f
        lea     edx, [esp + 0x10]
        push    edx
        push    0x1004ae8c
        push    0x17
        push    ebp
        push    0x1004ae9c
        call    edi
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1003608f
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    0x1004addc
        push    eax
        call    dword ptr [ecx + 0x34]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1003608f
        mov     ebx, dword ptr [esp + 0xec]
        mov     eax, dword ptr [ebx + 0xc]
        cmp     eax, ebp
        jz      L_10035fd8
        push    0x40
        lea     edx, [esp + 0x6c]
        push    edx
        push    -1
        push    eax
        push    ebp
        push    ebp
        call    dword ptr [g_10049100]
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [eax]
        lea     ecx, [esp + 0x68]
        push    0x1
        push    ecx
        call    FUN_1003791a
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 0x4
        lea     edx, [eax + eax + 0x2]
        push    edx
        lea     eax, [esp + 0x70]
        push    eax
        push    0x10051548
        push    ecx
        call    dword ptr [esi + 0x48]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1003608b
    L_10035fd8:
        mov     edx, dword ptr [ebx + 0x10]
        xor     eax, eax
        mov     ecx, 0x12
        lea     edi, [esp + 0x20]
        rep     stosd
        mov     dword ptr [esp + 0x20], 0x48
        mov     eax, dword ptr [edx]
        mov     dword ptr [esp + 0x38], eax
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [esp + 0x3c], ecx
        mov     eax, dword ptr [edx + 0x8]
        push    ebp
        mov     dword ptr [esp + 0x44], eax
        mov     ecx, dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [edx + 0xc]
        lea     edx, [esp + 0x20]
        push    edx
        mov     edx, dword ptr [ebx + 0x14]
        push    edx
        movzx   edx, word ptr [ebx + 0x8]
        push    -1
        push    ebp
        push    -1
        push    edx
        mov     edx, dword ptr [ebx + 0x4]
        push    edx
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        lea     edx, [esp + 0x48]
        push    edx
        mov     dword ptr [esp + 0x70], ecx
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x64]
        mov     esi, eax
        cmp     esi, 0x15800e
        jnz     L_10036087
        xor     esi, esi
    L_1003604b:
        mov     ebx, dword ptr [ebx + 0x18]
        cmp     ebx, ebp
        jz      L_10036058
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx], ecx
    L_10036058:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      L_1003606a
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0x10], ebp
    L_1003606a:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      L_10036078
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
    L_10036078:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd8
        ret     0x4
    L_10036087:
        cmp     esi, ebp
        jge     L_1003604b
    L_1003608b:
        mov     ebx, dword ptr [esp + 0x18]
    L_1003608f:
        mov     eax, dword ptr [ebx]
        push    ebp
        push    ebx
        call    dword ptr [eax + 0x14]
        jmp     L_10036058
    }
}
