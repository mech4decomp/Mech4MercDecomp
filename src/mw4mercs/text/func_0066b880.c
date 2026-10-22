/*
 * FUN_0066b880 (331 B) — __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * Allocates a 0xc-byte node, links it to param_1+0x18, stores a vtable
 * pointer (0x76cc9c), then walks a linked list (param_1[2]) comparing each
 * node's name against "AnimType" via _stricmp (IAT 0x76b2ac), building a
 * result list and calling FUN_0066ba60 / FUN_00767cc0 as it goes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_0076b2ac;   /* _imp___stricmp */
extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_00767cc0(void);
extern void __cdecl FUN_0066ba60(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_0066b880(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0xc
        mov     edi, ecx
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x14]
        xor     esi, esi
        add     esp, 0x4
        cmp     eax, esi
        jz      L_B8B0
        lea     edx, [ecx + 0x18]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [edx]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cc9c
        mov     dword ptr [esp + 0x10], eax
        jmp     L_B8B4
L_B8B0:
        mov     dword ptr [esp + 0x10], esi
L_B8B4:
        mov     eax, dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax]
        push    esi
        lea     ebx, [edi + 0x29]
        push    ebx
        push    0x796e54
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x20], esi
        call    FUN_00411ec0
        test    al, al
        jnz     L_B8D6
        mov     byte ptr [ebx], 0x1
L_B8D6:
        push    ebp
L_B8D7:
        mov     ebx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ebx + 0x8]
        test    ecx, ecx
        jz      L_B984
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [ebx + 0x8], ecx
        jz      L_B984
        mov     ebx, dword ptr [eax + 0x14]
        mov     ebp, dword ptr [eax + 0x18]
        push    0x796e48
        push    ebx
        call    dword ptr [DAT_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L_B96E
        test    esi, esi
        jz      L_B939
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [edi + 0x24]
        push    edx
        mov     edx, dword ptr [edi + 0x20]
        push    eax
        add     ecx, edx
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_0066ba60
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        inc     dword ptr [edi + 0x20]
L_B939:
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_B95E
        mov     ecx, eax
        call    FUN_00767cc0
        mov     esi, eax
        mov     eax, dword ptr [esi]
        push    ebp
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        jmp     L_B8D7
L_B95E:
        xor     esi, esi
        mov     eax, dword ptr [esi]
        push    ebp
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        jmp     L_B8D7
L_B96E:
        test    esi, esi
        jz      L_B8D7
        mov     edx, dword ptr [esi]
        push    ebp
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        jmp     L_B8D7
L_B984:
        test    esi, esi
        pop     ebp
        jz      L_B9AF
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [edi + 0x24]
        push    eax
        mov     eax, dword ptr [edi + 0x20]
        push    ecx
        add     edx, eax
        push    edx
        push    esi
        mov     ecx, edi
        call    FUN_0066ba60
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
        inc     dword ptr [edi + 0x20]
L_B9AF:
        push    ebx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [edi + 0x20]
        mov     edx, dword ptr [eax]
        add     esp, 0x4
        pop     edi
        add     ecx, edx
        pop     esi
        mov     dword ptr [eax], ecx
        pop     ebx
        ret     0x10
    }
}
