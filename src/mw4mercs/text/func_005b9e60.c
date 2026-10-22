/*
 * FUN_005b9e60 (473 B) — Iterates over a list of sub-objects at +0x1d0/+0x1d4
 * and returns the first matching sub-object's query result.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: param_1, param_2).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fd80(void);
extern void FUN_005b9dd0(void);

__declspec(naked) void __fastcall FUN_005b9e60(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ecx
        mov eax, dword ptr [DAT_007dab44]
        push    ebx
        mov ebx, dword ptr [DAT_007dab40]
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, ebx
        mov     edx, dword ptr [ecx + 0xc]
        lea     eax, [ecx + 0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x17]
        test    cl, cl
        push    edi
        jz      L9EA1
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x50]
        mov     eax, dword ptr [ecx + 0x80]
        test    eax, eax
        jnz     LA02F
L9EA1:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L9FB0
        mov     ebp, dword ptr [esi + 0x17c]
        xor     ebx, ebx
        test    ebp, ebp
        jle     L9FB0
        lea     edx, [esi + 0x1d0]
        mov     dword ptr [esp + 0x10], edx
L9EC7:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 0x4]
        add     ecx, 0x10
        call    FUN_0041fd80
        cmp     eax, dword ptr [esp + 0x18]
        jnz     L9F96
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jnz     L9F43
        lea     edi, [ebx + 0x1]
        cmp     edi, ebp
        jge     L9F19
        mov     ecx, dword ptr [esp + 0x10]
        lea     ebp, [ecx + 0x8]
L9EF6:
        mov     edx, dword ptr [ebp]
        push    0x2
        push    edx
        mov     ecx, esi
        call    FUN_005b9dd0
        cmp     al, 0x1
        jz      LA001
        mov     eax, dword ptr [esi + 0x17c]
        inc     edi
        add     ebp, 0x4
        cmp     edi, eax
        jl      L9EF6
L9F19:
        xor     ebp, ebp
        test    ebx, ebx
        jl      L9F96
        lea     edi, [esi + 0x1d4]
L9F25:
        mov     eax, dword ptr [edi]
        push    0x2
        push    eax
        mov     ecx, esi
        call    FUN_005b9dd0
        cmp     al, 0x1
        jz      L9FEA
        inc     ebp
        add     edi, 0x4
        cmp     ebp, ebx
        jle     L9F25
        jmp     L9F96
L9F43:
        lea     edi, [ebx + -0x1]
        test    edi, edi
        jl      L9F6B
        mov     ebp, dword ptr [esp + 0x10]
L9F4E:
        mov     ecx, dword ptr [ebp]
        push    0x2
        push    ecx
        mov     ecx, esi
        call    FUN_005b9dd0
        cmp     al, 0x1
        jz      LA001
        dec     edi
        sub     ebp, 0x4
        test    edi, edi
        jge     L9F4E
L9F6B:
        mov     edi, dword ptr [esi + 0x17c]
        dec     edi
        cmp     edi, ebx
        jle     L9F96
        lea     ebp, [esi + edi*0x4 + 0x1d4]
L9F7D:
        mov     edx, dword ptr [ebp]
        push    0x2
        push    edx
        mov     ecx, esi
        call    FUN_005b9dd0
        cmp     al, 0x1
        jz      LA001
        dec     edi
        sub     ebp, 0x4
        cmp     edi, ebx
        jg      L9F7D
L9F96:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [esi + 0x17c]
        inc     ebx
        add     ecx, 0x4
        cmp     ebx, ebp
        mov     dword ptr [esp + 0x10], ecx
        jl      L9EC7
L9FB0:
        mov     eax, dword ptr [esi + 0x17c]
        xor     ebx, ebx
        test    eax, eax
        jle     LA02F
        lea     edi, [esi + 0x1d4]
L9FC2:
        mov     eax, dword ptr [edi]
        push    0x2
        push    eax
        mov     ecx, esi
        call    FUN_005b9dd0
        cmp     al, 0x1
        jz      LA018
        mov     eax, dword ptr [esi + 0x17c]
        inc     ebx
        add     edi, 0x4
        cmp     ebx, eax
        jl      L9FC2
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x8
L9FEA:
        mov     ecx, dword ptr [esi + ebp*0x4 + 0x1d4]
        add     ecx, 0x10
        call    FUN_0041fd80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
LA001:
        mov     ecx, dword ptr [esi + edi*0x4 + 0x1d4]
        add     ecx, 0x10
        call    FUN_0041fd80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
LA018:
        mov     ecx, dword ptr [esi + ebx*0x4 + 0x1d4]
        add     ecx, 0x10
        call    FUN_0041fd80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
LA02F:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x8
    }


}
