/*
 * FUN_00725ae0 (707 B) — object/entity creation.
 *
 * __thiscall (ECX = this). Initializes an object, loads a resource via
 * FUN_006fc4xx helpers, computes a scale ratio with FPU division, and links
 * the object into a global list. RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_85899c;
extern int g_8aadc8;
extern int g_856a80;
extern void *g_76b294;   /* IAT: malloc */
extern void __cdecl FUN_006fc400(void);
extern void __cdecl FUN_006fc640(void);
extern void __cdecl FUN_006fc600(void);
extern void __cdecl FUN_007265f0(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00726550(void);
extern void __cdecl FUN_007589a0(void);
extern void __cdecl FUN_007588c0(void);

__declspec(naked) void FUN_00725ae0(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x10]
        sub     esp, 0x40c
        push    ebx
        xor     ebx, ebx
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0x41c]
        push    esi
        push    edi
        push    ebx
        add     ecx, 0x8
        push    ecx
        lea     edi, [ebp + 0xb4]
        lea     esi, [ebp + 0x14]
        push    edi
        mov     dword ptr [ebp + 0x58], ebx
        mov     dword ptr [ebp + 0x4], ebx
        mov     dword ptr [ebp + 0xc4], ebx
        mov     dword ptr [ebp + 0xc], ebx
        mov     dword ptr [ebp + 0x8], ebx
        mov     dword ptr [ebp + 0x10], ebx
        mov     dword ptr [esi], ebx
        mov     dword ptr [ebp + 0x1c], ebx
        mov     dword ptr [ebp], 0x6
        mov     dword ptr [ebp + 0x20], ebx
        mov     dword ptr [ebp + 0x28], ebx
        mov     dword ptr [ebp + 0x2c], ebx
        mov     dword ptr [ebp + 0x30], ebx
        mov     dword ptr [ebp + 0x24], ebx
        mov     byte ptr [ebp + 0x38], 0x1
        mov     dword ptr [ebp + 0x4c], ebx
        mov     dword ptr [ebp + 0x50], ebx
        mov     dword ptr [ebp + 0x54], ebx
        mov     byte ptr [ebp + 0xb0], al
        call    FUN_006fc400
        mov     edx, dword ptr [esp + 0x428]
        mov     edi, dword ptr [edi]
        push    edx
        push    ebx
        push    edi
        call    FUN_006fc640
        push    0x400
        lea     eax, [esp + 0x20]
        push    eax
        push    edi
        call    FUN_006fc600
        push    esi
        lea     eax, [ebp + 0xc]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, ebp
        call    FUN_007265f0
        push    ebx
        push    0x12
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     cx, word ptr [ecx + 0x10]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [esi]
        mov     word ptr [eax + 0x10], cx
        mov     dword ptr [ebp + 0x20], eax
        xor     eax, eax
        mov     dword ptr [ebp + 0xec], ebx
        mov     dword ptr [ebp + 0xbc], edx
        mov     dword ptr [ebp + 0xac], ebx
        mov     ecx, 0x10
        lea     edi, [ebp + 0x5c]
        rep     stosd
        lea     ecx, [ebp + 0x9c]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, [g_85899c]
        cmp     eax, ebx
        jz      L_725c40
        cmp     dword ptr [esi], eax
        jnc     L_725c40
        mov     edx, dword ptr [ebp + 0x20]
        push    edx
        mov     dword ptr [ebp + 0xb4], ebx
        call    FUN_006f4230
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x20], ebx
        mov     dword ptr [ebp], ebx
        call    FUN_00726550
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x10], edx
        pop     edi
        fidiv   dword ptr [esp + 0xc]
        pop     esi
        mov     eax, ebp
        fstp    dword ptr [ebp + 0x24]
        pop     ebp
        pop     ebx
        add     esp, 0x40c
        ret     0x10
L_725c40:
        mov     eax, [g_8aadc8]
        mov     esi, dword ptr [esp + 0x420]
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     dword ptr [ebp + 0x4], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     eax, dword ptr [ebp + 0x20]
        cmp     word ptr [eax], 0x1
        mov     ecx, dword ptr [ebp + 0x14]
        jnz     L_725cb2
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebx
        mov     byte ptr [ebp + 0x38], 0x1
        fidiv   dword ptr [esp + 0x10]
        fstp    dword ptr [ebp + 0x24]
        jmp     L_725d29
L_725cb2:
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebx
        mov     edx, dword ptr [esp + 0x18]
        fidiv   dword ptr [esp + 0x10]
        mov     byte ptr [ebp + 0x38], bl
        lea     esi, [ebp + 0x39]
        xor     eax, eax
        push    0x10000
        mov     ecx, esi
        push    0x12
        push    esi
        push    edx
        push    ebx
        fstp    dword ptr [ebp + 0x24]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [ecx + 0xc], eax
        mov     word ptr [ecx + 0x10], ax
        mov     word ptr [esi], 0x1
        call    FUN_007589a0
        mov     eax, dword ptr [esp + 0x18]
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    esi
        push    eax
        push    ebx
        lea     eax, [ebp + 0x4c]
        push    eax
        call    FUN_007588c0
        mov     ecx, dword ptr [g_8aadc8]
        push    ecx
        push    0x4000
        call    FUN_006f3c80
        mov     dword ptr [ebp + 0x50], eax
L_725d29:
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0xb4]
        lea     eax, [esp + 0x1c]
        sub     edx, eax
        sub     edx, 0x400
        push    edx
        push    0x1
        push    ecx
        call    FUN_006fc640
        mov     esi, dword ptr [g_856a80]
        push    0x10
        mov     dword ptr [ebp + 0x34], ebx
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [esi]
        add     esp, 0x4
        cmp     ecx, ebx
        mov     dword ptr [eax + 0xc], ebp
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0x8], ebx
        jnz     L_725d74
        mov     dword ptr [esi], eax
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0x8], ebx
        jmp     L_725d8d
L_725d74:
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, ebx
        jz      L_725d84
L_725d7b:
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, ebx
        jnz     L_725d7b
L_725d84:
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0x8], ecx
L_725d8d:
        mov     eax, dword ptr [esi + 0x4]
        inc     eax
        pop     edi
        mov     dword ptr [esi + 0x4], eax
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x40c
        ret     0x10
    }
}
