/*
 * FUN_00658850 (386 B) — growable vector resize/insert (__thiscall, RET 8).
 *
 * Resizes the 0x28-byte-element vector at this to hold param_1 elements,
 * growing/reallocating via FUN_00658FD0 when capacity is exceeded, and
 * filling new slots from param_2. Two stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00658fd0(void *a, void *b);
extern void __cdecl FUN_00659a00(void *a, void *b);
extern void __cdecl FUN_006583b0(void);
extern void __cdecl FUN_00659550(void *a);
extern void __cdecl FUN_00659a50(void *a);

__declspec(naked) void func_00658850(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x8]
        push    ebp
        push    esi
        mov     esi, dword ptr [ebx]
        sub     ecx, esi
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        add     edx, eax
        cmp     edi, edx
        mov     dword ptr [esp + 0x10], ebx
        jbe     L_6588e4
        mov     cl, byte ptr [ebx + 0x8]
        lea     edx, [esp + 0x24]
        push    edx
        mov     byte ptr [esp + 0x28], cl
        push    edi
        lea     ecx, [esp + 0x1c]
        call    FUN_00658fd0
        test    edi, edi
        mov     ebp, dword ptr [esp + 0x14]
        jbe     L_6588af
L_65889b:
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        push    ebp
        call    FUN_00659a00
        add     esp, 0x8
        add     ebp, 0x28
        dec     edi
        jnz     L_65889b
L_6588af:
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebx], eax
        mov     ecx, dword ptr [ebx + 0x4]
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx + 0x4], ebp
        mov     edx, dword ptr [ebx + 0x8]
        mov     dword ptr [esp + 0x18], ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [ebx + 0x8], eax
        call    FUN_006583b0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_6588e4:
        mov     ebp, dword ptr [ebx + 0x4]
        mov     ecx, ebp
        sub     ecx, esi
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edi, edx
        mov     dword ptr [esp + 0x24], edx
        jbe     L_658946
        cmp     esi, ebp
        jz      L_65891f
L_658908:
        mov     ecx, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    FUN_00659550
        add     esi, 0x28
        cmp     esi, ebp
        jnz     L_658908
        mov     edx, dword ptr [esp + 0x24]
L_65891f:
        sub     edi, edx
        jz      L_658939
L_658923:
        test    ebp, ebp
        jz      L_658933
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        mov     ecx, ebp
        call    FUN_00659a50
L_658933:
        add     ebp, 0x28
        dec     edi
        jnz     L_658923
L_658939:
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x4], ebp
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_658946:
        test    edi, edi
        jbe     L_658997
        mov     ecx, dword ptr [esp + 0x28]
        mov     dl, byte ptr [ecx + 0x4]
        lea     eax, [esi + 0x10]
L_658954:
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [esi], ebx
        mov     ebx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax - 0x8], ebx
        mov     ebx, dword ptr [ecx + 0xc]
        mov     byte ptr [eax - 0xc], dl
        mov     dword ptr [eax - 0x4], ebx
        mov     ebx, dword ptr [ecx + 0x10]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [ecx + 0x14]
        mov     dword ptr [eax + 0x4], ebx
        mov     ebx, dword ptr [ecx + 0x18]
        mov     dword ptr [eax + 0x8], ebx
        mov     ebx, dword ptr [ecx + 0x1c]
        mov     dword ptr [eax + 0xc], ebx
        mov     bl, byte ptr [ecx + 0x20]
        mov     byte ptr [eax + 0x10], bl
        mov     ebx, dword ptr [ecx + 0x24]
        mov     dword ptr [eax + 0x14], ebx
        add     esi, 0x28
        add     eax, 0x28
        dec     edi
        jnz     L_658954
        mov     ebx, dword ptr [esp + 0x10]
L_658997:
        mov     ecx, ebp
        sub     ecx, ebp
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_6589c5
        sub     ebp, esi
        mov     edi, edx
L_6589b4:
        lea     ecx, [esi + ebp*0x1]
        push    ecx
        mov     ecx, esi
        call    FUN_00659550
        add     esi, 0x28
        dec     edi
        jnz     L_6589b4
L_6589c5:
        pop     edi
        mov     dword ptr [ebx + 0x4], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
    }
}
