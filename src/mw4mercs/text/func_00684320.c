/*
 * FUN_00684320 (232 B) — __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * Vector reallocation helper (same shape as FUN_00624fe0 / FUN_00662da0 /
 * FUN_00682060): computes new capacity, allocates via FUN_004084d0, copies
 * existing elements, inserts param_2 elements (count from param_3), copies
 * the tail, frees the old buffer, and updates this[0..2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_00684320(void *param_1, void *param_2, void *param_3)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebx + 0x4]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 0x2
        cmp     eax, esi
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x20]
        jc      L_4347
        lea     ecx, [esp + 0x10]
L_4347:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_4367
        lea     eax, [ecx*4 + 0x0]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x20], eax
        jmp     L_436F
L_4367:
        mov     dword ptr [esp + 0x20], 0x0
L_436F:
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebp, edx
        mov     eax, dword ptr [esp + 0x20]
        jz      L_438F
L_437D:
        mov     ecx, ebp
        test    eax, eax
        jz      L_4385
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
L_4385:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jcc rel-offset (0xEC vs ref 0xEE) */
        __emit 0xEE
L_438F:
        cmp     esi, 0x1
        jnz     L_43A5
        test    eax, eax
        jz      L_43A0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
L_43A0:
        add     eax, 0x4
        jmp     L_43BD
L_43A5:
        test    esi, esi
        jbe     L_43BD
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1c]
L_43AF:
        test    eax, eax
        jz      L_43B7
        mov     ebp, dword ptr [esi]
        mov     dword ptr [eax], ebp
L_43B7:
        add     eax, 0x4
        dec     ecx
        jnz     L_43AF
L_43BD:
        cmp     edx, edi
        mov     esi, eax
        jz      L_43DA
        mov     ecx, edx
        sub     ecx, eax
L_43C7:
        test    esi, esi
        jz      L_43D0
        mov     edx, dword ptr [ecx + esi]
        mov     dword ptr [esi], edx
L_43D0:
        add     esi, 0x4
        lea     eax, [ecx + esi]
        cmp     eax, edi
        jnz     L_43C7
L_43DA:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      L_43ED
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_43ED:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [ebx + 0x4], esi
        pop     esi
        lea     edx, [eax + ecx*0x4]
        pop     ebp
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebx + 0x8], edx
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
