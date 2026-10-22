/*
 * FUN_006c64a0 (397 B) — __thiscall (ECX = this), RET 0x10 (4 stack params).
 * Initializes a 0x4C-byte object, allocates a name buffer via FUN_006f3c80
 * ("Volatile"/"Non-Volatile" string), copies it in, and links the object
 * into a global list at DAT_0083a208.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_006f3c80(int size, int a);
extern void  __stdcall FUN_006c84c0(void *p, int a, int b);
extern void  __cdecl FUN_006c8280(void);
extern void  __cdecl FUN_006c7680(void);
extern void  __stdcall FUN_006c85a0(void *p);

extern int g_0082e220;
extern int g_0083a208;

__declspec(naked) void __stdcall FUN_006c64a0(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, 0x3f800000
        mov     dword ptr [ebp + 0x14], eax
        mov     dword ptr [ebp + 0x10], eax
        mov     al, byte ptr [esp + 0x18]
        cmp     al, bl
        push    esi
        push    edi
        mov     dword ptr [ebp + 0x20], ebx
        mov     dword ptr [ebp + 0x1c], ebx
        mov     dword ptr [ebp + 0x18], ebx
        mov     dword ptr [ebp + 0x2c], ebx
        mov     dword ptr [ebp + 0x28], ebx
        mov     dword ptr [ebp + 0x24], ebx
        mov     dword ptr [ebp + 0x38], ebx
        mov     dword ptr [ebp + 0x34], ebx
        mov     dword ptr [ebp + 0x30], ebx
        mov     dword ptr [ebp + 0x8], 0xffffffff
        mov     dword ptr [ebp + 0xc], 0x1
        mov     byte ptr [ebp + 0x48], al
        mov     dword ptr [ebp + 0x3c], ebx
        mov     dword ptr [ebp + 0x40], ebx
        jz      L_6517
        mov     eax, dword ptr [g_0082e220]
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79e170
        repne   scasb
        not     ecx
        add     ecx, 0x24
        push    ecx
        call    FUN_006f3c80
        mov     dword ptr [ebp + 0x44], eax
        lea     edx, [eax + 0x20]
        mov     edi, 0x79e170
        jmp     L_6540
L_6517:
        mov     ecx, dword ptr [g_0082e220]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79e160
        repne   scasb
        not     ecx
        add     ecx, 0x24
        push    ecx
        call    FUN_006f3c80
        mov     dword ptr [ebp + 0x44], eax
        lea     edx, [eax + 0x20]
        mov     edi, 0x79e160
L_6540:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        mov     edx, dword ptr [esp + 0x14]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [ebp + 0x44]
        push    ecx
        push    edx
        lea     edi, [esi + 0xc]
        push    edi
        call    FUN_006c84c0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], ecx
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x18], 0x1
        mov     dword ptr [esi + 0x4], ebx
        cmp     dword ptr [esi + 0x8], -0x1
        jnz     L_65f3
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [eax + 0x8]
        imul    edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0x18]
        add     ecx, 0x3
        test    edx, edx
        mov     dword ptr [esp + 0x18], ebx
        jle     L_65ea
L_65b1:
        mov     al, byte ptr [ecx]
        cmp     al, 0xff
        jz      L_65bb
        cmp     al, bl
        jnz     L_65e3
L_65bb:
        cmp     al, bl
        jnz     L_65c6
        mov     dword ptr [esi + 0x8], 0x2
L_65c6:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi]
        add     ecx, 0x4
        inc     edx
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [eax + 0x8]
        imul    edx, dword ptr [eax + 0x4]
        cmp     dword ptr [esp + 0x18], edx
        jl      L_65b1
        jmp     L_65ea
L_65e3:
        mov     dword ptr [esi + 0x8], 0x1
L_65ea:
        cmp     dword ptr [esi + 0x8], -0x1
        jnz     L_65f3
        mov     dword ptr [esi + 0x8], ebx
L_65f3:
        mov     ecx, ebp
        call    FUN_006c8280
        mov     ecx, dword ptr [g_0083a208]
        mov     eax, dword ptr [ebp + 0x44]
        mov     dword ptr [eax + 0x1c], ecx
        mov     ecx, ebp
        mov     dword ptr [g_0083a208], eax
        call    FUN_006c7680
        cmp     byte ptr [esp + 0x20], bl
        jnz     L_6624
        mov     edx, dword ptr [ebp + 0x44]
        add     edx, 0xc
        push    edx
        call    FUN_006c85a0
L_6624:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
