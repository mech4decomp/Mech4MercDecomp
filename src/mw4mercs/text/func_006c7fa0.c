/*
 * FUN_006c7fa0 (563 B) — __stdcall pane/region merge. Walks doubly-linked
 * lists (offsets 0x14/0x18/0x1c) of a pane structure, merges adjacent
 * regions by adjusting bounds, and frees merged nodes via FUN_006c7f30.
 * __stdcall, RET 0x4 (1 arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006c7f30(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00717c10(void);

__declspec(naked) void FUN_006c7fa0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebp + 0x20]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], eax
        mov     ebx, 0x1
L_7fb5:
        mov     eax, dword ptr [ebp + 0x14]
        xor     dl, dl
        test    eax, eax
        mov     dword ptr [ebp + 0x10], 0x0
        mov     ecx, ebp
        jz      L_7fe0
L_7fc7:
        cmp     dword ptr [eax + 0x18], ecx
        jnz     L_7fe0
        mov     esi, dword ptr [ebp + 0x14]
        mov     edi, dword ptr [eax + 0x10]
        cmp     edi, dword ptr [esi + 0x10]
        jnz     L_7fe0
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x14]
        test    eax, eax
        jnz     L_7fc7
L_7fe0:
        mov     esi, dword ptr [ecx + 0x14]
        test    esi, esi
        jz      L_80b3
        cmp     dword ptr [esi + 0x1c], ecx
        jnz     L_80b3
        mov     ecx, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ecx + 0x10]
        cmp     dword ptr [esi + 0x10], ecx
        jnz     L_80b3
        mov     edi, dword ptr [esi + 0x18]
        cmp     dword ptr [edi + 0x10], ecx
        jnz     L_8013
L_800b:
        mov     edi, dword ptr [edi + 0x1c]
        cmp     dword ptr [edi + 0x10], ecx
        jz      L_800b
L_8013:
        mov     eax, dword ptr [edi + 0x10]
        test    eax, eax
        jnz     L_80b3
        cmp     ecx, ebx
        mov     byte ptr [esp + 0x18], bl
        jnz     L_806e
        mov     eax, dword ptr [esi + 0x18]
        cmp     dword ptr [eax + 0x10], ebx
        mov     ecx, dword ptr [edi + 0x8]
        jnz     L_803c
L_8031:
        sub     dword ptr [eax + 0x8], ecx
        mov     eax, dword ptr [eax + 0x1c]
        cmp     dword ptr [eax + 0x10], ebx
        jz      L_8031
L_803c:
        mov     eax, dword ptr [esi + 0x1c]
        cmp     dword ptr [eax + 0x10], ebx
        jnz     L_805c
L_8044:
        mov     edx, dword ptr [eax + 0x4]
        mov     esi, dword ptr [eax + 0x8]
        sub     edx, ecx
        add     esi, ecx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], esi
        mov     eax, dword ptr [eax + 0x18]
        cmp     dword ptr [eax + 0x10], ebx
        jz      L_8044
L_805c:
        mov     edx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [ebp + 0x8]
        sub     edx, ecx
        add     eax, ecx
        mov     dword ptr [ebp + 0x4], edx
        mov     dword ptr [ebp + 0x8], eax
        jmp     L_80a9
L_806e:
        mov     eax, dword ptr [esi + 0x18]
        cmp     dword ptr [eax + 0x10], ecx
        mov     edx, dword ptr [edi + 0xc]
        jnz     L_8084
L_8079:
        sub     dword ptr [eax + 0xc], edx
        mov     eax, dword ptr [eax + 0x1c]
        cmp     dword ptr [eax + 0x10], ecx
        jz      L_8079
L_8084:
        mov     eax, dword ptr [esi + 0x1c]
        cmp     dword ptr [eax + 0x10], ecx
        jnz     L_8099
L_808c:
        sub     dword ptr [eax], edx
        add     dword ptr [eax + 0xc], edx
        mov     eax, dword ptr [eax + 0x18]
        cmp     dword ptr [eax + 0x10], ecx
        jz      L_808c
L_8099:
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        sub     ecx, edx
        add     eax, edx
        mov     dword ptr [ebp], ecx
        mov     dword ptr [ebp + 0xc], eax
L_80a9:
        push    edi
        call    FUN_006c7f30
        mov     dl, byte ptr [esp + 0x18]
L_80b3:
        mov     eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov     ecx, ebp
        jz      L_80d5
L_80bc:
        cmp     dword ptr [eax + 0x1c], ecx
        jnz     L_80d5
        mov     esi, dword ptr [ebp + 0x14]
        mov     edi, dword ptr [eax + 0x10]
        cmp     edi, dword ptr [esi + 0x10]
        jnz     L_80d5
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x14]
        test    eax, eax
        jnz     L_80bc
L_80d5:
        mov     esi, dword ptr [ecx + 0x14]
        test    esi, esi
        jz      L_8194
        cmp     dword ptr [esi + 0x18], ecx
        jnz     L_8194
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax + 0x10]
        cmp     dword ptr [esi + 0x10], ecx
        jnz     L_8194
        mov     edi, dword ptr [esi + 0x1c]
        cmp     dword ptr [edi + 0x10], ecx
        jnz     L_8108
L_8100:
        mov     edi, dword ptr [edi + 0x18]
        cmp     dword ptr [edi + 0x10], ecx
        jz      L_8100
L_8108:
        mov     eax, dword ptr [edi + 0x10]
        test    eax, eax
        jnz     L_8194
        cmp     ecx, ebx
        jnz     L_8156
        mov     eax, dword ptr [esi + 0x1c]
        cmp     dword ptr [eax + 0x10], ebx
        mov     ecx, dword ptr [edi + 0x8]
        jnz     L_8130
L_8122:
        sub     dword ptr [eax + 0x8], ecx
        add     dword ptr [eax + 0x4], ecx
        mov     eax, dword ptr [eax + 0x18]
        cmp     dword ptr [eax + 0x10], ebx
        jz      L_8122
L_8130:
        mov     eax, dword ptr [esi + 0x18]
        cmp     dword ptr [eax + 0x10], ebx
        jnz     L_8143
L_8138:
        add     dword ptr [eax + 0x8], ecx
        mov     eax, dword ptr [eax + 0x1c]
        cmp     dword ptr [eax + 0x10], ebx
        jz      L_8138
L_8143:
        mov     eax, dword ptr [ebp + 0x8]
        add     eax, ecx
        push    edi
        mov     dword ptr [ebp + 0x8], eax
        call    FUN_006c7f30
        jmp     L_7fb5
L_8156:
        mov     eax, dword ptr [esi + 0x1c]
        cmp     dword ptr [eax + 0x10], ecx
        mov     edx, dword ptr [edi + 0xc]
        jnz     L_816e
L_8161:
        sub     dword ptr [eax + 0xc], edx
        add     dword ptr [eax], edx
        mov     eax, dword ptr [eax + 0x18]
        cmp     dword ptr [eax + 0x10], ecx
        jz      L_8161
L_816e:
        mov     eax, dword ptr [esi + 0x18]
        cmp     dword ptr [eax + 0x10], ecx
        jnz     L_8181
L_8176:
        add     dword ptr [eax + 0xc], edx
        mov     eax, dword ptr [eax + 0x1c]
        cmp     dword ptr [eax + 0x10], ecx
        jz      L_8176
L_8181:
        mov     eax, dword ptr [ebp + 0xc]
        add     eax, edx
        push    edi
        mov     dword ptr [ebp + 0xc], eax
        call    FUN_006c7f30
        jmp     L_7fb5
L_8194:
        test    dl, dl
        jnz     L_7fb5
        mov     eax, dword ptr [ebp + 0x14]
        test    eax, eax
        jnz     L_81cb
        push    ebp
        call    FUN_006f4230
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0x10]
        push    ecx
        call    FUN_00717c10
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        mov     ecx, dword ptr [esi + 0xc]
        mov     dword ptr [ecx], eax
        jz      L_81c5
        mov     dword ptr [eax + 0xc], ecx
L_81c5:
        push    esi
        call    FUN_006f4230
L_81cb:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
