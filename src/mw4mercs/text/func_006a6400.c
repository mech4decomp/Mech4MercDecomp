/*
 * FUN_006a6400 (452 B) — __cdecl, RET 0 (5 stack params).
 *
 * Iterates a collection via virtual calls, builds a name, and stores
 * float/vector results through a destination pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a5f60(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a7570(void);

__declspec(naked) void __cdecl FUN_006a6400(void)
{
    __asm {
        sub     esp, 0x60
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x78]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        xor     ebp, ebp
        call    dword ptr [eax + 0x4]
        test    eax, eax
        mov     ebx, dword ptr [esp + 0x84]
        mov     edi, dword ptr [esp + 0x78]
        jbe     L_646f
L_loop:
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        lea     ecx, [esp + 0x2c]
        push    eax
        mov     eax, dword ptr [esp + 0x84]
        push    ebp
        push    ebx
        push    eax
        push    esi
        push    edi
        push    ecx
        call    FUN_006a5f60
        mov     dl, byte ptr [eax]
        add     esp, 0x1c
        add     eax, 0x4
        push    eax
        lea     ecx, [esp + 0x24]
        mov     byte ptr [esp + 0x20], dl
        call    FUN_0040c5d0
        cmp     byte ptr [esp + 0x1c], 0x1
        jz      L_650b
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        inc     ebp
        call    dword ptr [eax + 0x4]
        cmp     ebp, eax
        jc      L_loop
L_646f:
        push    0x0
        push    0x453b8000
        push    0x41a00000
        push    0x1
        lea     ecx, [esp + 0x4c]
        call    FUN_006a6600
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0xb4]
        cmp     al, 0x1
        jnz     L_6527
        push    0x3f4ccccd
        push    0x41400000
        push    0x42fa0000
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x60]
        call    FUN_006a7570
        push    0x0
        push    0x0
        push    ebx
        lea     edx, [esp + 0x48]
        push    edx
        lea     eax, [esp + 0x60]
        push    eax
        lea     ecx, [esp + 0x40]
        push    edi
        push    ecx
        call    FUN_006a5f60
        fld     dword ptr [eax + 0x8]
        mov     cl, byte ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0xc]
        add     esp, 0x1c
        cmp     cl, 0x1
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x28], eax
        jnz     L_6525
        mov     eax, dword ptr [esp + 0x74]
        fld     dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x28]
        fstp    dword ptr [eax]
        pop     edi
        pop     esi
        fstp    dword ptr [eax + 0x4]
        pop     ebp
        mov     dword ptr [eax + 0x8], ecx
        pop     ebx
        add     esp, 0x60
        ret
L_650b:
        mov     esi, dword ptr [esp + 0x74]
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    FUN_0040c5d0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret
L_6525:
        fstp    st(0)
L_6527:
        push    0x1
        push    0x0
        push    ebx
        lea     edx, [esp + 0x48]
        push    edx
        lea     eax, [esp + 0x8c]
        push    eax
        lea     ecx, [esp + 0x40]
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x98], 0x799e34
        call    FUN_006a5f60
        fld     dword ptr [eax + 0x8]
        mov     cl, byte ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0xc]
        add     esp, 0x1c
        cmp     cl, 0x1
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x28], eax
        jnz     L_6586
        mov     eax, dword ptr [esp + 0x74]
        fld     dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x28]
        fstp    dword ptr [eax]
        pop     edi
        pop     esi
        fstp    dword ptr [eax + 0x4]
        pop     ebp
        mov     dword ptr [eax + 0x8], ecx
        pop     ebx
        add     esp, 0x60
        ret
L_6586:
        mov     edx, dword ptr [edi]
        fstp    st(0)
        mov     ecx, edi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        fld     dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        pop     edi
        fxch
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x70]
        mov     ecx, dword ptr [esp + 0x14]
        fstp    dword ptr [eax]
        pop     esi
        pop     ebp
        fstp    dword ptr [eax + 0x4]
        mov     dword ptr [eax + 0x8], ecx
        pop     ebx
        add     esp, 0x60
        ret
    }
}
