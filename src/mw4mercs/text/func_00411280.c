/*
 * FUN_00411280 (549 B) — Binary search tree node insertion (string-keyed).
 *   __thiscall (ECX = this = tree root holder). Mirror of FUN_00410b00 but
 *   with different string-copy / node-alloc callees.
 *
 *   param_1 (ESP+0x24) = pointer to key string (byte**)
 *   param_2 (ESP+0x20) = output pointer (int**)
 *
 *   Callees:
 *     FUN_004084d0 (__cdecl allocator, 1 arg)
 *     FUN_00411840 (__cdecl, 2 args)
 *     FUN_004114b0 (__cdecl, 1 arg)
 *     FUN_00411570 (__thiscall/__stdcall, 1 arg)
 *     FUN_00411670 (__cdecl, 2 args)
 *     FUN_00411650 (__thiscall/__stdcall, 1 arg)
 *
 * CFLAGS: /O1
 * Match: 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00411840(void);
extern void __cdecl FUN_004114b0(void);
extern void __stdcall FUN_00411570(void);
extern void __cdecl FUN_00411670(void);
extern void __stdcall FUN_00411650(void);

__declspec(naked) void __stdcall FUN_00411280(void)
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
        jz      L_4112e9
L_411298:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x10], ecx
L_4112a2:
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, ebp
L_4112ab:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_4112cf
        test    cl, cl
        jz      L_4112cb
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_4112cf
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_4112ab
L_4112cb:
        xor     eax, eax
        jmp     L_4112d4
L_4112cf:
        sbb     eax, eax
        sbb     eax, -0x1
L_4112d4:
        test    eax, eax
        setl    al
        test    al, al
        jz      L_4112e2
        mov     ebp, dword ptr [ebp + 0x8]
        jmp     L_4112e5
L_4112e2:
        mov     ebp, dword ptr [ebp + 0xc]
L_4112e5:
        test    ebp, ebp
        jnz     L_4112a2
L_4112e9:
        test    al, al
        mov     dword ptr [esp + 0x10], edi
        jz      L_411387
        mov     eax, dword ptr [ebx]
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_41137a
        cmp     edi, eax
        jz      L_41133e
        test    ebp, ebp
        jnz     L_41133e
        mov     eax, dword ptr [esp + 0x24]
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [eax]
L_41130d:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_411331
        test    cl, cl
        jz      L_41132d
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_411331
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_41130d
L_41132d:
        xor     eax, eax
        jmp     L_411336
L_411331:
        sbb     eax, eax
        sbb     eax, -0x1
L_411336:
        test    eax, eax
        jge     L_411405
L_41133e:
        push    0x18
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x28]
        mov     esi, eax
        push    ecx
        lea     edx, [esi + 0x10]
        push    edx
        call    FUN_00411840
        mov     eax, dword ptr [ebx]
        add     esp, 0xc
        cmp     edi, eax
        mov     dword ptr [edi + 0x8], esi
        jnz     L_41136c
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_411449
L_41136c:
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_411449
        jmp     L_411446
L_41137a:
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_004114b0
        add     esp, 0x4
L_411387:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + 0x10]
        mov     esi, edx
L_411396:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_4113ba
        test    cl, cl
        jz      L_4113b6
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_4113ba
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_411396
L_4113b6:
        xor     eax, eax
        jmp     L_4113bf
L_4113ba:
        sbb     eax, eax
        sbb     eax, -0x1
L_4113bf:
        test    eax, eax
        jge     L_41147c
        mov     ebx, dword ptr [esp + 0x14]
        cmp     edi, dword ptr [ebx]
        jz      L_411422
        test    ebp, ebp
        jnz     L_411422
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, edx
L_4113d8:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_4113fc
        test    cl, cl
        jz      L_4113f8
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_4113fc
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_4113d8
L_4113f8:
        xor     eax, eax
        jmp     L_411401
L_4113fc:
        sbb     eax, eax
        sbb     eax, -0x1
L_411401:
        test    eax, eax
        jl      L_411422
L_411405:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        mov     ecx, ebx
        call    FUN_00411570
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [edi + 0xc], esi
        cmp     edi, dword ptr [eax + 0xc]
        jnz     L_411449
        mov     dword ptr [eax + 0xc], esi
        jmp     L_411449
L_411422:
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    FUN_00411570
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        cmp     edi, eax
        mov     dword ptr [edi + 0x8], esi
        jnz     L_411441
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_411449
L_411441:
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_411449
L_411446:
        mov     dword ptr [eax + 0x8], esi
L_411449:
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
L_41147c:
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edx
        mov     byte ptr [esp + 0x1c], 0x0
        call    FUN_00411650
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
