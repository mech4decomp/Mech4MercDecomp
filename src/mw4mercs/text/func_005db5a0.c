/*
 * FUN_005db5a0 (311 B) — __thiscall (ECX=this, RET 4). Copies a string from
 * [this+0x2d4] into a local buffer, parses it via FUN_0061c960, allocates
 * and initializes a 0x40-byte object, and calls into the AI system.
 *
 * Match: target 100%
 */

extern void __stdcall FUN_005db570(void);
extern void __stdcall FUN_006f4950(void);
extern void __stdcall FUN_0061c960(void);
extern void __stdcall FUN_006f49a0(void);
extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __stdcall FUN_0064aff0(void);
extern void __stdcall FUN_006fab90(void);
extern void __stdcall FUN_0064b7b0(void);

__declspec(naked) void __stdcall FUN_005db5a0(void *param)
{
    

extern int DAT_0076b2a0;
extern int DAT_007f2450;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        mov     byte ptr [ebx + 0x2f0], 0x1
        call    FUN_005db570
        mov     edi, dword ptr [ebx + 0x2d4]
        cmp     byte ptr [edi], 0x0
        jz      L_b6bc
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [ebp - 0x80]
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [DAT_007f2450]
        push    ecx
        call    FUN_006f4950
        mov     edx, dword ptr [ebp + 0x8]
        xor     edi, edi
        push    edi
        push    edi
        push    edi
        push    edi
        push    edx
        lea     eax, [ebp - 0x80]
        push    eax
        call    FUN_0061c960
        mov     esi, eax
        add     esp, 0x18
        cmp     esi, edi
        mov     dword ptr [ebx + 0x2e0], esi
        jge     L_b627
        call    FUN_006f49a0
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_b627:
        push    0x40
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_b668
        mov     dword ptr [eax], 0xffffffff
        mov     byte ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0x20], 0xffffffff
        mov     dword ptr [eax + 0x24], edi
        mov     byte ptr [eax + 0x2c], 0x0
        mov     dword ptr [eax + 0x30], edi
        mov     dword ptr [eax + 0x34], edi
        mov     dword ptr [eax + 0x38], edi
        mov     byte ptr [eax + 0x3c], 0x0
        mov     byte ptr [eax + 0x3d], 0x0
        mov     byte ptr [eax + 0x3e], 0x0
        mov     byte ptr [eax + 0x3f], 0x0
        jmp     L_b66a
    L_b668:
        xor     eax, eax
    L_b66a:
        push    esi
        mov     ecx, eax
        mov     dword ptr [ebx + 0x2e4], eax
        call    FUN_0064aff0
        test    eax, eax
        jz      L_b68e
        push    0x788314
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_b68e
        int     3
    L_b68e:
        mov     ecx, dword ptr [ebx + 0x2d4]
        push    0x5c
        push    ecx
        call dword ptr [DAT_0076b2a0]
        mov     ecx, dword ptr [ebx + 0x2e4]
        add     esp, 0x8
        push    eax
        call    FUN_0064b7b0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_b6bc:
        xor     eax, eax
        mov     byte ptr [edi], al
        pop     edi
        mov     dword ptr [ebx + 0x2e0], eax
        mov     dword ptr [ebx + 0x2e4], eax
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }


}
