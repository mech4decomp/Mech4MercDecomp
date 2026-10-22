/*
 * FUN_5e033cc9 (320 B) - timezone range computation helper. Computes a
 * day-of-week offset from a date and stores the resulting range bounds into
 * the DAT_5e03a4xx globals.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e03a42c;
extern int g_5e03a460;
extern int g_5e03a430;
extern int g_5e03a464;
extern int g_5e03a414;
extern int g_5e03a410;
extern int g_5e03a418;
extern int g_5e03a424;
extern int g_5e03a384;
extern int g_5e03a428;
extern int g_5e03a420;

__declspec(naked) void FUN_5e033cc9(void)
{
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp+0xc], 1
        push ebx
        mov ebx, dword ptr [ebp+0x10]
        push esi
        jnz Ld64
        mov eax, dword ptr [ebp+0x14]
        mov dword ptr [ebp+0x10], ebx
        and dword ptr [ebp+0x10], 3
        mov esi, eax
        jnz Lcf4
        shl esi, 2
        mov eax, dword ptr [esi+g_5e03a42c]
        jmp Lcfd
    Lcf4:
        shl esi, 2
        mov eax, dword ptr [esi+g_5e03a460]
    Lcfd:
        mov edx, ebx
        lea ecx, [eax+1]
        imul edx, edx, 0x16d
        lea eax, [ebx-1]
        push edi
        sar eax, 2
        mov edi, ecx
        push 7
        add edi, eax
        lea eax, [edx+edi*1+0xffff9c25]
        pop edi
        cdq
        idiv edi
        mov eax, dword ptr [ebp+0x18]
        pop edi
        cmp edx, dword ptr [ebp+0x1c]
        jg Ld37
        imul eax, eax, 7
        sub eax, edx
        add eax, dword ptr [ebp+0x1c]
        lea ecx, [ecx+eax*1-7]
        jmp Ld41
    Ld37:
        imul eax, eax, 7
        sub eax, edx
        add eax, dword ptr [ebp+0x1c]
        add ecx, eax
    Ld41:
        cmp dword ptr [ebp+0x18], 5
        jnz Ld7f
        cmp dword ptr [ebp+0x10], 0
        jnz Ld55
        mov esi, dword ptr [esi+g_5e03a430]
        jmp Ld5b
    Ld55:
        mov esi, dword ptr [esi+g_5e03a464]
    Ld5b:
        cmp ecx, esi
        jle Ld7f
        sub ecx, 7
        jmp Ld7f
    Ld64:
        mov eax, dword ptr [ebp+0x14]
        test bl, 3
        jnz Ld75
        mov ecx, dword ptr [eax*4+g_5e03a42c]
        jmp Ld7c
    Ld75:
        mov ecx, dword ptr [eax*4+g_5e03a460]
    Ld7c:
        add ecx, dword ptr [ebp+0x20]
    Ld7f:
        cmp dword ptr [ebp+0x8], 1
        jnz Ldb0
        mov eax, dword ptr [ebp+0x24]
        mov dword ptr [g_5e03a414], ecx
        imul eax, eax, 0x3c
        add eax, dword ptr [ebp+0x28]
        mov dword ptr [g_5e03a410], ebx
        imul eax, eax, 0x3c
        add eax, dword ptr [ebp+0x2c]
        imul eax, eax, 0x3e8
        add eax, dword ptr [ebp+0x30]
        mov dword ptr [g_5e03a418], eax
        jmp Le05
    Ldb0:
        mov eax, dword ptr [ebp+0x24]
        mov dword ptr [g_5e03a424], ecx
        imul eax, eax, 0x3c
        add eax, dword ptr [ebp+0x28]
        imul eax, eax, 0x3c
        add eax, dword ptr [g_5e03a384]
        add eax, dword ptr [ebp+0x2c]
        imul eax, eax, 0x3e8
        add eax, dword ptr [ebp+0x30]
        mov dword ptr [g_5e03a428], eax
        jns Lde8
        add eax, 0x5265c00
        dec ecx
        mov dword ptr [g_5e03a428], eax
        jmp Ldf9
    Lde8:
        mov edx, 0x5265c00
        cmp eax, edx
        jl Ldff
        sub eax, edx
        inc ecx
        mov dword ptr [g_5e03a428], eax
    Ldf9:
        mov dword ptr [g_5e03a424], ecx
    Ldff:
        mov dword ptr [g_5e03a420], ebx
    Le05:
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
