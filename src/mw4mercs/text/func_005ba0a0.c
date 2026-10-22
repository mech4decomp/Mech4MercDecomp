/*
 * FUN_005ba0a0 (417 B) — Iterates over a list of sub-objects at +0x1d0/+0x1d4
 * and returns the first matching sub-object's query result.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: param_1, param_2).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fd80(void);
extern void FUN_005b9dd0(void);

__declspec(naked) void __fastcall FUN_005ba0a0(void)
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
        jz      LA0E0
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x50]
        cmp     dword ptr [ecx + 0x80], 0x2
        jz      LA220
LA0E0:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      LA1F0
        mov     ebp, dword ptr [esi + 0x17c]
        xor     ebx, ebx
        test    ebp, ebp
        jle     LA1F0
        lea     edx, [esi + 0x1d0]
        mov     dword ptr [esp + 0x10], edx
LA106:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 0x4]
        add     ecx, 0x10
        call    FUN_0041fd80
        cmp     eax, dword ptr [esp + 0x18]
        jnz     LA1D6
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jnz     LA183
        lea     edi, [ebx + 0x1]
        cmp     edi, ebp
        jge     LA158
        mov     ecx, dword ptr [esp + 0x10]
        lea     ebp, [ecx + 0x8]
LA135:
        mov     edx, dword ptr [ebp]
        push    0x1
        push    edx
        mov     ecx, esi
        call    FUN_005b9dd0
        cmp     al, 0x1
        jz      LA22A
        mov     eax, dword ptr [esi + 0x17c]
        inc     edi
        add     ebp, 0x4
        cmp     edi, eax
        jl      LA135
LA158:
        xor     edi, edi
        test    ebx, ebx
        jl      LA1D6
        lea     ebp, [esi + 0x1d4]
LA164:
        mov     eax, dword ptr [ebp]
        push    0x1
        push    eax
        mov     ecx, esi
        call    FUN_005b9dd0
        cmp     al, 0x1
        jz      LA22A
        inc     edi
        add     ebp, 0x4
        cmp     edi, ebx
        jle     LA164
        jmp     LA1D6
LA183:
        lea     edi, [ebx + -0x1]
        test    edi, edi
        jl      LA1AB
        mov     ebp, dword ptr [esp + 0x10]
LA18E:
        mov     ecx, dword ptr [ebp]
        push    0x1
        push    ecx
        mov     ecx, esi
        call    FUN_005b9dd0
        cmp     al, 0x1
        jz      LA22A
        dec     edi
        sub     ebp, 0x4
        test    edi, edi
        jge     LA18E
LA1AB:
        mov     edi, dword ptr [esi + 0x17c]
        dec     edi
        cmp     edi, ebx
        jle     LA1D6
        lea     ebp, [esi + edi*0x4 + 0x1d4]
LA1BD:
        mov     edx, dword ptr [ebp]
        push    0x1
        push    edx
        mov     ecx, esi
        call    FUN_005b9dd0
        cmp     al, 0x1
        jz      LA22A
        dec     edi
        sub     ebp, 0x4
        cmp     edi, ebx
        jg      LA1BD
LA1D6:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [esi + 0x17c]
        inc     ebx
        add     ecx, 0x4
        cmp     ebx, ebp
        mov     dword ptr [esp + 0x10], ecx
        jl      LA106
LA1F0:
        mov     eax, dword ptr [esi + 0x17c]
        xor     edi, edi
        test    eax, eax
        jle     LA220
        lea     ebx, [esi + 0x1d4]
LA202:
        mov     eax, dword ptr [ebx]
        push    0x1
        push    eax
        mov     ecx, esi
        call    FUN_005b9dd0
        cmp     al, 0x1
        jz      LA22A
        mov     eax, dword ptr [esi + 0x17c]
        inc     edi
        add     ebx, 0x4
        cmp     edi, eax
        jl      LA202
LA220:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x8
LA22A:
        mov     ecx, dword ptr [esi + edi*0x4 + 0x1d4]
        add     ecx, 0x10
        call    FUN_0041fd80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }


}
