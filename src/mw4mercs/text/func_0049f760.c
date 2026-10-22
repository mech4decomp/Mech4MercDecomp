/*
 * FUN_0049f760 (676 B) - MLR particle/flare/debris object setup
 * (__thiscall, RET 0x8, two stack args). Allocates and initializes a
 * particle buffer (0x48-byte elements), a byte mask buffer, and several
 * sub-objects via FUN_004940a0 / FUN_004a17f0 / FUN_004a1800 /
 * FUN_004450a0 / FUN_00445100 / FUN_0049fa30, with alloc/free via
 * FUN_004084d0 / FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004940a0(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004a17f0(void);
extern void __cdecl FUN_004a1800(int arg);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_006f4950(int arg);
extern void __cdecl FUN_004450a0(int arg);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00445100(void);
extern void __cdecl FUN_0049fa30(int arg);

extern int g_007da974;   /* 0x007da974 */
extern int g_007b9598;   /* 0x007b9598 */

__declspec(naked) void FUN_0049f760(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_007da974]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004940a0
        mov     ebp, dword ptr [edi + 0x228]
        xor     ebx, ebx
        mov     dword ptr [esi + 0xc0], ebx
        mov     dword ptr [esi + 0xc8], ebx
        cmp     ebp, dword ptr [esi + 0xc0]
        mov     dword ptr [esi + 0xbc], ebx
        mov     dword ptr [esi + 0xc4], ebx
        mov     dword ptr [esi], 0x770280
        mov     dword ptr [esp + 0x14], ebp
        jz      LF884
        cmp     ebp, ebx
        jbe     LF869
        lea     edx, [ebp + ebp*8]
        shl     edx, 0x3
        push    edx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        cmp     edi, ebx
        jz      LF802
        lea     eax, [ebp - 1]
        test    eax, eax
        mov     ebx, edi
        jl      LF7F8
        inc     eax
        mov     dword ptr [esp + 0x20], eax
LF7E3:
        mov     ecx, ebx
        call    FUN_004a17f0
        mov     eax, dword ptr [esp + 0x20]
        add     ebx, 0x48
        dec     eax
        mov     dword ptr [esp + 0x20], eax
        jnz     LF7E3
LF7F8:
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], ecx
        xor     ebx, ebx
        jmp     LF808
LF802:
        mov     dword ptr [esp + 0x20], ebx
        mov     ecx, ebx
LF808:
        mov     eax, dword ptr [esi + 0xbc]
        cmp     eax, ebx
        jz      LF85D
        mov     ebx, dword ptr [esi + 0xc0]
        cmp     ebp, ebx
        jnc     LF81E
        mov     ebx, ebp
LF81E:
        mov     edx, ebx
        dec     ebx
        test    edx, edx
        jz      LF84A
        lea     edx, [ebx + ebx*8]
        sub     eax, ecx
        lea     edi, [ecx + edx*8]
        mov     dword ptr [esp + 0x10], eax
        inc     ebx
        jmp     LF838
LF834:
        mov     eax, dword ptr [esp + 0x10]
LF838:
        add     eax, edi
        push    eax
        mov     ecx, edi
        call    FUN_004a1800
        dec     ebx
        sub     edi, 0x48
        test    ebx, ebx
        ja      LF834
LF84A:
        mov     eax, dword ptr [esi + 0xbc]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x4
LF85D:
        mov     edi, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0xbc], ecx
        jmp     LF87E
LF869:
        mov     eax, dword ptr [esi + 0xbc]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0xbc], ebx
LF87E:
        mov     dword ptr [esi + 0xc0], ebp
LF884:
        mov     ebx, dword ptr [edi + 0x238]
        mov     edi, ebp
        lea     ecx, [ebx + ebx*2]
        imul    edi, ebx
        lea     edx, [ecx + ecx - 6]
        mov     ecx, dword ptr [g_007b9598]
        add     ebp, 0x7fffffff
        imul    edx, ebp
        lea     eax, [edi + edi*8]
        lea     ebp, [edx + eax*2]
        push    ecx
        shl     ebp, 0x1
        call    FUN_006f4950
        push    0xb4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      LF8DA
        dec     ebx
        imul    ebx, dword ptr [esp + 0x14]
        shl     ebx, 0x1
        push    ebx
        mov     ecx, eax
        call    FUN_004450a0
        mov     dword ptr [esp + 0x1c], eax
        jmp     LF8E2
LF8DA:
        mov     dword ptr [esp + 0x1c], 0x0
LF8E2:
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0xcc], edx
        call    FUN_006f49a0
        mov     ebx, dword ptr [esi + 0xc8]
        cmp     ebp, ebx
        mov     dword ptr [esi + 0xb0], 0x0
        mov     dword ptr [esi + 0xb4], 0x0
        jz      LF97C
        test    ebp, ebp
        jbe     LF95D
        push    ebp
        call    FUN_004084d0
        mov     ecx, dword ptr [esi + 0xc4]
        add     esp, 0x4
        test    ecx, ecx
        mov     edx, eax
        mov     dword ptr [esp + 0x20], edx
        jz      LF955
        cmp     ebp, ebx
        mov     eax, ebp
        jc      LF934
        mov     eax, ebx
LF934:
        mov     ebx, eax
        dec     eax
        test    ebx, ebx
        jz      LF948
LF93B:
        mov     bl, byte ptr [ecx + eax]
        mov     byte ptr [eax + edx], bl
        mov     ebx, eax
        dec     eax
        test    ebx, ebx
        jnz     LF93B
LF948:
        push    ecx
        call    FUN_004084e0
        mov     edx, dword ptr [esp + 0x24]
        add     esp, 0x4
LF955:
        mov     dword ptr [esi + 0xc4], edx
        jmp     LF976
LF95D:
        mov     eax, dword ptr [esi + 0xc4]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0xc4], 0x0
LF976:
        mov     dword ptr [esi + 0xc8], ebp
LF97C:
        mov     ecx, dword ptr [esi + 0xc4]
        lea     eax, [edi + edi*2]
        shl     eax, 0x2
        lea     edx, [ecx + eax]
        mov     dword ptr [esi + 0xd4], edx
        mov     edx, edi
        shl     edx, 0x4
        add     eax, edx
        lea     edx, [ecx + eax]
        lea     edi, [ecx + edi*8]
        add     edi, eax
        mov     eax, dword ptr [esi + 0xd4]
        push    edx
        push    eax
        push    ecx
        push    edi
        lea     eax, [esi + 0xb4]
        push    eax
        lea     eax, [esi + 0xb0]
        mov     dword ptr [esi + 0xd0], ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    eax
        mov     dword ptr [esi + 0xd8], edx
        call    FUN_00445100
        push    edi
        mov     ecx, esi
        call    FUN_0049fa30
        xor     ecx, ecx
        or      eax, 0xffffffff
        pop     edi
        mov     dword ptr [esi + 0xa0], eax
        mov     dword ptr [esi + 0xa4], eax
        mov     dword ptr [esi + 0xa8], eax
        mov     dword ptr [esi + 0xac], ecx
        mov     dword ptr [esi + 0xb8], ecx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
