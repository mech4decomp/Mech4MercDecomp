/*
 * FUN_10030610 (735 B) -- __thiscall, RET 0x4.
 * COM/socket setup: CoCreateInstance two objects, resolve host/port via
 * vtable[0x48], create+bind a socket, getsockname/ntohs to get the local
 * port, then dispatch through this->[0xc] vtable. Cleans up COM objects.
 *
 * CFLAGS: /O1
 */

extern void *g_10049234;
extern void *g_10049100;
extern void *g_100491d0;
extern void __cdecl FUN_1003791a(void);
extern void __cdecl FUN_100467ee(void);
extern void __cdecl FUN_100467e8(void);
extern void __cdecl FUN_100467e2(void);
extern void __cdecl FUN_100467dc(void);
extern void __cdecl FUN_100467d6(void);
extern void __cdecl FUN_10030c80(void);

__declspec(naked) void FUN_10030610(void)
{
    __asm {
        sub     esp, 0xf0
        push    ebx
        push    ebp
        xor     eax, eax
        push    esi
        push    edi
        mov     ebp, ecx
        mov     ecx, 0x12
        lea     edi, [esp + 0x38]
        rep stosd
        mov     edi, dword ptr [esp + 0x104]
        lea     eax, [edi + 0x10]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x50], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x54], edx
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x58], ecx
        lea     eax, [edi + 0x20]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x5c], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x44], edx
        mov     edx, dword ptr [eax + 0xc]
        lea     eax, [esp + 0x14]
        push    eax
        push    0x1004ae8c
        xor     ebx, ebx
        push    0x17
        push    ebx
        push    0x1004ae9c
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x4c], 0x48
        mov     dword ptr [esp + 0x50], 0x1
        mov     dword ptr [esp + 0x5c], ecx
        mov     dword ptr [esp + 0x60], edx
        mov     dword ptr [esp + 0x80], ebx
        call    dword ptr [g_10049234]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_8b8
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    0x1004addc
        push    eax
        call    dword ptr [ecx + 0x34]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_8b8
        lea     edx, [esp + 0x10]
        push    edx
        push    0x1004ae8c
        push    0x17
        push    ebx
        push    0x1004ae9c
        call    dword ptr [g_10049234]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_8b8
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    0x1004addc
        push    eax
        call    dword ptr [ecx + 0x34]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_8b8
        mov     eax, dword ptr [edi + 0xc]
        cmp     eax, ebx
        jz      L_725
        push    0x40
        lea     edx, [esp + 0x84]
        push    edx
        push    -1
        push    eax
        push    ebx
        push    ebx
        call    dword ptr [g_10049100]
        jmp     L_74f
    L_725:
        movzx   eax, byte ptr [edi + 0x37]
        movzx   ecx, byte ptr [edi + 0x36]
        movzx   edx, byte ptr [edi + 0x35]
        push    eax
        movzx   eax, byte ptr [edi + 0x34]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x90]
        push    0x10051568
        push    ecx
        call    dword ptr [g_100491d0]
        add     esp, 0x18
    L_74f:
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [edx]
        lea     eax, [esp + 0x80]
        push    0x1
        push    eax
        call    FUN_1003791a
        add     esp, 0x4
        lea     ecx, [eax + eax + 0x2]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x88]
        push    edx
        push    0x10051548
        push    eax
        call    dword ptr [esi + 0x48]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_8b8
        movzx   ecx, word ptr [edi + 0x38]
        mov     eax, dword ptr [esp + 0x10]
        push    0x2
        mov     dword ptr [esp + 0x1c], ecx
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x1005155c
        push    eax
        call    dword ptr [edx + 0x48]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_8b8
        push    ebx
        push    0x2
        push    0x2
        call    FUN_100467ee
        mov     esi, eax
        cmp     esi, -1
        jz      L_853
        xor     edx, edx
        mov     dword ptr [esp + 0x1c], edx
        push    0x10
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x24], edx
        push    eax
        mov     dword ptr [esp + 0x2c], edx
        push    esi
        mov     dword ptr [esp + 0x34], edx
        mov     word ptr [esp + 0x28], 0x2
        call    FUN_100467e8
        test    eax, eax
        jnz     L_815
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x3c], 0x10
        call    FUN_100467e2
        test    eax, eax
        jge     L_815
        mov     word ptr [esp + 0x1e], bx
    L_815:
        push    esi
        call    FUN_100467dc
        cmp     word ptr [esp + 0x1e], bx
        jz      L_853
        mov     eax, dword ptr [esp + 0x1e]
        push    eax
        call    FUN_100467d6
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, dword ptr [esp + 0x14]
        push    0x2
        push    0x4
        mov     dword ptr [esp + 0x34], ecx
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x34]
        push    ecx
        push    0x1005155c
        push    eax
        call    dword ptr [edx + 0x48]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_8b8
    L_853:
        push    0xbb8
        mov     ecx, ebp
        call    FUN_10030c80
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [eax]
        push    ebx
        push    0x10030d50
        push    ebp
        push    eax
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [ebp + 0xc]
        push    ebx
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x38]
        push    edx
        movzx   edx, word ptr [edi + 0x8]
        push    ebx
        push    edx
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        mov     edx, dword ptr [esp + 0x28]
        push    ebx
        push    ebx
        push    edx
        mov     edx, dword ptr [esp + 0x30]
        push    edx
        lea     edx, [esp + 0x5c]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x1c]
        mov     edi, dword ptr [edi + 0x30]
        cmp     edi, ebx
        mov     esi, eax
        jz      L_8a8
        mov     eax, dword ptr [esp + 0x34]
        mov     dword ptr [edi], eax
    L_8a8:
        cmp     esi, 0x15800e
        jnz     L_8b4
        xor     esi, esi
        jmp     L_8c0
    L_8b4:
        cmp     esi, ebx
        jge     L_8c0
    L_8b8:
        mov     ecx, dword ptr [ebp]
        push    ebx
        push    ebp
        call    dword ptr [ecx + 0x20]
    L_8c0:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_8d2
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0x10], ebx
    L_8d2:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      L_8e0
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
    L_8e0:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xf0
        ret     0x4
    }
}
