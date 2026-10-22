/*
 * FUN_00619b70 (271 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Deep-copies a tree/list structure rooted at param_1 into param_1_00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void *__cdecl FUN_00493120(void *p);
extern int __cdecl FUN_00619fa0(int a, void *b);
extern void *__cdecl FUN_0061a0a0(int a);

__declspec(naked) void __stdcall FUN_00619b70(void *param)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xC]
        mov     al, byte ptr [ebx]
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     byte ptr [ebp], al
        push    0x18
        mov     dword ptr [ebp], 0x0
        call    FUN_004084d0
        mov     ecx, dword ptr [ebx]
        mov     esi, dword ptr [ecx + 0x4]
        mov     edi, eax
        mov     al, byte ptr [ebx + 0x8]
        add     esp, 0x4
        test    esi, esi
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x4], 0x0
        mov     byte ptr [ebp + 0x8], al
        mov     byte ptr [edi], 0x0
        jnz     L_bcc
        mov     ecx, dword ptr [ebx + 0x4]
        mov     dword ptr [edi + 0x4], 0x0
        mov     dword ptr [edi + 0x8], edi
        mov     dword ptr [edi + 0xC], edi
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x4], ecx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
L_bcc:
        lea     edx, [esi + 0x10]
        push    edx
        mov     ecx, ebp
        call    FUN_00493120
        mov     ebx, eax
        mov     al, byte ptr [esi]
        xor     ecx, ecx
        mov     byte ptr [ebx], al
        mov     eax, dword ptr [esi + 0xC]
        cmp     eax, ecx
        mov     dword ptr [ebx + 0x8], ecx
        mov     dword ptr [ebx + 0xC], ecx
        mov     dword ptr [ebx + 0x4], edi
        jz      L_bfb
        push    ebx
        push    eax
        mov     ecx, ebp
        call    FUN_00619fa0
        mov     dword ptr [ebx + 0xC], eax
L_bfb:
        mov     edi, dword ptr [esi + 0x8]
        test    edi, edi
        mov     dword ptr [esp + 0x10], ebx
        jz      L_c38
L_c06:
        push    edi
        mov     ecx, ebp
        call    FUN_0061a0a0
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x8], esi
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [edi + 0xC]
        test    eax, eax
        jz      L_c2d
        push    esi
        push    eax
        mov     ecx, ebp
        call    FUN_00619fa0
        mov     dword ptr [esi + 0xC], eax
L_c2d:
        mov     edi, dword ptr [edi + 0x8]
        test    edi, edi
        mov     dword ptr [esp + 0x10], esi
        jnz     L_c06
L_c38:
        mov     edx, dword ptr [ebp]
        mov     dword ptr [edx + 0x4], ebx
        mov     eax, ebx
        mov     ebx, dword ptr [ebx + 0x8]
        test    ebx, ebx
        jz      L_c52
        mov     ecx, ebx
L_c49:
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jnz     L_c49
L_c52:
        mov     dword ptr [edx + 0x8], eax
        mov     ecx, dword ptr [edx + 0x4]
        mov     eax, dword ptr [ecx + 0xC]
        test    eax, eax
        jz      L_c68
L_c5f:
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0xC]
        test    eax, eax
        jnz     L_c5f
L_c68:
        mov     ebx, dword ptr [esp + 0x18]
        pop     edi
        mov     dword ptr [edx + 0xC], ecx
        mov     ecx, dword ptr [ebx + 0x4]
        pop     esi
        mov     dword ptr [ebp + 0x4], ecx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
