/*
 * FUN_00410ec0 (549 B) — Binary search tree node insertion (string-keyed).
 *   __thiscall (ECX = this = tree root holder). Mirror of FUN_00410b00 but
 *   with different string-copy / node-alloc callees.
 *
 *   param_1 (ESP+0x24) = pointer to key string (byte**)
 *   param_2 (ESP+0x20) = output pointer (int**)
 *
 *   Callees:
 *     FUN_004084d0 (__cdecl allocator, 1 arg)
 *     FUN_00411820 (__cdecl, 2 args)
 *     FUN_004114b0 (__cdecl, 1 arg)
 *     FUN_00411530 (__thiscall/__stdcall, 1 arg)
 *     FUN_00411670 (__cdecl, 2 args)
 *     FUN_00411610 (__thiscall/__stdcall, 1 arg)
 *
 * CFLAGS: /O1
 * Match: 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00411820(void);
extern void __cdecl FUN_004114b0(void);
extern void __stdcall FUN_00411530(void);
extern void __cdecl FUN_00411670(void);
extern void __stdcall FUN_00411610(void);

__declspec(naked) void __stdcall FUN_00410ec0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        push    edi
        mov     edi, dword ptr [ebx]
        mov     ebp, dword ptr [edi + 0x4]
        test    ebp, ebp
        mov     dword ptr [esp + 0x14], ebx
        mov     al, 0x1
        jz      L_410f29
L_410ed8:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x10], ecx
L_410ee2:
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, ebp
L_410eeb:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_410f0f
        test    cl, cl
        jz      L_410f0b
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_410f0f
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_410eeb
L_410f0b:
        xor     eax, eax
        jmp     L_410f14
L_410f0f:
        sbb     eax, eax
        sbb     eax, -0x1
L_410f14:
        test    eax, eax
        setl    al
        test    al, al
        jz      L_410f22
        mov     ebp, dword ptr [ebp + 0x8]
        jmp     L_410f25
L_410f22:
        mov     ebp, dword ptr [ebp + 0xc]
L_410f25:
        test    ebp, ebp
        jnz     L_410ee2
L_410f29:
        test    al, al
        mov     dword ptr [esp + 0x10], edi
        jz      L_410fc7
        mov     eax, dword ptr [ebx]
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_410fba
        cmp     edi, eax
        jz      L_410f7e
        test    ebp, ebp
        jnz     L_410f7e
        mov     eax, dword ptr [esp + 0x24]
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [eax]
L_410f4d:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_410f71
        test    cl, cl
        jz      L_410f6d
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_410f71
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_410f4d
L_410f6d:
        xor     eax, eax
        jmp     L_410f76
L_410f71:
        sbb     eax, eax
        sbb     eax, -0x1
L_410f76:
        test    eax, eax
        jge     L_411045
L_410f7e:
        push    0x18
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x28]
        mov     esi, eax
        push    ecx
        lea     edx, [esi + 0x10]
        push    edx
        call    FUN_00411820
        mov     eax, dword ptr [ebx]
        add     esp, 0xc
        cmp     edi, eax
        mov     dword ptr [edi + 0x8], esi
        jnz     L_410fac
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_411089
L_410fac:
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_411089
        jmp     L_411086
L_410fba:
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_004114b0
        add     esp, 0x4
L_410fc7:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + 0x10]
        mov     esi, edx
L_410fd6:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_410ffa
        test    cl, cl
        jz      L_410ff6
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_410ffa
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_410fd6
L_410ff6:
        xor     eax, eax
        jmp     L_410fff
L_410ffa:
        sbb     eax, eax
        sbb     eax, -0x1
L_410fff:
        test    eax, eax
        jge     L_4110bc
        mov     ebx, dword ptr [esp + 0x14]
        cmp     edi, dword ptr [ebx]
        jz      L_411062
        test    ebp, ebp
        jnz     L_411062
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, edx
L_411018:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_41103c
        test    cl, cl
        jz      L_411038
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_41103c
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_411018
L_411038:
        xor     eax, eax
        jmp     L_411041
L_41103c:
        sbb     eax, eax
        sbb     eax, -0x1
L_411041:
        test    eax, eax
        jl      L_411062
L_411045:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        mov     ecx, ebx
        call    FUN_00411530
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [edi + 0xc], esi
        cmp     edi, dword ptr [eax + 0xc]
        jnz     L_411089
        mov     dword ptr [eax + 0xc], esi
        jmp     L_411089
L_411062:
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    FUN_00411530
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        cmp     edi, eax
        mov     dword ptr [edi + 0x8], esi
        jnz     L_411081
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_411089
L_411081:
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_411089
L_411086:
        mov     dword ptr [eax + 0x8], esi
L_411089:
        add     eax, 0x4
        xor     ecx, ecx
        push    eax
        push    esi
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0x8], ecx
        mov     dword ptr [esi + 0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 0x4], 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x8
L_4110bc:
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edx
        mov     byte ptr [esp + 0x1c], 0x0
        call    FUN_00411610
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
