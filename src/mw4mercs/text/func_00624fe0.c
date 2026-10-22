/*
 * FUN_00624fe0 (232 B) — __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * Vector reallocation helper: computes new capacity, allocates via
 * FUN_004084d0, copies existing elements, inserts param_2 elements (count
 * from param_3), copies the tail, frees the old buffer, and updates this[0..2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_00624fe0(void *param_1, void *param_2, void *param_3)
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
        jc      L_5007
        lea     ecx, [esp + 0x10]
L_5007:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_5027
        lea     eax, [ecx*4 + 0x0]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x20], eax
        jmp     L_502F
L_5027:
        mov     dword ptr [esp + 0x20], 0x0
L_502F:
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebp, edx
        mov     eax, dword ptr [esp + 0x20]
        jz      L_504F
L_503D:
        mov     ecx, ebp
        test    eax, eax
        jz      L_5045
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
L_5045:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jcc rel-offset (0xEC vs ref 0xEE) */
        __emit 0xEE
L_504F:
        cmp     esi, 0x1
        jnz     L_5065
        test    eax, eax
        jz      L_5060
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
L_5060:
        add     eax, 0x4
        jmp     L_507D
L_5065:
        test    esi, esi
        jbe     L_507D
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1c]
L_506F:
        test    eax, eax
        jz      L_5077
        mov     ebp, dword ptr [esi]
        mov     dword ptr [eax], ebp
L_5077:
        add     eax, 0x4
        dec     ecx
        jnz     L_506F
L_507D:
        cmp     edx, edi
        mov     esi, eax
        jz      L_509A
        mov     ecx, edx
        sub     ecx, eax
L_5087:
        test    esi, esi
        jz      L_5090
        mov     edx, dword ptr [ecx + esi]
        mov     dword ptr [esi], edx
L_5090:
        add     esi, 0x4
        lea     eax, [ecx + esi]
        cmp     eax, edi
        jnz     L_5087
L_509A:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      L_50AD
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_50AD:
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
