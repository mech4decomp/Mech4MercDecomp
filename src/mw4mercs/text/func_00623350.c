/*
 * FUN_00623350 (337 B) — __thiscall (ECX = this), RET 0x8 (two stack params).
 *
 * Inserts a (param_1, param_2) pair into a growable array of 8-byte records
 * on `this` (offsets 0x2c4/0x2c8/0x2cc). If param_1 already exists in the
 * array, updates its second field; otherwise appends, reallocating via
 * FUN_004084d0 / FUN_004084e0 when full, then calls FUN_00622da0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00622da0(void);

__declspec(naked) void __stdcall FUN_00623350(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x2c4]
        mov     ecx, dword ptr [ebx + 0x2c8]
        cmp     eax, ecx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        jz      L_337B
L_336C:
        mov     edx, dword ptr [eax]
        cmp     edx, dword ptr [esp + 0x18]
        jz      L_33A4
        add     eax, 0x8
        cmp     eax, ecx
        jnz     L_336C
L_337B:
        mov     edi, dword ptr [ebx + 0x2c8]
        cmp     edi, dword ptr [ebx + 0x2cc]
        jz      L_33B0
        test    edi, edi
        jz      L_3396
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [edi], eax
        mov     dword ptr [edi + 0x4], esi
L_3396:
        add     edi, 0x8
        mov     dword ptr [ebx + 0x2c8], edi
        jmp     L_3486
L_33A4:
        pop     edi
        mov     dword ptr [eax + 0x4], esi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x8
L_33B0:
        push    ebp
        mov     ebp, dword ptr [ebx + 0x2c4]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 0x3
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_33D7
        lea     ecx, [esp + 0x14]
L_33D7:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_33F5
        shl     ecx, 0x3
        push    ecx
        call    FUN_004084d0
        mov     edx, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], edx
        jmp     L_3401
L_33F5:
        mov     dword ptr [esp + 0x10], 0x0
        mov     edx, dword ptr [esp + 0x10]
L_3401:
        cmp     ebp, edi
        mov     eax, edx
        jz      L_3425
        mov     ecx, ebp
L_3409:
        test    eax, eax
        jz      L_3417
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], esi
L_3417:
        add     ecx, 0x8
        add     eax, 0x8
        cmp     ecx, edi
        jnz     L_3409
        mov     esi, dword ptr [esp + 0x20]
L_3425:
        test    eax, eax
        jz      L_3432
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], esi
L_3432:
        cmp     edi, edi
        lea     esi, [eax + 0x8]
        jz      L_3457
L_3439:
        mov     eax, edi
        sub     eax, esi
L_343D:
        test    esi, esi
        jz      L_344D
        mov     ecx, dword ptr [eax + esi*0x1]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax + esi*0x1 + 0x4]
        mov     dword ptr [esi + 0x4], ecx
L_344D:
        add     esi, 0x8
        lea     ecx, [eax + esi*0x1]
        cmp     ecx, edi
        jnz     L_343D
L_3457:
        test    ebp, ebp
        mov     dword ptr [esp + 0x20], ebp
        jz      L_346C
        push    ebp
        call    FUN_004084e0
        mov     edx, dword ptr [esp + 0x14]
        add     esp, 0x4
L_346C:
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [edx + eax*0x8]
        mov     dword ptr [ebx + 0x2c4], edx
        mov     dword ptr [ebx + 0x2c8], esi
        mov     dword ptr [ebx + 0x2cc], ecx
        pop     ebp
L_3486:
        mov     edx, dword ptr [esp + 0x18]
        push    0x0
        push    0x0
        push    0x0
        push    edx
        mov     ecx, ebx
        call    FUN_00622da0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
