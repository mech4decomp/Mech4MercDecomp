/*
 * FUN_0060DF20 (401 B) — __thiscall (ECX=this), one stack param, RET 8.
 *
 * Iterates a list of objects, extracting per-object bit flags into a set
 * of output arrays.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415230(void);

extern int g_007f25a8;

__declspec(naked) int __stdcall FUN_0060df20(void *param_1)
{
    __asm {
        sub     esp, 0x28
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [eax + 0xc]
        push    ebx
        mov     ebx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x4], ebx
        mov     ebx, dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0x8], ebx
        mov     ebx, dword ptr [eax + 0x1c]
        push    ebp
        mov     ebp, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x10], ebx
        mov     ebx, dword ptr [eax + 0x20]
        push    esi
        mov     esi, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x18], ebx
        mov     ebx, dword ptr [eax + 0x24]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x28]
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x20], ebx
        xor     ebx, ebx
        test    eax, eax
        jz      L_60e087
        mov     ecx, edx
        sub     ecx, esi
        mov     dword ptr [esp + 0x24], ecx
        mov     eax, dword ptr [eax + 0x34c]
        mov     ecx, edi
        sub     ecx, esi
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x10]
        sub     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x14]
        sub     ecx, esi
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, esi
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, esi
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x20]
        sub     ebp, esi
        sub     ecx, esi
        mov     dword ptr [esp + 0x20], ecx
        jmp     L_60dfbe
L_60dfba:
        mov     eax, dword ptr [esp + 0x34]
L_60dfbe:
        test    eax, eax
        jz      L_60e072
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x34], ecx
        jz      L_60e09c
        mov     eax, dword ptr [g_007f25a8]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_60dfba
        mov     edx, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x30]
        mov     edx, dword ptr [esp + 0x24]
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x170]
        mov     dword ptr [esi + ebp], eax
        xor     eax, eax
        mov     al, byte ptr [edi + 0x1a0]
        mov     dword ptr [esi], ebx
        mov     dword ptr [edx + esi], ecx
        mov     ecx, dword ptr [esp + 0x28]
        and     eax, 0x1
        mov     dword ptr [ecx + esi], eax
        mov     eax, dword ptr [edi + 0x1a0]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, eax
        shr     edx, 0x1
        and     edx, 0x1
        mov     dword ptr [ecx + esi], edx
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, eax
        shr     edx, 0x2
        and     edx, 0x1
        mov     dword ptr [ecx + esi], edx
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, eax
        shr     edx, 0x3
        and     edx, 0x1
        mov     dword ptr [ecx + esi], edx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, eax
        shr     edx, 0x4
        and     edx, 0x1
        shr     eax, 0x5
        mov     dword ptr [ecx + esi], edx
        mov     edx, dword ptr [esp + 0x20]
        and     eax, 0x1
        mov     dword ptr [edx + esi], eax
        inc     ebx
        add     esi, 0x4
        jmp     L_60dfba
L_60e072:
        mov     eax, dword ptr [esp + 0x3c]
        pop     edi
        pop     esi
        mov     dword ptr [eax], ebx
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x28
        ret     0x8
L_60e087:
        mov     ecx, dword ptr [esp + 0x3c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], ebx
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x28
        ret     0x8
L_60e09c:
        mov     edx, dword ptr [esp + 0x3c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], ebx
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x28
        ret     0x8
    }
}
