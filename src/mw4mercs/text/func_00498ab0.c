/*
 * FUN_00498ab0 (643 B) - MLR particle/flare buffer (re)allocation method.
 * __thiscall (ECX = this), 2 stack args (source object, flag), RET 0x8.
 *
 * Reallocates the profile buffer (FUN_004084d0 / FUN_0049a510 /
 * FUN_0049a520), the byte mask buffer, and the vertex/index buffers
 * (FUN_004450a0), then sets up channel pointers and calls FUN_00498d60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004940a0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0049a510(void);
extern void __cdecl FUN_0049a520(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004450a0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00445100(void);
extern void __cdecl FUN_00498d60(void);

extern int g_7da964;
extern int g_7b9598;

__declspec(naked) void FUN_00498ab0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_7da964]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004940a0
        mov     ebp, dword ptr [edi + 0x170]
        xor     ebx, ebx
        mov     dword ptr [esi + 0xb0], ebx
        mov     dword ptr [esi + 0xb8], ebx
        cmp     ebp, dword ptr [esi + 0xb0]
        mov     dword ptr [esi + 0xac], ebx
        mov     dword ptr [esi + 0xb4], ebx
        mov     dword ptr [esi], 0x7701dc
        mov     dword ptr [esp + 0x10], ebp
        jz      L_bce
        cmp     ebp, ebx
        jbe     L_bb3
        mov     edx, ebp
        shl     edx, 0x6
        push    edx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        cmp     edi, ebx
        jz      L_b4e
        lea     eax, [ebp - 0x1]
        test    eax, eax
        mov     ebx, edi
        jl      L_b44
        inc     eax
        mov     dword ptr [esp + 0x1c], eax
L_b2f:
        mov     ecx, ebx
        call    FUN_0049a510
        mov     eax, dword ptr [esp + 0x1c]
        add     ebx, 0x40
        dec     eax
        mov     dword ptr [esp + 0x1c], eax
        jnz     L_b2f
L_b44:
        mov     eax, edi
        mov     dword ptr [esp + 0x1c], eax
        xor     ebx, ebx
        jmp     L_b54
L_b4e:
        mov     dword ptr [esp + 0x1c], ebx
        mov     eax, ebx
L_b54:
        mov     ecx, dword ptr [esi + 0xac]
        cmp     ecx, ebx
        jz      L_ba7
        mov     ebx, dword ptr [esi + 0xb0]
        cmp     ebp, ebx
        jnc     L_b6a
        mov     ebx, ebp
L_b6a:
        mov     edx, ebx
        dec     ebx
        test    edx, edx
        jz      L_b94
        mov     edi, ebx
        shl     edi, 0x6
        mov     ebp, ecx
        add     edi, eax
        sub     ebp, eax
        inc     ebx
L_b7d:
        lea     eax, [edi + ebp*0x1]
        push    eax
        mov     ecx, edi
        call    FUN_0049a520
        dec     ebx
        sub     edi, 0x40
        test    ebx, ebx
        ja      L_b7d
        mov     ebp, dword ptr [esp + 0x10]
L_b94:
        mov     eax, dword ptr [esi + 0xac]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x4
L_ba7:
        mov     edi, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0xac], eax
        jmp     L_bc8
L_bb3:
        mov     ecx, dword ptr [esi + 0xac]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0xac], ebx
L_bc8:
        mov     dword ptr [esi + 0xb0], ebp
L_bce:
        mov     ebx, dword ptr [edi + 0x180]
        mov     edi, ebp
        lea     edx, [ebx + ebx*0x2]
        imul    edi, ebx
        lea     eax, [edx + edx*0x1 - 0x6]
        mov     edx, dword ptr [g_7b9598]
        add     ebp, 0x7fffffff
        imul    eax, ebp
        lea     ecx, [edi + edi*0x8]
        lea     ebp, [eax + ecx*0x2]
        push    edx
        shl     ebp, 0x1
        call    FUN_006f4950
        push    0xb4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_c24
        dec     ebx
        imul    ebx, dword ptr [esp + 0x10]
        shl     ebx, 0x1
        push    ebx
        mov     ecx, eax
        call    FUN_004450a0
        mov     dword ptr [esp + 0x18], eax
        jmp     L_c2c
L_c24:
        mov     dword ptr [esp + 0x18], 0x0
L_c2c:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0xbc], eax
        call    FUN_006f49a0
        mov     ebx, dword ptr [esi + 0xb8]
        cmp     ebp, ebx
        mov     dword ptr [esi + 0xa4], 0x0
        mov     dword ptr [esi + 0xa8], 0x0
        jz      L_cc6
        test    ebp, ebp
        jbe     L_ca7
        push    ebp
        call    FUN_004084d0
        mov     ecx, dword ptr [esi + 0xb4]
        add     esp, 0x4
        test    ecx, ecx
        mov     edx, eax
        mov     dword ptr [esp + 0x1c], edx
        jz      L_c9f
        cmp     ebp, ebx
        mov     eax, ebp
        jc      L_c7e
        mov     eax, ebx
L_c7e:
        mov     ebx, eax
        dec     eax
        test    ebx, ebx
        jz      L_c92
L_c85:
        mov     bl, byte ptr [ecx + eax*0x1]
        mov     byte ptr [eax + edx*0x1], bl
        mov     ebx, eax
        dec     eax
        test    ebx, ebx
        jnz     L_c85
L_c92:
        push    ecx
        call    FUN_004084e0
        mov     edx, dword ptr [esp + 0x20]
        add     esp, 0x4
L_c9f:
        mov     dword ptr [esi + 0xb4], edx
        jmp     L_cc0
L_ca7:
        mov     ecx, dword ptr [esi + 0xb4]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0xb4], 0x0
L_cc0:
        mov     dword ptr [esi + 0xb8], ebp
L_cc6:
        mov     ecx, dword ptr [esi + 0xb4]
        lea     eax, [edi + edi*0x2]
        shl     eax, 0x2
        lea     edx, [ecx + eax*0x1]
        mov     dword ptr [esi + 0xc4], edx
        mov     edx, edi
        shl     edx, 0x4
        add     eax, edx
        lea     edx, [ecx + eax*0x1]
        lea     edi, [ecx + edi*0x8]
        add     edi, eax
        mov     eax, dword ptr [esi + 0xc4]
        push    edx
        push    eax
        push    ecx
        push    edi
        lea     eax, [esi + 0xa8]
        push    eax
        lea     eax, [esi + 0xa4]
        mov     dword ptr [esi + 0xc0], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    eax
        mov     dword ptr [esi + 0xc8], edx
        call    FUN_00445100
        push    edi
        mov     ecx, esi
        call    FUN_00498d60
        pop     edi
        mov     dword ptr [esi + 0xa0], 0x0
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
