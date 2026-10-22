/*
 * FUN_004110f0 (391 B) — Binary tree node insertion + rebalance (string-keyed).
 *   __thiscall (ECX = this = tree root holder). Mirror of FUN_00410d30 but
 *   with a different string-copy callee (FUN_00411880).
 *
 *   RET 0x10 (4 stack args).
 *
 *   Callees:
 *     FUN_004084d0 (__cdecl allocator, 1 arg)
 *     FUN_00411880 (__cdecl, 1 arg)
 *     FUN_00410a60 (__cdecl, 2 args)
 *     FUN_00410ab0 (__cdecl, 2 args)
 *
 * CFLAGS: /O1
 * Match: 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00411880(void);
extern void __cdecl FUN_00410a60(void);
extern void __cdecl FUN_00410ab0(void);

__declspec(naked) void __stdcall FUN_004110f0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx]
        cmp     ebp, edi
        mov     dword ptr [esp + 0x10], ecx
        jz      L_411169
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     L_411169
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebx]
L_411114:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_411138
        test    cl, cl
        jz      L_411134
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_411138
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_411114
L_411134:
        xor     eax, eax
        jmp     L_41113d
L_411138:
        sbb     eax, eax
        sbb     eax, -0x1
L_41113d:
        test    eax, eax
        jl      L_411169
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        lea     ecx, [esi + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_41115a
        push    ebx
        call    FUN_00411880
L_41115a:
        cmp     ebp, dword ptr [edi + 0xc]
        mov     ebx, esi
        mov     dword ptr [ebp + 0xc], esi
        jnz     L_41119b
        mov     dword ptr [edi + 0xc], esi
        jmp     L_41119b
L_411169:
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        lea     ecx, [esi + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_411182
        push    ebx
        call    FUN_00411880
L_411182:
        cmp     ebp, edi
        mov     ebx, esi
        mov     dword ptr [ebp + 0x8], esi
        jnz     L_411193
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0xc], esi
        jmp     L_41119b
L_411193:
        cmp     ebp, dword ptr [edi + 0x8]
        jnz     L_41119b
        mov     dword ptr [edi + 0x8], esi
L_41119b:
        mov     eax, dword ptr [edi + 0x4]
        add     edi, 0x4
        mov     dword ptr [ebx + 0x4], ebp
        xor     ebp, ebp
        cmp     ebx, eax
        mov     dword ptr [ebx + 0x8], ebp
        mov     dword ptr [ebx + 0xc], ebp
        mov     esi, ebx
        mov     byte ptr [ebx], 0x0
        jz      L_411259
L_4111b9:
        mov     eax, dword ptr [esi + 0x4]
        cmp     byte ptr [eax], 0x0
        jnz     L_411259
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx + 0x8]
        cmp     eax, ecx
        jnz     L_411211
        mov     ecx, dword ptr [edx + 0xc]
        cmp     ecx, ebp
        jz      L_4111eb
        cmp     byte ptr [ecx], 0x0
        jnz     L_4111eb
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_411251
L_4111eb:
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L_4111fc
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 0x8
L_4111fc:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410ab0
        jmp     L_41124e
L_411211:
        cmp     ecx, ebp
        jz      L_41122a
        cmp     byte ptr [ecx], 0x0
        jnz     L_41122a
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_411251
L_41122a:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_41123b
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 0x8
L_41123b:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410a60
L_41124e:
        add     esp, 0x8
L_411251:
        cmp     esi, dword ptr [edi]
        jnz     L_4111b9
L_411259:
        mov     eax, dword ptr [edi]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 0x4]
        pop     edi
        inc     ecx
        pop     esi
        mov     dword ptr [eax + 0x4], ecx
        mov     eax, dword ptr [esp + 0x10]
        pop     ebp
        mov     dword ptr [eax], ebx
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
