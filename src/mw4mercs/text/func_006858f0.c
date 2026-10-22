/*
 * FUN_006858f0 (405 B) — __thiscall, RET 0x4. HUD element update/aim-check
 * family. Walks a linked list at this->0x60, frees nodes, computes a
 * sub-code from flags, calls FUN_00707e70 then FUN_005d9be0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0068f370(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d9500(void);
extern void __cdecl FUN_005d8270(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005d9be0(void);
extern int g_007f2438;

__declspec(naked) void FUN_006858f0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebp, dword ptr [esi+0x60]
        cmp     ebp, dword ptr [esi+0x54]
        push    edi
        jnz     L_685907
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_685907:
        mov     ebx, dword ptr [ebp+0xc]
        test    bl, 0x1
        jnz     L_685a7c
        mov     al, byte ptr [ebp+0x10]
        test    al, al
        jnz     L_685a7c
        mov     edi, dword ptr [esi+0x64]
        test    edi, edi
        jz      L_685935
        mov     ecx, edi
        call    FUN_0068f370
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_685935:
        mov     edi, dword ptr [esi+0x38]
        xor     edx, edx
        cmp     edi, edx
        mov     dword ptr [esi+0x64], edx
        jz      L_6859e6
        mov     eax, dword ptr [edi+0x14]
        mov     dword ptr [esi+0x64], eax
        mov     al, byte ptr [edi+0xc]
        test    al, al
        jz      L_685a7c
        cmp     edi, edx
        mov     dword ptr [edi+0x14], edx
        jz      L_68596d
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_68596d:
        mov     edi, dword ptr [esi+0x64]
        mov     al, byte ptr [edi+0x24]
        test    al, al
        mov     dword ptr [esi+0x38], 0x0
        jnz     L_6859b7
        mov     eax, dword ptr [ebp+0x14]
        cmp     eax, -0x1
        jz      L_68598f
        mov     ecx, dword ptr [esi+0x34]
        push    eax
        call    FUN_005d8270
L_68598f:
        test    edi, edi
        jz      L_6859a3
        mov     ecx, edi
        call    FUN_0068f370
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_6859a3:
        pop     edi
        mov     dword ptr [esi+0x64], 0x0
        mov     byte ptr [esi+0x3c], 0x0
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_6859b7:
        mov     al, byte ptr [edi+0x26]
        test    al, al
        jz      L_685a7c
        test    edi, edi
        jz      L_6859d6
        mov     ecx, edi
        call    FUN_0068f370
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_6859d6:
        pop     edi
        mov     dword ptr [esi+0x64], 0x0
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_6859e6:
        xor     eax, eax
        test    bl, 0x80
        jz      L_6859f2
        mov     eax, 0x80
L_6859f2:
        test    bl, 0x10
        jz      L_6859fc
        add     eax, 0x41
        jmp     L_685a40
L_6859fc:
        test    bl, 0x1
        jz      L_685a06
        add     eax, 0x60
        jmp     L_685a40
L_685a06:
        test    bl, 0x2
        jz      L_685a10
        add     eax, 0x44
        jmp     L_685a40
L_685a10:
        test    bl, 0x8
        jz      L_685a1a
        add     eax, 0x48
        jmp     L_685a40
L_685a1a:
        test    bl, 0x4
        jz      L_685a24
        add     eax, 0x60
        jmp     L_685a40
L_685a24:
        test    bl, 0x20
        jz      L_685a2e
        add     eax, 0x42
        jmp     L_685a40
L_685a2e:
        test    bl, 0x40
        jz      L_685a38
        add     eax, 0x60
        jmp     L_685a40
L_685a38:
        test    bh, 0x1
        jz      L_685a40
        add     eax, 0x50
L_685a40:
        xor     ecx, ecx
        mov     cl, byte ptr [esi+0x3e]
        push    ecx
        mov     ecx, dword ptr [esi+0x24]
        push    ecx
        mov     ecx, dword ptr [ebp+0x8]
        push    ecx
        mov     ecx, dword ptr [ebp]
        push    ecx
        mov     ecx, dword ptr [esp+0x24]
        mov     edi, dword ptr [ecx+0x8]
        mov     ecx, dword ptr [ecx]
        push    edi
        push    ecx
        push    eax
        mov     eax, dword ptr [esi+0x34]
        push    eax
        push    edx
        call    FUN_00707e70
        mov     ecx, dword ptr [g_007f2438]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    FUN_005d9be0
        mov     dword ptr [esi+0x38], eax
L_685a7c:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
    }
}
